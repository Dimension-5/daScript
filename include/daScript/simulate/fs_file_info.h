#pragma once

#include "daScript/simulate/debug_info.h"

namespace das {

    class AnyFileSystem : public IOperatorNewBase {
    public:
        virtual ~AnyFileSystem() {}
        virtual FileInfo * tryOpenFile ( const string & fileName ) = 0;
    };

    struct EmbedCharArray {
        char const* path;
        char const* data;
        size_t compressed_size;
        size_t size;
        EmbedCharArray const* next;
        static EmbedCharArray const* head;
    };

    class EmbedFileSys final : public AnyFileSystem {
    public:
        static void addChar(const string& fileName, char const* ptr, size_t uncompressed_size, size_t size);
        FileInfo* tryOpenFile(const string& fileName) override;
    };

#if !DAS_NO_FILEIO
    class FsFileSystem : public AnyFileSystem {
    public:
        virtual FileInfo * tryOpenFile ( const string & fileName ) override;
    };

    class FsReadOnlyCachedFileSystem : public AnyFileSystem {
    public:
        virtual ~FsReadOnlyCachedFileSystem();
        virtual FileInfo * tryOpenFile ( const string & fileName ) override;
    protected:
        mutex fsm;
        das_map<uint64_t,FileInfoPtr>   files;
    };
#endif

    class FsFileAccess : public das::ModuleFileAccess {
    public:
        FsFileAccess ( bool add_default = true);
        FsFileAccess ( const string & pak, const FileAccessPtr & access );
        virtual ~FsFileAccess();
        virtual void createFileSystems();
        void addFileSystem ( AnyFileSystem * fs, bool firstToTry, bool sharedFs );
        virtual das::FileInfo * getNewFileInfo(const das::string & fileName) override;
        virtual ModuleInfo getModuleInfo ( const string & req, const string & from ) const override;
        virtual bool addFsRoot ( const string & , const string & ) override;
    protected:
        das_map<string, string> extraRoots;
        vector<pair<AnyFileSystem *,bool>>   fileSystems;
    };
}


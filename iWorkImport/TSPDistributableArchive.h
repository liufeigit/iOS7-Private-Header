/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class SFUFileDataRepresentation, SFUMemoryDataRepresentation, SFUZipEntry;



__attribute__((visibility("hidden")))

@interface TSPDistributableArchive : NSObject

{

    struct map<long long, std::__1::pair<long long, long long>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::pair<long long, long long>>>> *_entries;

    SFUFileDataRepresentation *_archiveFileRep;

    SFUMemoryDataRepresentation *_archiveMemoryRep;

    SFUZipEntry *_archiveZipEntryRep;

    struct {

        unsigned long long version;

        unsigned long long compatibleVersion;

    } _archivedVersions;

}



+ (_Bool)_checkFileHeader:(const char *)arg1 length:(unsigned long long)arg2 dffVersion:(unsigned short *)arg3 archivedVersions:(CDStruct_4bcfbbae *)arg4 defaultObjectVersion:(unsigned int *)arg5 hasDescriptors:(_Bool *)arg6 hasToc:(_Bool *)arg7 otherDataLength:(unsigned int *)arg8 closedCleanly:(_Bool *)arg9;

+ (id)_newStringFromUtf8DataInStream:(id)arg1 length:(unsigned long long)arg2;

+ (void)cancelStreaming;

+ (_Bool)readArchivedVersionsFromStream:(id)arg1 versions:(CDStruct_4bcfbbae *)arg2 error:(id *)arg3;

+ (_Bool)readCheckCrcFromArchiveInputStream:(id)arg1 crc:(unsigned int *)arg2 error:(id *)arg3;

+ (_Bool)streamDistributableArchive:(id)arg1 estimatedDataLength:(long long)arg2 toUnarchiver:(id)arg3 supplementalDataBundle:(id)arg4 closedCleanly:(_Bool *)arg5 context:(id)arg6 error:(id *)arg7;

- (id).cxx_construct;

- (void).cxx_destruct;

- (id)_createInputStreamWithOffset:(long long)arg1 length:(long long)arg2;

- (_Bool)_readEntriesFromToc:(id)arg1 error:(id *)arg2;

- (CDStruct_4bcfbbae)archivedVersions;

- (_Bool)containsObjectWithIdentifier:(long long)arg1;

- (id)createStreamForObject:(long long)arg1 length:(long long *)arg2;

- (void)dealloc;

- (id)initWithDffData:(id)arg1 error:(id *)arg2;

- (long long)lengthOfObject:(long long)arg1;



@end



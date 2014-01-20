/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@class NSDictionary, NSString;



@interface NSFileWrapper : NSObject <NSCoding>

{

    NSDictionary *_fileAttributes;

    NSString *_preferredFileName;

    NSString *_fileName;

    id _contents;

    id _icon;

    id _moreVars;

}



+ (_Bool)_canSafelyMapFilesAtPath:(id)arg1;

+ (_Bool)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;

+ (_Bool)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id *)arg6;

+ (_Bool)_forPath:(id)arg1 getItemKind:(id *)arg2 modificationDate:(id *)arg3;

+ (id)_newContentsAtURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 oldChildrenByUniqueFileName:(id)arg4 options:(unsigned long long)arg5 error:(id *)arg6;

+ (id)_pathForURL:(id)arg1 reading:(_Bool)arg2 error:(id *)arg3;

+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;

+ (id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id *)arg2;

+ (void)_writeAttributes:(id)arg1 toURL:(id)arg2;

+ (void)initialize;

- (id)_addChild:(id)arg1 forUniqueFileName:(id)arg2;

- (void)_addParent:(id)arg1;

- (id)_attributesToWrite;

- (void)_forWritingToURL:(id)arg1 returnContentsLazyReadingError:(id *)arg2;

- (id)_fullDescription:(_Bool)arg1;

- (id)_init;

- (void)_initDirectoryContents;

- (id)_initWithImpl:(id)arg1 preferredFileName:(id)arg2 uniqueFileName:(id)arg3 docInfo:(id)arg4 iconData:(id)arg5;

- (_Bool)_matchesItemKind:(id)arg1 modificationDate:(id)arg2;

- (id)_newImpl;

- (void)_observePreferredFileNameOfChild:(id)arg1;

- (_Bool)_readContentsFromURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5;

- (void)_removeChild:(id)arg1 forUniqueFileName:(id)arg2;

- (void)_removeParent:(id)arg1;

- (void)_resetFileModificationDate;

- (id)_uniqueFileNameOfChild:(id)arg1;

- (void)_updateDescendantFileNames;

- (_Bool)_writeContentsToURL:(id)arg1 path:(id)arg2 originalContentsURL:(id)arg3 tryHardLinking:(_Bool)arg4 didHardLinking:(_Bool *)arg5 error:(id *)arg6;

- (id)addFileWrapper:(id)arg1;

- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)fileAttributes;

- (id)fileWrappers;

- (id)filename;

- (id)init;

- (id)initDirectoryWithFileWrappers:(id)arg1;

- (id)initRegularFileWithContents:(id)arg1;

- (id)initSymbolicLinkWithDestinationURL:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithSerializedRepresentation:(id)arg1;

- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

- (_Bool)isDirectory;

- (_Bool)isRegularFile;

- (_Bool)isSymbolicLink;

- (id)keyForFileWrapper:(id)arg1;

- (_Bool)matchesContentsOfURL:(id)arg1;

- (id)preferredFilename;

- (_Bool)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

- (id)regularFileContents;

- (void)removeFileWrapper:(id)arg1;

- (id)serializedRepresentation;

- (void)setFileAttributes:(id)arg1;

- (void)setFilename:(id)arg1;

- (void)setPreferredFilename:(id)arg1;

- (id)symbolicLinkDestinationURL;

- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;



@end


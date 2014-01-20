/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLPhotoDCFObject.h"


@class PLPhotoDCIMDirectory;



@interface PLPhotoDCFDirectory : PLPhotoDCFObject

{

    PLPhotoDCIMDirectory *_dcimDirectory;

    struct __CFDictionary *_fileGroupsByNumber;

    int _maxFileGroupNumber;

    int _lastUsedFileGroupNumber;

    _Bool _considerInvalidFileGroups;

}



+ (id)fileGroupRequiredEmptyExtensions;

+ (id)fileGroupRequiredEmptyPrefixes;

+ (void)initializeFileGroupPrefixAndExtensions;

- (unsigned int)_calculateBaseDirectoryValue;

- (_Bool)_canAddItemWithPrefix:(id)arg1;

- (_Bool)_canAddItemWithPrefix:(id)arg1 minimumFileGroupNumber:(int)arg2;

- (id)_lastUsedFileGroupUserInfoKey;

- (id)_nextAvailableFileGroupWithPrefix:(id)arg1 extension:(id)arg2;

- (_Bool)canAddFileGroupWithGroupNumber:(int)arg1;

- (_Bool)canAddImage;

- (_Bool)canAddVideo;

@property _Bool considerInvalidFileGroups; // @synthesize considerInvalidFileGroups=_considerInvalidFileGroups;

- (id)dcimDirectory;

- (void)dealloc;

- (void)ensureDirectoryExists;

- (id)fileGroups;

- (id)fullPath;

- (id)initWithName:(id)arg1 number:(int)arg2 dcimDirectory:(id)arg3;

- (_Bool)isEntensionValid:(id)arg1;

- (id)nextAvailableFileGroup;

- (id)nextAvailableVideoFileGroupWithExtension:(id)arg1;

- (void)removeFileGroup:(id)arg1;

- (void)setWriteIsPending:(_Bool)arg1;



@end


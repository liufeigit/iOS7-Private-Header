/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSDictionary, NSUUID;



__attribute__((visibility("hidden")))

@interface TSPDocumentProperties : NSObject <NSCopying>

{

    NSUUID *_documentUUID;

    NSUUID *_versionUUID;

    unsigned long long _fileFormatVersion;

    NSUUID *_nextVersionUUID;

    NSDictionary *_additionalProperties;

}



+ (_Bool)documentIsEncryptedAtURL:(id)arg1;

+ (id)documentUUIDAtURL:(id)arg1;

- (void).cxx_destruct;

- (id)UUIDFromDocumentProperties:(id)arg1 key:(id)arg2;

@property(readonly, nonatomic) NSDictionary *additionalProperties; // @synthesize additionalProperties=_additionalProperties;

- (id)copyWithAdditionalProperties:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (id)documentIdentifierURLForDocumentURL:(id)arg1;

- (id)documentPropertiesURLForDocumentURL:(id)arg1;

@property(copy, nonatomic) NSUUID *documentUUID; // @synthesize documentUUID=_documentUUID;

@property(nonatomic) unsigned long long fileFormatVersion; // @synthesize fileFormatVersion=_fileFormatVersion;

@property(readonly, nonatomic) _Bool hasCurrentFileFormatVersion;

- (id)init;

- (id)initWithDocumentURL:(id)arg1 error:(id *)arg2;

- (id)initWithPropertiesURL:(id)arg1 error:(id *)arg2;

@property(copy, nonatomic) NSUUID *nextVersionUUID; // @synthesize nextVersionUUID=_nextVersionUUID;

- (void)readDocumentPropertiesFromDictionary:(id)arg1;

@property(copy, nonatomic) NSUUID *versionUUID; // @synthesize versionUUID=_versionUUID;

- (void)updateDocumentUUID;

- (void)updateVersionUUID;

- (_Bool)writeToDocumentURL:(id)arg1 error:(id *)arg2;

- (_Bool)writeToPropertiesURL:(id)arg1 error:(id *)arg2;



@end


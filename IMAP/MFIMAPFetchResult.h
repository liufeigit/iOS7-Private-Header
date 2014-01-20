/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSData, NSDate, NSString;



@interface MFIMAPFetchResult : NSObject

{

    int _itemType;

    unsigned long long _modSequenceNumber;

    union {

        NSArray *envelope;

        NSDate *internalDate;

        unsigned long long messageSize;

        NSArray *bodyStructure;

        struct {

            NSString *section;

            unsigned long long startOffset;

            NSData *sectionData;

        } bodySectionInfo;

        unsigned int uid;

        unsigned long long uniqueRemoteId;

        struct {

            unsigned long long messageFlags;

            NSArray *customFlags;

        } flags;

    } _typeSpecific;

}



- (id)bodyStructure;

- (id)customFlagsArray;

- (void)dealloc;

- (id)description;

- (unsigned int)encoding;

- (id)envelope;

- (id)fetchData;

- (id)flagsArray;

- (id)initWithType:(int)arg1;

- (id)internalDate;

- (unsigned long long)messageFlags;

- (unsigned long long)messageSize;

- (unsigned long long)modSequenceNumber;

- (id)section;

- (void)setBodyStructure:(id)arg1;

- (void)setCustomFlagsArray:(id)arg1;

- (void)setEnvelope:(id)arg1;

- (void)setFetchData:(id)arg1;

- (void)setFlagsArray:(id)arg1;

- (void)setInternalDate:(id)arg1;

- (void)setMessageFlags:(unsigned long long)arg1;

- (void)setMessageSize:(unsigned long long)arg1;

- (void)setModSequenceNumber:(unsigned long long)arg1;

- (void)setSection:(id)arg1;

- (void)setStartOffset:(unsigned long long)arg1;

- (void)setUid:(unsigned int)arg1;

- (void)setUniqueRemoteId:(unsigned long long)arg1;

- (unsigned long long)startOffset;

- (int)type;

- (unsigned int)uid;

- (unsigned long long)uniqueRemoteId;



@end


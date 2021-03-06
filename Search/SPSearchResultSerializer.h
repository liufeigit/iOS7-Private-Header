/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBDataWriter.h"



@class NSMutableArray;



@interface SPSearchResultSerializer : PBDataWriter

{

    unsigned long long _byteVector;

    unsigned int _byteVectorCnt;

    unsigned int _byteVectorCapacity;

    NSMutableArray *_sections;

    Class _lastResultClass;

    _Bool _respondsToTitleUTF8String;

    _Bool _respondsToSubtitleUTF8String;

    _Bool _respondsToAuxiliaryTitleUTF8String;

    _Bool _respondsToAuxiliarySubtitleUTF8String;

    _Bool _respondsToSummaryUTF8String;

    _Bool _respondsToIdentifier;

    _Bool _respondsToURL;

    _Bool _respondsToBadgeValue;

    _Bool _inProc;

    _Bool _completed;

}



- (unsigned long long)_allocateSize:(unsigned long long)arg1;

- (id)_convertConformingResult:(id)arg1;

- (_Bool)appendResult:(id)arg1;

- (_Bool)appendResult:(id)arg1 toSection:(id)arg2;

- (_Bool)appendSection:(id)arg1;

- (unsigned long long)byteVector;

- (unsigned int)byteVectorCount;

@property(readonly, nonatomic) _Bool completed; // @synthesize completed=_completed;

- (void)dealloc;

- (id)init;

- (id)initWithInitialCapacity:(unsigned int)arg1;

- (id)initWithInitialCapacity:(unsigned int)arg1 inProc:(_Bool)arg2;

- (unsigned int)sectionCount;

- (void)serialize;

- (unsigned long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface GEOVLabelLanguage : PBCodable

{

    unsigned int _endOffset;

    NSString *_languageLocale;

    unsigned int _startOffset;

}



- (void)copyTo:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) unsigned int endOffset; // @synthesize endOffset=_endOffset;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) NSString *languageLocale; // @synthesize languageLocale=_languageLocale;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) unsigned int startOffset; // @synthesize startOffset=_startOffset;

- (void)writeTo:(id)arg1;



@end


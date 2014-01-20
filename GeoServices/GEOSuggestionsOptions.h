/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSData;



@interface GEOSuggestionsOptions : PBCodable <NSCopying>

{

    int _entriesType;

    int _listType;

    NSData *_suggestionEntryMetadata;

    NSData *_suggestionMetadata;

    struct {

        unsigned int entriesType:1;

        unsigned int listType:1;

    } _has;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) int entriesType; // @synthesize entriesType=_entriesType;

@property(nonatomic) _Bool hasEntriesType;

@property(nonatomic) _Bool hasListType;

@property(readonly, nonatomic) _Bool hasSuggestionEntryMetadata;

@property(readonly, nonatomic) _Bool hasSuggestionMetadata;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) int listType; // @synthesize listType=_listType;

- (_Bool)readFrom:(id)arg1;

@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;

@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;

- (void)writeTo:(id)arg1;



@end


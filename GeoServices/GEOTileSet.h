/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSMutableArray, NSString;



@interface GEOTileSet : PBCodable <NSCopying>

{

    NSString *_baseURL;

    NSString *_localizationURL;

    NSString *_multiTileURL;

    int _scale;

    int _size;

    int _style;

    NSMutableArray *_supportedLanguages;

    NSMutableArray *_validVersions;

    _Bool _multiTileURLUsesStatusCodes;

    struct {

        unsigned int multiTileURLUsesStatusCodes:1;

    } _has;

}



- (void)addSupportedLanguage:(id)arg1;

- (void)addValidVersion:(id)arg1;

@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;

- (void)clearSupportedLanguages;

- (void)clearValidVersions;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(readonly, nonatomic) _Bool hasBaseURL;

@property(readonly, nonatomic) _Bool hasLocalizationURL;

@property(readonly, nonatomic) _Bool hasMultiTileURL;

@property(nonatomic) _Bool hasMultiTileURLUsesStatusCodes;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) NSString *localizationURL; // @synthesize localizationURL=_localizationURL;

@property(retain, nonatomic) NSString *multiTileURL; // @synthesize multiTileURL=_multiTileURL;

@property(nonatomic) _Bool multiTileURLUsesStatusCodes; // @synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) int scale; // @synthesize scale=_scale;

@property(nonatomic) int size; // @synthesize size=_size;

@property(nonatomic) int style; // @synthesize style=_style;

@property(retain, nonatomic) NSMutableArray *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;

@property(retain, nonatomic) NSMutableArray *validVersions; // @synthesize validVersions=_validVersions;

- (id)supportedLanguageAtIndex:(unsigned long long)arg1;

- (unsigned long long)supportedLanguagesCount;

- (id)validVersionAtIndex:(unsigned long long)arg1;

- (unsigned long long)validVersionsCount;

- (void)writeTo:(id)arg1;



@end



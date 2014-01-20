/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface VKPGenericShieldStylePack : PBCodable

{

    NSMutableArray *_genericShields;

    NSMutableArray *_textureAtlas;

}



- (void)addGenericShield:(id)arg1;

- (void)addTextureAtlas:(id)arg1;

- (void)clearGenericShields;

- (void)clearTextureAtlas;

- (void)copyTo:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (id)genericShieldAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *genericShields; // @synthesize genericShields=_genericShields;

- (unsigned long long)genericShieldsCount;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

@property(retain, nonatomic) NSMutableArray *textureAtlas; // @synthesize textureAtlas=_textureAtlas;

- (id)textureAtlasAtIndex:(unsigned long long)arg1;

- (unsigned long long)textureAtlasCount;

- (void)writeTo:(id)arg1;



@end


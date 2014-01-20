/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DTextureTiling.h"


__attribute__((visibility("hidden")))

@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling

{

    tvec2_84d5962d mScale;

    float mRotation;

}



+ (id)instanceWithArchive:(const struct Chart3DBaseImageTextureTilingArchive *)arg1 unarchiver:(id)arg2;

- (id).cxx_construct;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)hash;

- (id)initWithArchive:(const struct Chart3DBaseImageTextureTilingArchive *)arg1 unarchiver:(id)arg2;

- (_Bool)isEqual:(id)arg1;

- (void)restoreDefault;

@property(nonatomic) float rotation; // @synthesize rotation=mRotation;

- (void)saveToArchive:(struct Chart3DBaseImageTextureTilingArchive *)arg1 archiver:(id)arg2;

@property(nonatomic) tvec2_84d5962d scale; // @synthesize scale=mScale;



@end


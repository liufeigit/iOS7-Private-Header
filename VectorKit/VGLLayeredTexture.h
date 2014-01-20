/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLTexture.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface VGLLayeredTexture : VGLTexture

{

    char *_imageData;

    _Bool _hasFillColor;

    struct _VGLColor _baseColor;

    NSString *_fillTextureName;

    struct CGImage *_fillImage;

    CDStruct_ce289cdd _textureLayerProperties;

    NSString *_secondFillTextureName;

    struct CGImage *_secondFillImage;

    CDStruct_ce289cdd _secondTextureLayerProperties;

    NSString *_thirdFillTextureName;

    struct CGImage *_thirdFillImage;

    CDStruct_ce289cdd _thirdTextureLayerProperties;

}



+ (void)purge;

+ (id)textureWithName:(id)arg1 style:(id)arg2 levelOfDetail:(unsigned long long)arg3 scale:(double)arg4;

- (id).cxx_construct;

- (void)_addColor:(struct _VGLColor)arg1;

- (void)_addTextureLayerWithName:(id)arg1 properties:(CDStruct_ce289cdd)arg2;

- (void)_buildWithStyle:(id)arg1 levelOfDetail:(unsigned long long)arg2 scale:(double)arg3;

- (id)_createVKImageForName:(id)arg1 scale:(double)arg2;

- (void)dealloc;

- (_Bool)decodeTexture;

- (id)initWithName:(id)arg1;

- (_Bool)loadTexture;



@end


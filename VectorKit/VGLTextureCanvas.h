/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "VGLCanvas.h"



@class VGLContext, VGLResource, VGLTexture, VGLTextureFramebuffer;



__attribute__((visibility("hidden")))

@interface VGLTextureCanvas : NSObject <VGLCanvas>

{

    VGLContext *_targetContext;

    VGLTexture *_targetTexture;

    struct CGSize _size;

    struct CGSize _sizeInPixels;

    double _contentScale;

    struct _VGLColor _glClearColor;

    VGLResource *_framebufferResource;

    VGLResource *_depthbufferResource;

    VGLTextureFramebuffer *_framebuffer;

}



+ (Class)contextClass;

- (id).cxx_construct;

- (void)_bindFramebuffer;

- (id)_framebufferResource;

@property(readonly, nonatomic) double contentScale; // @synthesize contentScale=_contentScale;

- (void)dealloc;

- (id)description;

- (void)didDrawView;

- (void)dumpTextureToPath:(id)arg1;

@property(nonatomic) struct _VGLColor glClearColor; // @synthesize glClearColor=_glClearColor;

- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2;

- (void)setRasterizedContext:(id)arg1;

@property(retain, nonatomic) VGLTexture *targetTexture; // @synthesize targetTexture=_targetTexture;

@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;

@property(readonly, nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;

@property(readonly, nonatomic) VGLContext *vglContext; // @synthesize vglContext=_targetContext;

- (void)willDrawView;



@end



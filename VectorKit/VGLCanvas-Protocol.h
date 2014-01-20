/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class VGLContext;



@protocol VGLCanvas <NSObject>

+ (Class)contextClass;

@property(readonly, nonatomic) double contentScale;

- (void)didDrawView;

@property(readonly, nonatomic) struct CGSize size;

@property(readonly, nonatomic) struct CGSize sizeInPixels;

@property(readonly, nonatomic) VGLContext *vglContext;

- (void)willDrawView;

@end


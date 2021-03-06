/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;



@interface SBFMappedImageCache : NSObject

{

    NSObject<OS_dispatch_queue> *_queue;

    NSString *_path;

    NSMutableDictionary *_images;

}



+ (id)wallpaperCache;

- (void)dealloc;

- (id)imageForKey:(id)arg1;

- (id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(id)arg2;

- (id)imageForKey:(id)arg1 options:(int)arg2;

- (id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(id)arg3;

- (id)initWithDescription:(id)arg1;

- (void)removeAllObjects;

- (void)removeImageForKey:(id)arg1;

- (void)setImage:(id)arg1 forKey:(id)arg2;

- (void)warmupImageForKey:(id)arg1;



@end



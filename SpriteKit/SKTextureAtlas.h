/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@class NSArray, NSDictionary, NSString;



@interface SKTextureAtlas : NSObject <NSCoding>

{

    NSDictionary *_textureDict;

    NSString *_atlasName;

}



+ (id)atlasNamed:(id)arg1;

+ (id)findTextureNamed:(id)arg1;

+ (id)getSupportedPostfixes;

+ (void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(id)arg2;

- (void).cxx_destruct;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)findTextureNamedFromAtlas:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (void)loadTextures;

- (void)preload;

- (void)preloadWithCompletionHandler:(id)arg1;

- (id)textureNamed:(id)arg1;

@property(readonly, nonatomic) NSArray *textureNames;

- (void)unload;



@end


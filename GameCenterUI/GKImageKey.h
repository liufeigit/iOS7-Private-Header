/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface GKImageKey : NSObject

{

    NSString *_filePath;

    NSString *_cacheKey;

    NSString *_imageID;

    NSString *_basename;

    struct CGSize _size;

}



+ (id)fileNameWithIdentifierInImageSource:(id)arg1;

+ (id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2;

@property(retain, nonatomic) NSString *basename; // @synthesize basename=_basename;

@property(readonly, nonatomic) NSString *cacheKey;

- (void)dealloc;

@property(readonly, nonatomic) NSString *filePath;

@property(retain, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;

@property(nonatomic) struct CGSize size; // @synthesize size=_size;



@end



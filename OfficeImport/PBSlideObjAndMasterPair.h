/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class PDSlide;



__attribute__((visibility("hidden")))

@interface PBSlideObjAndMasterPair : NSObject

{

    PDSlide *mSlide;

    int mMasterId;

}



+ (id)createPair:(id)arg1 masterId:(int)arg2;

- (void)dealloc;

- (int)masterId;

- (void)setSlide:(id)arg1 masterId:(int)arg2;

- (id)slide;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSKRulerUnits;



__attribute__((visibility("hidden")))

@interface TPMarginValueSnapper : NSObject

{

    TSKRulerUnits *_rulerUnits;

    double _visiblePageWidth;

    double _screenScale;

}



- (void)dealloc;

- (id)initWithRulerUnits:(id)arg1 visiblePageSize:(struct CGSize)arg2 screenScale:(double)arg3;

- (double)snapMarginValue:(double)arg1;



@end


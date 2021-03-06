/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDAlignmentGuide.h"


@class TSDSpacing, TSDSpacingGuideUILayer, TSDSwappableAxesGeometry;



__attribute__((visibility("hidden")))

@interface TSDSpacingGuide : TSDAlignmentGuide

{

    TSDSpacing *mParentSpacing;

    struct CGRect mGeneratingObjectRect;

    TSDSpacingGuideUILayer *mSpacingUILayer;

    TSDSwappableAxesGeometry *mVerticalGeom;

}



- (_Bool)canBeSnappedToByEdge:(int)arg1 ofFrame:(struct CGRect)arg2;

- (long long)compare:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)initForEdge:(int)arg1 ofGeneratingObjectRect:(struct CGRect)arg2 andParentSpacing:(id)arg3;

- (id)layerWithICC:(id)arg1;

@property(nonatomic) TSDSpacing *parentSpacing; // @synthesize parentSpacing=mParentSpacing;



@end



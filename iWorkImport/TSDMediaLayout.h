/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDStyledLayout.h"


@class TSDMutableStroke;



__attribute__((visibility("hidden")))

@interface TSDMediaLayout : TSDStyledLayout

{

    struct CGRect mCachedAlignmentFrame;

    struct {

        unsigned int alignmentFrame:1;

    } mMediaInvalidFlags;

    TSDMutableStroke *mDynamicStroke;

    _Bool mShouldRenderFrameStroke;

    struct CGRect mBoundsForStandardKnobs;

}



- (struct CGRect)alignmentFrame;

- (struct CGRect)alignmentFrameInRoot;

@property(nonatomic) struct CGRect boundsForStandardKnobs;

- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;

- (void)dynamicStrokeWidthChangeDidBegin;

- (void)dynamicStrokeWidthChangeDidEnd;

- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;

- (id)initWithInfo:(id)arg1;

- (void)invalidateAlignmentFrame;

- (_Bool)isStrokeBeingManipulated;

- (id)mediaInfo;

- (void)processChangedProperty:(int)arg1;

- (void)setGeometry:(id)arg1;

@property(nonatomic) _Bool shouldRenderFrameStroke;

- (id)stroke;

- (_Bool)supportsRotation;



@end


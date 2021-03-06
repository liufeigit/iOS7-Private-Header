/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class WDBorder, WDShading;



__attribute__((visibility("hidden")))

@interface WDTableCellDescriptor : NSObject

{

    WDShading *mShading;

    WDBorder *mTopBorder;

    WDBorder *mLeftBorder;

    WDBorder *mBottomBorder;

    WDBorder *mRightBorder;

    WDBorder *mDiagonalUpBorder;

    WDBorder *mDiagonalDownBorder;

    short mWidth;

    int mWidthType;

    short mTopMargin;

    int mTopMarginType;

    short mBottomMargin;

    int mBottomMarginType;

    short mLeftMargin;

    int mLeftMarginType;

    short mRightMargin;

    int mRightMarginType;

    int mVerticalAlignment;

    unsigned int mShadingOverridden:1;

    unsigned int mTopBorderOverridden:1;

    unsigned int mLeftBorderOverridden:1;

    unsigned int mBottomBorderOverridden:1;

    unsigned int mRightBorderOverridden:1;

    unsigned int mDiagonalUpBorderOverridden:1;

    unsigned int mDiagonalDownBorderOverridden:1;

    unsigned int mWidthTypeOverridden:1;

    unsigned int mTopMarginOverridden:1;

    unsigned int mTopMarginTypeOverridden:1;

    unsigned int mBottomMarginOverridden:1;

    unsigned int mBottomMarginTypeOverridden:1;

    unsigned int mLeftMarginOverridden:1;

    unsigned int mLeftMarginTypeOverridden:1;

    unsigned int mRightMarginOverridden:1;

    unsigned int mRightMarginTypeOverridden:1;

    unsigned int mVerticalAlignmentOverridden:1;

    unsigned int mVerticallyMergedCell:1;

    unsigned int mVerticallyMergedCellOverridden:1;

    unsigned int mFirstInSetOfVerticallyMergedCells:1;

    unsigned int mFirstInSetOfVerticallyMergedCellsOverridden:1;

    unsigned int mNoWrap:1;

    unsigned int mNoWrapOverridden:1;

}



- (id)bottomBorder;

- (short)bottomMargin;

- (int)bottomMarginType;

- (id)diagonalDownBorder;

- (id)diagonalUpBorder;

- (_Bool)firstInSetOfVerticallyMergedCells;

- (_Bool)isBottomBorderOverridden;

- (_Bool)isBottomMarginOverridden;

- (_Bool)isBottomMarginTypeOverridden;

- (_Bool)isDiagonalDownBorderOverridden;

- (_Bool)isDiagonalUpBorderOverridden;

- (_Bool)isFirstInSetOfVerticallyMergedCellsOverridden;

- (_Bool)isLeftBorderOverridden;

- (_Bool)isLeftMarginOverridden;

- (_Bool)isLeftMarginTypeOverridden;

- (_Bool)isNoWrapOverridden;

- (_Bool)isRightBorderOverridden;

- (_Bool)isRightMarginOverridden;

- (_Bool)isRightMarginTypeOverridden;

- (_Bool)isShadingOverridden;

- (_Bool)isTopBorderOverridden;

- (_Bool)isTopMarginOverridden;

- (_Bool)isTopMarginTypeOverridden;

- (_Bool)isVerticalAlignmentOverridden;

- (_Bool)isVerticallyMergedCellOverridden;

- (_Bool)isWidthTypeOverridden;

- (id)leftBorder;

- (short)leftMargin;

- (int)leftMarginType;

- (_Bool)noWrap;

- (id)rightBorder;

- (short)rightMargin;

- (int)rightMarginType;

- (void)setBottomBorder:(id)arg1;

- (void)setBottomBorderOverridden:(_Bool)arg1;

- (void)setBottomMargin:(short)arg1;

- (void)setBottomMarginOverridden:(_Bool)arg1;

- (void)setBottomMarginType:(int)arg1;

- (void)setBottomMarginTypeOverridden:(_Bool)arg1;

- (void)setDiagonalDownBorder:(id)arg1;

- (void)setDiagonalDownBorderOverridden:(_Bool)arg1;

- (void)setDiagonalUpBorder:(id)arg1;

- (void)setDiagonalUpBorderOverridden:(_Bool)arg1;

- (void)setFirstInSetOfVerticallyMergedCells:(_Bool)arg1;

- (void)setFirstInSetOfVerticallyMergedCellsOverridden:(_Bool)arg1;

- (void)setLeftBorder:(id)arg1;

- (void)setLeftBorderOverridden:(_Bool)arg1;

- (void)setLeftMargin:(short)arg1;

- (void)setLeftMarginOverridden:(_Bool)arg1;

- (void)setLeftMarginType:(int)arg1;

- (void)setLeftMarginTypeOverridden:(_Bool)arg1;

- (void)setNoWrap:(_Bool)arg1;

- (void)setNoWrapOverridden:(_Bool)arg1;

- (void)setRightBorder:(id)arg1;

- (void)setRightBorderOverridden:(_Bool)arg1;

- (void)setRightMargin:(short)arg1;

- (void)setRightMarginOverridden:(_Bool)arg1;

- (void)setRightMarginType:(int)arg1;

- (void)setRightMarginTypeOverridden:(_Bool)arg1;

- (void)setShading:(id)arg1;

- (void)setShadingOverridden:(_Bool)arg1;

- (void)setTopBorder:(id)arg1;

- (void)setTopBorderOverridden:(_Bool)arg1;

- (void)setTopMargin:(short)arg1;

- (void)setTopMarginOverridden:(_Bool)arg1;

- (void)setTopMarginType:(int)arg1;

- (void)setTopMarginTypeOverridden:(_Bool)arg1;

- (void)setVerticalAlignment:(int)arg1;

- (void)setVerticalAlignmentOverridden:(_Bool)arg1;

- (void)setVerticallyMergedCell:(_Bool)arg1;

- (void)setVerticallyMergedCellOverridden:(_Bool)arg1;

- (void)setWidth:(short)arg1;

- (void)setWidthType:(int)arg1;

- (void)setWidthTypeOverridden:(_Bool)arg1;

- (id)shading;

- (id)topBorder;

- (short)topMargin;

- (int)topMarginType;

- (int)verticalAlignment;

- (_Bool)verticallyMergedCell;

- (int)widthType;



@end



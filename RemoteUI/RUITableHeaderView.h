/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class UILabel;



@interface RUITableHeaderView : UIView

{

    UILabel *_titleLabel;

    struct UIEdgeInsets _titleLabelPadding;

}



- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(nonatomic) struct UIEdgeInsets titleLabelPadding; // @synthesize titleLabelPadding=_titleLabelPadding;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;



@end


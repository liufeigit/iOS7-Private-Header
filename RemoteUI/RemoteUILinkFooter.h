/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "RemoteUITableFooter.h"



@class UIButton;



@interface RemoteUILinkFooter : UIView <RemoteUITableFooter>

{

    UIButton *_linkButton;

    id _delegate;

}



- (void)_linkPressed;

- (void)dealloc;

- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;

- (id)initWithAttributes:(id)arg1;

- (void)layoutSubviews;

@property(readonly, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;

- (void)setDelegate:(id)arg1;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewCell.h"



@class NSString, UIImage, UILabel, _CertInfoActionButton, _CertInfoGradientLabel;



@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell

{

    UIImage *_certificateImage;

    UIImage *_notTrustedGradient;

    UILabel *_titleLabel;

    UILabel *_subtitleLabel;

    _CertInfoActionButton *_actionButton;

    _CertInfoGradientLabel *_trustedLabel;

    _Bool _trusted;

}



- (void)_layoutSubviewsWithActionButtonSize:(struct CGSize)arg1;

- (id)_subtitleLabel;

- (id)_titleLabel;

- (id)_trustedLabel;

@property(readonly, nonatomic) _CertInfoActionButton *actionButton;

- (void)dealloc;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@property(nonatomic, getter=isTrusted) _Bool trusted; // @synthesize trusted=_trusted;

- (void)layoutSubviews;

@property(readonly, nonatomic) double rowHeight;

- (void)setActionButtonTitle:(id)arg1 destructive:(_Bool)arg2 animated:(_Bool)arg3;

- (void)setExpired:(_Bool)arg1;

@property(copy, nonatomic) NSString *trustSubtitle;

@property(copy, nonatomic) NSString *trustTitle;



@end


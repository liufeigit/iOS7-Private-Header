/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKEventDetailCell.h"


@class UILabel;



__attribute__((visibility("hidden")))

@interface EKEventDetailTwoValueCell : EKEventDetailCell

{

    int _style;

    UILabel *_titleView;

    UILabel *_valueView;

    UILabel *_value2View;

}



- (void).cxx_destruct;

- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 platformStyle:(int)arg3;

- (void)layoutForWidth:(double)arg1 position:(int)arg2;

- (int)style;

- (id)titleView;

- (_Bool)update;

- (id)value2View;

- (id)valueView;

@property(readonly, nonatomic) unsigned int visibleItems;



@end


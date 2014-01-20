/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIActionSheetDelegate.h"



@class PKPassView, UIActionSheet;



@interface PKPassDeleteSheet : NSObject <UIActionSheetDelegate>

{

    UIActionSheet *_actionSheet;

    id <PKPassDeleteDelegate> _delegate;

    PKPassView *_passView;

}



+ (void)performPassbookDeleteWithView:(id)arg1 completion:(id)arg2;

- (void)_applicationDidEnterBackground:(id)arg1;

- (void)_registerForEnterBackgroundNotification;

- (void)_startAnimation;

- (void)_unregisterForEnterBackgroundNotification;

- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;

- (void)dealloc;

@property(nonatomic) id <PKPassDeleteDelegate> delegate; // @synthesize delegate=_delegate;

- (void)finished:(_Bool)arg1;

- (id)initWithPassView:(id)arg1;

@property(retain, nonatomic) PKPassView *passView; // @synthesize passView=_passView;

- (void)showInView:(id)arg1;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITabBarController.h"



@class GKBubbleFlowRootViewController, NSArray;



@interface GKTabBarController : UITabBarController

{

    GKBubbleFlowRootViewController *_bubbleFlowRootViewController;

    unsigned long long _deferedRotationCount;

}



- (void)_ensureWeHaveAPresentedBubbleFlowRootViewController;

- (_Bool)_hasBubbleFlowRootViewController;

- (_Bool)_isBeingCoveredByBubbleFlowRootViewController;

- (_Bool)_useBubbleFlowRootViewControllerToPresent:(id)arg1;

@property(retain, nonatomic) GKBubbleFlowRootViewController *bubbleFlowRootViewController; // @synthesize bubbleFlowRootViewController=_bubbleFlowRootViewController;

- (void)clearInterstitialViewAnimated:(_Bool)arg1;

- (void)dealloc;

- (id)deferRotation;

@property(nonatomic) unsigned long long deferedRotationCount; // @synthesize deferedRotationCount=_deferedRotationCount;

- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(id)arg2;

- (id)init;

- (long long)lastKnownOrientation;

@property(readonly, nonatomic) NSArray *modalChildViewControllers;

- (void)popAllModalViewControllersAnimated:(_Bool)arg1 completion:(id)arg2;

- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;

- (_Bool)shouldAutorotate;

- (void)showInterstitialViewAnimated:(_Bool)arg1;

@property(readonly, nonatomic) _Bool tabBarCovered;

- (id)viewControllers;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end



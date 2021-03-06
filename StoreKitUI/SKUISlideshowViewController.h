/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "SKUISlideshowItemViewControllerDelegate.h"

#import "UIPageViewControllerDataSource.h"

#import "UIPageViewControllerDelegate.h"

#import "UIViewControllerTransitioningDelegate.h"



@class NSMutableDictionary, NSOperationQueue, SKUIClientContext, UIPageViewController, UIPercentDrivenInteractiveTransition;



@interface SKUISlideshowViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, SKUISlideshowItemViewControllerDelegate, UIViewControllerTransitioningDelegate>

{

    SKUIClientContext *_clientContext;

    UIPageViewController *_pageViewController;

    NSOperationQueue *_remoteLoadQueue;

    NSMutableDictionary *_itemViewControllersCache;

    UIPercentDrivenInteractiveTransition *_transition;

    _Bool _overlayVisible;

    _Bool _shouldCancelDelayedOverlayVisibilityChange;

    _Bool _overlayVisibilityWillChangeWithDelay;

    _Bool _lockOverlayControlsVisible;

    struct {

        long long style;

        _Bool hidden;

    } _savedStatusBarState;

    id <SKUISlideshowViewControllerDataSource> _dataSource;

    id <SKUISlideshowViewControllerDelegate> _delegate;

    long long _currentIndex;

}



- (void).cxx_destruct;

- (void)_contentViewTapped:(id)arg1;

- (void)_doneButtonTapped:(id)arg1;

- (void)_fadeOutOverlayAfterDelay:(unsigned long long)arg1;

- (id)_itemViewControllerForIndex:(long long)arg1;

- (void)_restoreStatusBarAppearanceState;

- (void)_saveStatusBarAppearanceState;

- (void)_setOverlayVisible:(_Bool)arg1 animated:(_Bool)arg2;

- (void)_toggleFadeOverlay;

- (void)_updateCurrentIndex;

- (void)_updateTitleWithIndex:(long long)arg1;

- (id)animatorForDismissedController:(id)arg1;

- (id)animatorForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;

- (id)currentItemViewController;

@property(nonatomic) __weak id <SKUISlideshowViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;

@property(nonatomic) __weak id <SKUISlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (id)interactionControllerForDismissal:(id)arg1;

- (void)loadView;

- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;

- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;

- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;

- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;

- (void)reloadData;

- (void)slideshowItemViewControllerDidBeginPinchGesture:(id)arg1;

- (void)slideshowItemViewControllerDidDismissWithPinchGesture:(id)arg1 ratio:(double)arg2;

- (unsigned long long)supportedInterfaceOrientations;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end



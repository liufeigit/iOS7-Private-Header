/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "TPSlidingButtonDelegateProtocol.h"



@class NSArray, NSMutableArray, TPButton, TPSlidingButton;



@interface TPSuperBottomBar : UIView <TPSlidingButtonDelegateProtocol>

{

    _Bool _declineAndRemindIsAvailable;

    _Bool _declineAndMessageIsAvailable;

    _Bool _enabled;

    _Bool _blursBackground;

    int _currentState;

    id <TPSuperBottomBarDelegateProtocol> _delegate;

    double _bottomMargin;

    NSArray *_buttonLayoutConstraints;

    NSArray *_horizontalConstraintsForSupplementalButtons;

    TPButton *_supplementalTopLeftButton;

    TPButton *_supplementalTopRightButton;

    TPButton *_mainLeftButton;

    TPButton *_mainRightButton;

    TPButton *_sideButtonLeft;

    TPButton *_sideButtonRight;

    TPSlidingButton *_slidingButton;

    NSMutableArray *_hijackedGestureRecognizers;

    NSMutableArray *_stateStack;

}



+ (double)defaultBottomMargin;

+ (double)defaultInterButtonSpacing;

+ (double)defaultSideMarginForDoubleButton;

+ (double)defaultSideMarginForSingleButton;

+ (double)defaultWidth;

- (void)_clearHijackedGestureRecognizers;

- (id)_horizontalConstraintsForSupplementalButtonsUsingLabels:(id)arg1;

- (void)_updateHorizontalConstraintsForSupplementalButtons;

- (void)addSubview:(id)arg1;

- (void)animateFromIncomingCallStateToFaceTimeInCallStateWithCompletion:(id)arg1;

- (void)animateFromIncomingCallStateToInCallStateWithCompletion:(id)arg1;

- (_Bool)animateFromState:(int)arg1 toState:(int)arg2 completion:(id)arg3;

- (void)animateOutLeftAndRightMainButtonsAndAddNewMainButton:(id)arg1 completion:(id)arg2;

- (void)animateOutMainButtonAndAddNewLeftButton:(id)arg1 newRightButton:(id)arg2 completion:(id)arg3;

- (void)animateOutRightMainButtonWithCompletion:(id)arg1;

@property(nonatomic) _Bool blursBackground; // @synthesize blursBackground=_blursBackground;

@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;

@property(retain) NSArray *buttonLayoutConstraints; // @synthesize buttonLayoutConstraints=_buttonLayoutConstraints;

- (void)buttonLongPressed:(id)arg1;

- (void)buttonPressed:(id)arg1;

- (id)constraintsForState:(int)arg1;

- (id)controlForActionType:(int)arg1;

@property(nonatomic) int currentState; // @synthesize currentState=_currentState;

- (id)customTitleStringForActionType:(int)arg1 givenDefaultTitle:(id)arg2;

- (void)dealloc;

@property(nonatomic) _Bool declineAndMessageIsAvailable; // @synthesize declineAndMessageIsAvailable=_declineAndMessageIsAvailable;

@property(nonatomic) _Bool declineAndRemindIsAvailable; // @synthesize declineAndRemindIsAvailable=_declineAndRemindIsAvailable;

@property id <TPSuperBottomBarDelegateProtocol> delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) struct CGSize effectiveSize;

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;

@property(retain, nonatomic) NSMutableArray *hijackedGestureRecognizers; // @synthesize hijackedGestureRecognizers=_hijackedGestureRecognizers;

@property(retain) NSArray *horizontalConstraintsForSupplementalButtons; // @synthesize horizontalConstraintsForSupplementalButtons=_horizontalConstraintsForSupplementalButtons;

- (id)init;

- (id)initWithFrame:(struct CGRect)arg1;

- (struct CGSize)intrinsicContentSize;

@property(retain, nonatomic) TPButton *mainLeftButton; // @synthesize mainLeftButton=_mainLeftButton;

@property(retain, nonatomic) TPButton *mainRightButton; // @synthesize mainRightButton=_mainRightButton;

- (id)makeButtonWithType:(int)arg1 title:(id)arg2 image:(id)arg3 color:(int)arg4 font:(id)arg5 fontColor:(id)arg6;

- (id)makeSlidingButtonWithType:(int)arg1;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

- (_Bool)popStateAnimated:(_Bool)arg1 animationCompletionBlock:(id)arg2;

- (void)prepareButtonsForAnimationBegin;

- (void)prepareButtonsForAnimationEnd;

- (void)pushState:(int)arg1 animated:(_Bool)arg2 animationCompletionBlock:(id)arg3;

- (void)refreshCustomizedActionTypeTitleForButton:(id)arg1;

- (void)refreshCustomizedActionTypeTitles;

- (void)removeAllButtons;

- (void)resetPoppedStates;

- (void)setAction:(int)arg1 enabled:(_Bool)arg2;

- (void)setAction:(int)arg1 selected:(_Bool)arg2;

- (void)setCurrentState:(int)arg1 animated:(_Bool)arg2 animationCompletionBlock:(id)arg3;

@property(retain, nonatomic) TPButton *sideButtonLeft; // @synthesize sideButtonLeft=_sideButtonLeft;

@property(retain, nonatomic) TPButton *sideButtonRight; // @synthesize sideButtonRight=_sideButtonRight;

@property(retain, nonatomic) TPSlidingButton *slidingButton; // @synthesize slidingButton=_slidingButton;

@property(retain) NSMutableArray *stateStack; // @synthesize stateStack=_stateStack;

@property(retain, nonatomic) TPButton *supplementalTopLeftButton; // @synthesize supplementalTopLeftButton=_supplementalTopLeftButton;

@property(retain, nonatomic) TPButton *supplementalTopRightButton; // @synthesize supplementalTopRightButton=_supplementalTopRightButton;

- (void)slidingButton:(id)arg1 didSlideToProportion:(double)arg2;

- (id)viewLabels;



@end



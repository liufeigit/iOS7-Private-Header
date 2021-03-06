/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "ABPeoplePickerNavigationControllerDelegate.h"

#import "ABPersonViewControllerDelegate.h"

#import "ABUnknownPersonViewControllerDelegate.h"

#import "AFContextProvider.h"

#import "CKMessageEntryViewDelegate.h"

#import "CKRecipientSelectionControllerDelegate.h"

#import "CKTranscriptCollectionViewControllerDelegate.h"

#import "CKTranscriptHeaderControllerDelegate.h"

#import "CKTrimControllerDelegate.h"

#import "QLPreviewControllerDelegate.h"

#import "UIActionSheetDelegate.h"

#import "UIAlertViewDelegate.h"

#import "UIGestureRecognizerDelegate.h"

#import "UIKeyInput.h"

#import "UIModalViewDelegate.h"

#import "UINavigationControllerDelegate.h"



@class CKAudioTrimViewController, CKComposition, CKConversation, CKGradientReferenceView, CKMessageEncodingInfo, CKMessageEntryView, CKQLPreviewController, CKRecipientSelectionController, CKTranscriptCollectionViewController, CKTranscriptHeaderController, CKTranscriptStatusController, CKTranscriptTypingIndicatorCell, CKVideoTrimController, NSArray, NSMutableArray, NSNotification, NSNumber, NSString, UIAlertView, UIBarButtonItem, UIImagePickerController, UINavigationItem, UITapGestureRecognizer, UIToolbar, UIView, UIWindow;



@interface CKTranscriptController : UIViewController <UIAlertViewDelegate, ABPeoplePickerNavigationControllerDelegate, CKTranscriptCollectionViewControllerDelegate, CKRecipientSelectionControllerDelegate, CKTranscriptHeaderControllerDelegate, CKMessageEntryViewDelegate, CKTrimControllerDelegate, UIActionSheetDelegate, UIModalViewDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate, UINavigationControllerDelegate, AFContextProvider, UIKeyInput, QLPreviewControllerDelegate, UIGestureRecognizerDelegate>

{

    CKConversation *_conversation;

    UINavigationItem *_navItem;

    CKTranscriptStatusController *_statusBar;

    UIBarButtonItem *_actionItem;

    UIBarButtonItem *_clearAllItem;

    CKGradientReferenceView *_backPlacard;

    CKMessageEntryView *_entryView;

    id <CKTranscriptComposeDelegate> _composeDelegate;

    CKTranscriptTypingIndicatorCell *_typingIndicatorForSendAnimation;

    id _scrollBlock;

    NSMutableArray *_presetMessageParts;

    NSArray *_newCompositionAddresses;

    NSString *_serviceAvailabilityKey;

    CKComposition *_newComposition;

    CKMessageEncodingInfo *_textMessageEncodingInfo;

    CKAudioTrimViewController *_audioTrimController;

    CKVideoTrimController *_videoTrimController;

    long long _storedStatusBarStyle;

    int _setupState;

    _Bool _dimmed;

    UITapGestureRecognizer *_loggingTapGestureRecognizer;

    id _alertViewHandler;

    UIWindow *_autorotateDisabledWindow;

    UIAlertView *_trimAlert;

    unsigned int _locked:1;

    unsigned int _visible:1;

    unsigned int _viewNeedsSetup:1;

    unsigned int _newRecipient:1;

    unsigned int _sending:1;

    unsigned int _transitioningToTranscript:1;

    unsigned int _entryViewCanAcceptFocus:1;

    unsigned int _isAnimatingMessageSend:1;

    unsigned int _entryViewWasActiveBeforeEdit:1;

    unsigned int _entryViewWasActiveBeforePushingViewController:1;

    unsigned int _entryViewWasActiveBeforeNewComposeThrow:1;

    unsigned int _entryViewWasActiveBeforeSwitchingConversations:1;

    unsigned int _recipientSelectionViewWasActiveBeforeFirstResponderChange:1;

    unsigned int _automaticKeyboardWasDisabled:1;

    unsigned int _togglingEditing:1;

    unsigned int _keyboardUndocked:1;

    unsigned int _suspendScrollDueToMediaViewing:1;

    unsigned int _triedToResetEntryViewSizeWhileNotInAWindow:1;

    unsigned int _triedToResetOverlayViewSizeWhileNotInAWindow:1;

    unsigned int _preparingForResume:1;

    unsigned int _appeared:1;

    unsigned int _appearing:1;

    unsigned int _settingConversation:1;

    unsigned int _needsTransitionToFullTranscript:1;

    unsigned int _transcriptNeedsUpdate;

    unsigned int _storedStatusBarIsHidden:1;

    UIToolbar *_actionsToolbar;

    _Bool _canSafelyDismissImagePicker;

    struct UIEdgeInsets _transcriptAreaInsets;

    double _transcriptTableBottomOffset;

    struct CGRect _keyboardScreenFrame;

    struct CGRect _keyboardScreenFrameWithoutAccessoryView;

    NSNotification *_keyboardNotification;

    _Bool _showingKeyboard;

    _Bool _hidingKeyboard;

    _Bool _keyboardInteractionCancelled;

    long long _pendingInterfaceOrientation;

    _Bool _inRotation;

    _Bool _willRotateView;

    _Bool _shouldAdjustTranscriptOffsetForRotation;

    _Bool _didCancel;

    NSString *_initialSystemKeyboardID;

    UIImagePickerController *_mediaController;

    CKQLPreviewController *_previewController;

    _Bool _safeToMarkAsRead;

    _Bool _hasPrepopulatedRecipients;

    CKTranscriptCollectionViewController *_collectionViewController;

    CKRecipientSelectionController *_recipientSelectionController;

    CKTranscriptHeaderController *_transcriptHeaderViewController;

    UIView *_throwAnimationEnforcementView;

    UIView *_throwAnimationSnapshotView;

    NSMutableArray *_throwBalloonViews;

    NSMutableArray *_throwIntermediateFrames;

    NSMutableArray *_throwEndFrames;

}



+ (void)_sendDidFinishSavingImageNotificationWithImage:(id)arg1 error:(id)arg2 context:(void *)arg3;

+ (void)_sendDidFinishSavingVideoNotificationWithPath:(id)arg1 error:(id)arg2 context:(void *)arg3;

+ (void)_sendDidStartSavingMediaNotification;

+ (id)readerScrollPositionCache;

- (id)_abPersonViewControllerForPerson:(void *)arg1 property:(int)arg2 withIdentifier:(int)arg3;

- (double)_accessoryViewHeight;

- (id)_actionsToolbar;

- (void)_actuallyClearCurrentMessageThread;

- (void)_addPart:(id)arg1;

- (void)_adjustCustomTitleViewFrame:(long long)arg1;

- (void)_applicationBecameActive:(id)arg1;

- (void)_beginTransitioningToTranscript;

- (double)_bottomInset;

- (_Bool)_canReloadView;

- (void)_cancelMessageSendAnimation;

- (void)_changedStatusBarFrame:(id)arg1;

- (void)_chatUnreadCountDidChange:(id)arg1;

- (void)_cleanupThrowData;

- (void)_contentSizeCategoryDidChange:(id)arg1;

- (void)_conversationDidChangeNotification:(id)arg1;

- (void)_deleteSelectedMessages:(id)arg1;

- (void)_displayABPersonViewController:(id)arg1;

- (_Bool)_displayPreviewItemForMediaObject:(id)arg1;

- (double)_distanceFromBottomOfScreenToTopEdgeOfKeyboard;

- (double)_distanceFromBottomOfScreenToTopEdgeOfKeyboardScreenFrame:(struct CGRect)arg1 orientation:(long long)arg2;

- (void)_endTransitioningToTranscript;

- (void)_entryDebugShowEntryHUD;

- (void)_entryViewWillRotate:(id)arg1;

- (void)_faceTimeAvailabilityChange:(id)arg1;

- (id)_fieldForFocus;

- (void)_finishSendAnimation;

- (void)_forwardSelectedMessages:(id)arg1;

- (void)_handleAddressBookChangedNotification:(id)arg1;

- (double)_heightOfKeyboard;

- (double)_heightOfKeyboardScreenFrame:(struct CGRect)arg1;

- (double)_heightOfKeyboardScreenFrame:(struct CGRect)arg1 orientation:(long long)arg2;

- (double)_heightOfSpaceAboveKeyboard:(struct CGRect)arg1 undocked:(_Bool)arg2;

- (double)_heightOfTopTranscriptArea;

- (void)_hideCurrentPreviewItemForPreviewController:(id)arg1;

- (void)_hideTranscriptHeaderForInteraction;

- (void)_highlightMessage:(id)arg1;

- (struct CGSize)_idealSizeForEntryView;

- (_Bool)_isGroupMessage;

- (_Bool)_isVisible;

- (void)_keyboardDidChangeFrame:(id)arg1;

- (void)_keyboardDidShowOrHide:(id)arg1;

- (struct CGRect)_keyboardFrame;

- (struct CGRect)_keyboardFrameForKeyboardScreenFrame:(struct CGRect)arg1;

- (_Bool)_keyboardIsOnScreen;

- (_Bool)_keyboardIsUndocked;

- (void)_keyboardLayoutDidChange:(id)arg1;

- (struct CGRect)_keyboardScreenFrame:(struct CGRect)arg1 withoutAccessoryViewOfHeight:(double)arg2 orientation:(long long)arg3;

- (_Bool)_keyboardScreenFrameIsOnScreen:(struct CGRect)arg1;

- (void)_keyboardWillShowOrHide:(id)arg1;

- (void)_localeDidChange:(id)arg1;

- (_Bool)_makeContentEntryViewActive;

- (void)_makeFieldForFocusActive;

- (void)_makeRecipientEntryViewActive;

- (void)_markMessagesAsReadIfNecessary;

- (_Bool)_messageIsForCurrentConversation:(id)arg1;

- (void *)_newPersonWithValue:(struct __CFString *)arg1 forMultiValueProperty:(int)arg2;

- (id)_overlayView;

- (void)_performResume:(_Bool)arg1;

- (void)_preferredServiceChangedNotification:(id)arg1;

- (void)_receivedConversationPreferredServiceChangedNotification:(id)arg1;

- (void)_receivedMessageErrorNotification:(id)arg1;

- (void)_receivedMessageSentNotification:(id)arg1;

- (void)_refreshStatusBar;

- (void)_refreshViewForCurrentConversationIfNeeded;

- (void)_refreshViewForNewRecipientIfNeeded;

- (void)_removeRecipientSelectionView;

- (void)_requeryIDStatuses;

- (void)_requestCallTypeForEntity:(id)arg1 withAddresses:(id)arg2 withLabels:(id)arg3 faceTimeAudioEnabled:(_Bool)arg4;

- (void)_resetEntryViewSize;

- (void)_resetTranscriptInsetsAnimated:(_Bool)arg1;

- (_Bool)_resizeMessageEntryView:(id)arg1 animate:(_Bool)arg2;

- (_Bool)_resizeMessageEntryViewWithAnimate:(_Bool)arg1;

- (void)_saveDraftState;

- (void)_screenLocked:(id)arg1;

- (void)_screenUnlocked:(id)arg1;

- (void)_setConversation:(id)arg1;

- (void)_setEntryViewSize:(struct CGSize)arg1 animate:(_Bool)arg2 animationLength:(float)arg3;

- (void)_setEntryViewVisible:(_Bool)arg1;

- (void)_setVisible:(_Bool)arg1;

- (void)_setupMediaEntry;

- (void)_setupNewComposition;

- (void)_setupRecipientSelectionView;

- (void)_setupTranscriptHeaderView;

- (void)_setupTranscriptTableHeader;

- (void)_setupViewForConversation;

- (_Bool)_shouldAllowCameraAttachments;

- (_Bool)_shouldUseExistingConversations;

- (void)_showCurrentPreviewItemForPreviewController:(id)arg1;

- (void)_showMapViewerForMediaObject:(id)arg1;

- (void)_showMediaSourceSelectionSheet;

- (void)_showPassbookCardViewForMediaObject:(id)arg1;

- (void)_showPhotoPickerWithSourceType:(long long)arg1;

- (void)_showVCalViewerForMediaObject:(id)arg1;

- (void)_showVCardViewerForMediaObject:(id)arg1;

- (void)_startCallWithAddress:(id)arg1 entity:(id)arg2;

- (void)_startCreatingNewMessageForSending:(id)arg1;

- (id)_statusBar;

- (id)_supportedMediaTypesForPhotoPicker;

- (void)_teardownTranscriptHeaderView;

- (struct CGPoint)_transcriptScrollToBottomOffsetWithHeightDelta:(double)arg1;

- (void)_transferRestored:(id)arg1;

- (void)_transferUpdated:(id)arg1;

- (void)_updateActionsToolbarItems;

- (void)_updateActionsToolbarItemsForRotation:(long long)arg1;

- (void)_updateBackPlacardSubviews;

- (void)_updateTranscriptHeaderView;

- (void)_userDidCancelCapturingImage;

- (void)_userDidCaptureImage;

- (void)actionButtonClicked:(id)arg1;

- (void)addMedia:(id)arg1;

- (void)addPassesViewControllerDidFinish:(id)arg1;

- (void)addPresetMessagePart:(id)arg1;

@property(copy, nonatomic) id alertHandler; // @synthesize alertHandler=_alertViewHandler;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (_Bool)allowContextProvider:(id)arg1;

- (_Bool)becomeFirstResponder;

- (struct CGPoint)bestVisibleOffsetForBubbleAtIndex:(long long)arg1;

- (_Bool)canBecomeFirstResponder;

@property(nonatomic) NSNumber *canSafelyDismissImagePicker;

- (void)cancelButtonClicked:(id)arg1;

- (id)clearAllItem;

- (void)clearButtonClicked:(id)arg1;

- (void)clearComposition;

- (void)clearCurrentMessageThread;

@property(retain, nonatomic) CKTranscriptCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;

@property(nonatomic) id <CKTranscriptComposeDelegate> composeDelegate; // @synthesize composeDelegate=_composeDelegate;

- (id)composition;

- (id)conversation;

- (void)dealloc;

- (void)deleteBackward;

- (void)didReceiveMemoryWarning;

- (void)didRotateFromInterfaceOrientation:(long long)arg1;

- (void)dismissPeoplePicker:(id)arg1;

- (void)dismissPresentedViewController:(id)arg1;

- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id)arg2;

- (void)entryDebugClear;

- (void)entryDebugSliderChange:(id)arg1;

@property(retain, nonatomic) CKMessageEntryView *entryView; // @synthesize entryView=_entryView;

- (_Bool)getContainerWidth:(double *)arg1 offset:(double *)arg2;

- (id)getCurrentContext;

- (struct CGRect)gradientFrame;

@property(nonatomic) _Bool hasPrepopulatedRecipients; // @synthesize hasPrepopulatedRecipients=_hasPrepopulatedRecipients;

- (_Bool)hasText;

- (void)hideMediaPickerAnimated:(_Bool)arg1;

- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;

- (void)imagePickerControllerDidCancel:(id)arg1;

- (id)init;

- (id)initWithNavigationController:(id)arg1;

- (id)inputAccessoryView;

- (void)insertText:(id)arg1;

@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;

- (_Bool)isEditable;

- (_Bool)isNewRecipient;

- (_Bool)isSendingMessage;

- (void)loadView;

- (double)maxTrimDurationForMediaObject:(id)arg1;

- (_Bool)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;

- (void)messageEntryViewDidBeginEditing:(id)arg1;

- (void)messageEntryViewDidChange:(id)arg1;

- (void)messageEntryViewSendButtonHit:(id)arg1;

- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;

- (_Bool)messageEntryViewShouldBeginEditing:(id)arg1;

- (struct UIEdgeInsets)navigationBarInsets;

- (id)navigationItem;

@property(copy, nonatomic) NSArray *newCompositionAddresses; // @synthesize newCompositionAddresses=_newCompositionAddresses;

- (id)nextMediaObjectToTrim;

- (void)parentControllerDidBecomeActive;

- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;

- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(_Bool)arg2 forPerson:(void *)arg3;

- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;

- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;

- (_Bool)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void *)arg2 insertProperty:(int *)arg3 copyInsertValue:(id *)arg4 copyInsertLabel:(id *)arg5;

- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;

- (void)performResumeDeferredSetup;

- (_Bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;

- (_Bool)personViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3;

- (_Bool)photoButtonEnabled;

- (void)prepareForResume;

- (void)prepareForSuspend;

- (void)presentTrimControllerForMediaObject:(id)arg1;

@property(retain, nonatomic) NSMutableArray *presetMessageParts; // @synthesize presetMessageParts=_presetMessageParts;

- (void)previewController:(id)arg1 didTransitionToState:(long long)arg2;

- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;

- (_Bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;

- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;

- (void)previewController:(id)arg1 willTransitionToState:(long long)arg2;

- (void)previewControllerDidDismiss:(id)arg1;

- (void)previewControllerWillDismiss:(id)arg1;

- (id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(long long *)arg2 containsRestoring:(_Bool *)arg3;

- (id)proposedRecipients;

- (void)readerViewControllerWillDismiss:(id)arg1;

@property(readonly, nonatomic) CKRecipientSelectionController *recipientSelectionController; // @synthesize recipientSelectionController=_recipientSelectionController;

- (void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2;

- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;

- (void)recipientSelectionControllerDidChangeSize:(id)arg1;

- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;

- (struct UIEdgeInsets)recipientSelectionControllerRequestNavigationBarInsets:(id)arg1;

- (void)recipientSelectionControllerReturnPressed:(id)arg1;

- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;

- (id)recipients;

- (void)refreshTranscriptIfNeededWithAnimation:(_Bool)arg1;

- (void)refreshTranscriptWithAnimation:(_Bool)arg1;

- (void)registerForNotifications;

- (void)registerForSharedNotifications;

- (void)reloadEntryViewIfNeeded;

- (id)rotatingFooterView;

@property(nonatomic) _Bool safeToMarkAsRead; // @synthesize safeToMarkAsRead=_safeToMarkAsRead;

@property(copy, nonatomic) id scrollBlock; // @synthesize scrollBlock=_scrollBlock;

- (void)scrollBubbleIndexToVisible:(int)arg1;

- (void)scrollToMessage:(id)arg1 highlight:(_Bool)arg2;

- (void)send:(id)arg1;

- (void)sendMessage:(id)arg1;

- (void)setComposition:(id)arg1;

- (void)setConversation:(id)arg1;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setMessageParts:(id)arg1;

- (void)setNewComposition:(id)arg1 addresses:(id)arg2;

@property(retain, nonatomic) UIView *throwAnimationEnforcementView; // @synthesize throwAnimationEnforcementView=_throwAnimationEnforcementView;

@property(retain, nonatomic) UIView *throwAnimationSnapshotView; // @synthesize throwAnimationSnapshotView=_throwAnimationSnapshotView;

@property(retain, nonatomic) NSMutableArray *throwBalloonViews; // @synthesize throwBalloonViews=_throwBalloonViews;

@property(retain, nonatomic) NSMutableArray *throwEndFrames; // @synthesize throwEndFrames=_throwEndFrames;

@property(retain, nonatomic) NSMutableArray *throwIntermediateFrames; // @synthesize throwIntermediateFrames=_throwIntermediateFrames;

@property(retain, nonatomic) CKTranscriptHeaderController *transcriptHeaderViewController; // @synthesize transcriptHeaderViewController=_transcriptHeaderViewController;

- (void)setupForNewRecipient;

- (void)setupScrollingForKeyboardInteraction;

- (_Bool)sharedShouldPresentMessageCompositionWithVCard:(id)arg1 filename:(id)arg2;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (_Bool)shouldDismissAfterSend;

- (void)showAddToExistingContactViewForEntity:(id)arg1;

- (void)showKeyboardForReply;

- (void)showMediaPicker:(id)arg1 animated:(_Bool)arg2;

- (void)showPopoverWithContentViewController:(id)arg1 withPresenter:(id)arg2 withHandler:(void)arg3;

- (void)showReaderForPart:(id)arg1;

- (void)showViewerForMediaObject:(id)arg1;

- (void)significantTimeChange;

- (void)startSendAnimationForMessage:(id)arg1;

- (void)systemApplicationWillEnterForeground;

- (id)textInputContextIdentifier;

- (void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2;

- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;

- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

- (void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2;

- (void)transcriptCollectionViewControllerDidInset:(id)arg1;

- (void)transcriptCollectionViewControllerWantsRefreshStatusBar:(id)arg1;

- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;

- (void)transcriptHeaderController:(id)arg1 showContactCardForEntity:(id)arg2 fromView:(id)arg3 fromRect:(struct CGRect)arg4;

- (void)transcriptHeaderController:(id)arg1 startCommunicationForEntity:(id)arg2;

- (void)transcriptHeaderController:(id)arg1 startEmailCommunicationWithEntity:(id)arg2;

- (void)transcriptHeaderController:(id)arg1 startFacetimeCommunicationForEntity:(id)arg2 audioOnly:(_Bool)arg3;

- (void)transcriptHeaderControllerHeaderIsAnimatingShowOrHide:(id)arg1;

- (void)transcriptHeaderControllerWillShowOrHide:(id)arg1;

- (void)transcriptStatusBar:(id)arg1 setTitle:(id)arg2 animated:(_Bool)arg3;

- (void)transcriptStatusBar:(id)arg1 showNavBarProgressBar:(id)arg2;

- (void)transcriptStatusBar:(id)arg1 updateNavBarProgressBar:(id)arg2 withProgress:(double)arg3;

- (void)transitionFromNewMessageToConversation;

- (void)trimController:(id)arg1 didFinishTrimmingMediaObject:(id)arg2 withReplacementMediaObject:(id)arg3;

- (void)trimControllerDidCancel:(id)arg1;

- (id)unatomizedRecipientText;

- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;

- (_Bool)unknownPersonViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3;

- (void)updateEntryView;

- (void)updateNavigationButtons;

- (void)updateQLPreviewControllerIfVisible;

- (void)updateTitle;

- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidAppearDeferredSetup;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)viewWillUnload;

- (_Bool)wantsFullScreenLayout;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



// Remaining properties

@property(nonatomic) long long autocapitalizationType;

@property(nonatomic) long long autocorrectionType;

@property(nonatomic) _Bool enablesReturnKeyAutomatically;

@property(nonatomic) long long keyboardAppearance;

@property(nonatomic) long long keyboardType;

@property(nonatomic) long long returnKeyType;

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;

@property(nonatomic) long long spellCheckingType;



@end



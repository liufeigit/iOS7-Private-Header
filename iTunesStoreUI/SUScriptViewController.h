/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptObject.h"


@class NSArray, NSString, SUScriptNavigationController, SUScriptNavigationItem, SUScriptPopOver, SUScriptSection, SUScriptSplitViewController, UIViewController;



@interface SUScriptViewController : SUScriptObject

{

    NSArray *_scriptToolbarItems;

}



+ (void)initialize;

+ (id)webScriptNameForKeyName:(id)arg1;

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;

- (void)_dismissModalViewControllerAnimated:(_Bool)arg1;

- (void)_dismissModalViewControllerWithTransition:(id)arg1;

- (id)_parentViewControllerForVolumeViewController;

- (void)_presentModalViewController:(id)arg1 withTransition:(id)arg2;

- (int)_transitionForString:(id)arg1;

- (id)attributeKeys;

@property(retain) id backgroundColor;

@property(readonly) NSString *contextDictionary;

- (void)dealloc;

- (void)dismissModalViewControllerAnimated:(_Bool)arg1;

- (void)dismissModalViewControllerWithTransition:(id)arg1;

- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(id)arg2;

- (void)dismissVolumeViewControllerAnimated:(id)arg1;

- (_Bool)equals:(id)arg1;

@property(retain) SUScriptViewController *inputAccessoryViewController;

@property(retain) NSString *modalPresentationStyle;

@property(readonly) NSString *modalPresentationStyleNameFormSheet;

@property(readonly) NSString *modalPresentationStyleNameFullScreen;

@property(readonly) SUScriptViewController *modalViewController;

@property(retain, nonatomic) UIViewController *nativeViewController;

@property(readonly) SUScriptNavigationController *navigationController;

@property(readonly) SUScriptNavigationItem *navigationItem;

- (id)newNativeViewController;

- (id)newScriptColorWithValue:(id)arg1;

@property(readonly) SUScriptPopOver *popOver;

- (void)presentModalViewController:(id)arg1 withTransition:(id)arg2;

- (void)presentVolumeViewController:(id)arg1 animated:(id)arg2;

@property(readonly) SUScriptViewController *presentingViewController;

- (void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3;

- (id)scriptAttributeKeys;

@property(retain) SUScriptSection *section;

@property id showsLibraryButton;

@property(copy) id toolbarItems;

- (void)setToolbarItems:(id)arg1 animated:(_Bool)arg2;

@property(retain) id topBackgroundColor;

@property(retain) SUScriptViewController *transientViewController;

@property id usesBlurredBackground;

@property id wantsFullScreenLayout;

@property(readonly) SUScriptSplitViewController *splitViewController;

- (void)tearDownUserInterface;

@property(readonly) SUScriptViewController *volumeViewController;



@end



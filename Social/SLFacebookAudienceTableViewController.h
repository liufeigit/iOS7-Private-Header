/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewController.h"



#import "SLFacebookAudienceViewController.h"



@class NSArray, SLFacebookPostPrivacySetting, UINavigationItem;



__attribute__((visibility("hidden")))

@interface SLFacebookAudienceTableViewController : UITableViewController <SLFacebookAudienceViewController>

{

    NSArray *_privacySettings;

    SLFacebookPostPrivacySetting *_selectedSetting;

    id <SLFacebookAudienceViewControllerDelegate> _selectionDelegate;

    UINavigationItem *_navigationItem;

}



- (void).cxx_destruct;

- (id)_privacySettingForIndexPath:(id)arg1;

- (void)cancelButtonTapped:(id)arg1;

- (struct CGSize)contentSizeForViewInPopover;

- (void)didReceiveMemoryWarning;

- (id)initWithStyle:(long long)arg1;

- (void)loadView;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (void)setCurrentPrivacySetting:(id)arg1;

- (void)setPrivacySettings:(id)arg1;

- (void)setSelectionDelegate:(id)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewDidLoad;

- (void)viewDidUnload;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)viewWillLayoutSubviews;



@end



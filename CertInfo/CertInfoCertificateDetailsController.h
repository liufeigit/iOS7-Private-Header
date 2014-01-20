/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewController.h"



@class NSArray, UIBarButtonItem;



@interface CertInfoCertificateDetailsController : UITableViewController

{

    id <CertInfoCertificateDetailsControllerDelegate> _delegate;

    NSArray *_sectionDictionaries;

    UIBarButtonItem *_doneButton;

    unsigned int _showsDoneButton:1;

}



- (void)_doneButtonPressed:(id)arg1;

- (id)_propertiesForIndexPath:(id)arg1;

- (id)_sectionsForProperties:(id)arg1;

- (id)_sectionsForProperties:(id)arg1 currentSectionDictionary:(id)arg2;

- (void)dealloc;

@property(nonatomic) id <CertInfoCertificateDetailsControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithCertificateProperties:(id)arg1;

- (id)initWithTrust:(struct __SecTrust *)arg1;

- (id)initWithTrust:(struct __SecTrust *)arg1 certificateIndex:(long long)arg2;

- (long long)numberOfSectionsInTableView:(id)arg1;

@property(nonatomic) _Bool showsDoneButton; // @dynamic showsDoneButton;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;

- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;

- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;



@end


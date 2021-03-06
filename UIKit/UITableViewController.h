/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"


#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class UIRefreshControl, UITableView, UITableViewDataSource;



@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

{

    long long _tableViewStyle;

    id _keyboardSupport;

    id _staticDataSource;

    struct {

        unsigned int clearsSelectionOnViewWillAppear:1;

        unsigned int insetsApplied:1;

        unsigned int adjustingInsets:1;

    } _tableViewControllerFlags;

}



- (void)_adjustTableForKeyboardInfo:(id)arg1;

- (id)_existingTableView;

@property(retain, nonatomic, getter=_staticDataSource, setter=_setStaticDataSource:) UITableViewDataSource *staticDataSource;

@property(nonatomic) _Bool clearsSelectionOnViewWillAppear;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (id)initWithStyle:(long long)arg1;

- (void)loadView;

- (long long)numberOfSectionsInTableView:(id)arg1;

@property(retain, nonatomic) UIRefreshControl *refreshControl;

- (_Bool)respondsToSelector:(SEL)arg1;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

@property(retain, nonatomic) UITableView *tableView;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;

- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;

- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;

- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUStructuredPageViewController.h"


@class SUButtonAccessoryView;



@interface SUReviewsListingViewController : SUStructuredPageViewController

{

    SUButtonAccessoryView *_accessoryView;

}



- (id)_accessoryView;

- (_Bool)_canWriteReview;

- (id)_headerItem;

- (void)_reloadHeaderView;

- (void)_writeAReview:(id)arg1;

- (void)dealloc;

- (void)loadView;

- (id)newTermsAndConditionsFooter;

- (void)reloadData;

- (void)reloadForChangedRowCount:(long long)arg1;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

- (void)viewWillAppear:(_Bool)arg1;



@end



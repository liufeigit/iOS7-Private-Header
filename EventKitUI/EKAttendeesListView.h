/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableView.h"



#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class EKEvent, NSArray, UIImage;



__attribute__((visibility("hidden")))

@interface EKAttendeesListView : UITableView <UITableViewDelegate, UITableViewDataSource>

{

    EKEvent *_event;

    NSArray *_attendees;

    id _attendeeDelegate;

    _Bool _shouldShowStatusImages;

    UIImage *_attendingImage;

    UIImage *_maybeImage;

    UIImage *_notAttendingImage;

    UIImage *_pendingImage;

}



- (void).cxx_destruct;

- (id)_attendingImage;

- (id)_imageForStatus:(int)arg1;

- (id)_maybeImage;

- (id)_notAttendingImage;

- (id)_pendingImage;

- (void)dealloc;

- (void)eventModified:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1 event:(id)arg2;

- (void)loadAttendees;

- (void)setAttendeeDelegate:(id)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;



@end


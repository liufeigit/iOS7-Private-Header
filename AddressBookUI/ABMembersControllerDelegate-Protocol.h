/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol ABMembersControllerDelegate <NSObject>

- (_Bool)allowsShowingPersonsCards;

- (int)behavior;

- (_Bool)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;

- (void)membersControllerDidEndSearching:(id)arg1;

- (void)membersControllerDidEndServerSearch:(id)arg1;

- (void)membersControllerWillEndSearching:(id)arg1;

- (void)membersControllerWillStartSearching:(id)arg1;

- (id)model;

- (void)personWasSelected:(void *)arg1;

- (_Bool)showCardForPerson:(void *)arg1 animate:(_Bool)arg2;

- (_Bool)showCardForPerson:(void *)arg1 withMemberCell:(id)arg2 animate:(_Bool)arg3;

- (void)showInsertEditorForPerson:(void *)arg1 animate:(_Bool)arg2;

@end


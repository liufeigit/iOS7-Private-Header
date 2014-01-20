/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@interface DAAction : NSObject <NSCoding>

{

    int _itemChangeType;

    id _serverId;

    id <NSCoding><NSObject> _changedItem;

    int _changeId;

}



- (void)_setChangedItem:(id)arg1;

@property int changeId; // @synthesize changeId=_changeId;

@property(retain, nonatomic) id changedItem; // @synthesize changedItem=_changedItem;

- (struct ASContact *)contact;

- (void)dealloc;

- (id)deletedContactID;

- (id)deletedEventID;

- (id)deletedNoteID;

- (id)deletedToDoID;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (struct ASEvent *)event;

- (unsigned long long)hash;

- (id)initWithCoder:(id)arg1;

- (id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 serverId:(id)arg3;

- (_Bool)isEqual:(id)arg1;

@property(readonly) int itemChangeType; // @synthesize itemChangeType=_itemChangeType;

- (id)message;

- (struct ASNote *)note;

@property(readonly, nonatomic) id serverId; // @synthesize serverId=_serverId;

- (id)stringForItemChangeType:(int)arg1;

- (struct ASToDo *)toDo;



@end


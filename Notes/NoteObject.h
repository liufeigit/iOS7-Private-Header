/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSManagedObject.h"



@class NSData, NSDate, NSNumber, NSString, NSURL, NoteBodyObject, NoteStoreObject;



@interface NoteObject : NSManagedObject

{

}



- (_Bool)containsAttachments;

@property(retain, nonatomic) NSString *content;

@property(readonly, nonatomic) NSString *contentAsPlainText;

- (id)contentAsPlainTextPreservingNewlines;

@property(retain, nonatomic) NSString *externalContentRef;

@property(retain, nonatomic) NSData *externalRepresentation;

@property(nonatomic) unsigned long long flags;

@property(readonly, nonatomic) _Bool hasValidServerIntId;

@property(readonly, nonatomic) _Bool isMarkedForDeletion;

@property(nonatomic) _Bool isPlainText;

- (void)markForDeletion;

@property(readonly, nonatomic) NSURL *noteId;

@property(nonatomic) unsigned long long sequenceNumber;

@property(nonatomic) long long serverIntId;



// Remaining properties

@property(retain, nonatomic) NSString *author; // @dynamic author;

@property(retain, nonatomic) NoteBodyObject *body; // @dynamic body;

@property(retain, nonatomic) NSNumber *containsCJK; // @dynamic containsCJK;

@property(retain, nonatomic) NSNumber *contentType; // @dynamic contentType;

@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;

@property(retain, nonatomic) NSNumber *deletedFlag; // @dynamic deletedFlag;

@property(retain, nonatomic) NSNumber *externalFlags; // @dynamic externalFlags;

@property(retain, nonatomic) NSNumber *externalSequenceNumber; // @dynamic externalSequenceNumber;

@property(retain, nonatomic) NSNumber *externalServerIntId; // @dynamic externalServerIntId;

@property(retain, nonatomic) NSString *guid; // @dynamic guid;

@property(retain, nonatomic) NSNumber *integerId; // @dynamic integerId;

@property(retain, nonatomic) NSNumber *isBookkeepingEntry; // @dynamic isBookkeepingEntry;

@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;

@property(retain, nonatomic) NSString *serverId; // @dynamic serverId;

@property(retain, nonatomic) NoteStoreObject *store; // @dynamic store;

@property(retain, nonatomic) NSString *summary; // @dynamic summary;

@property(retain, nonatomic) NSString *title; // @dynamic title;



@end


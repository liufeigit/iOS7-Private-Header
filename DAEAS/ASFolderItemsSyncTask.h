/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ASTask.h"


#import "NSCopying.h"



@class ASMailMessage, NSArray, NSMutableSet, NSSet, NSString;



@interface ASFolderItemsSyncTask : ASTask <NSCopying>

{

    NSString *_folderID;

    NSString *_previousSyncKey;

    int _dataclass;

    NSArray *_actions;

    NSMutableSet *_rejectedServerIds;

    _Bool _isInitialSync;

    _Bool _isInitialBootstrapSync;

    _Bool _willUpdate;

    _Bool _moreAvailable;

    _Bool _isResyncAfterConnectionFailed;

    _Bool _haveShortcut121Response;

    int _numReplacedItems;

    int _numDownloadedElements;

    _Bool _isSpinning;

    int _bodyTruncationBytes;

    int _mimeSupport;

    int _filterDays;

    ASMailMessage *_streamingMailMessage;

    NSArray *_perservedActions;

    NSArray *_pushedActions;

    _Bool _hadFalseMoreAvailable;

    _Bool _deletesAsMoves;

}



- (void)_addRejectedServerId:(id)arg1;

- (int)_bodyTruncationCode;

- (void)_handleChangedLeaf:(id)arg1 addedChangesPtr:(id *)arg2 modifiedChangesPtr:(id *)arg3 removedChangesPtr:(id *)arg4;

- (void)_handleResponseToLeaf:(id)arg1 addedResponsesPtr:(id *)arg2 modifiedResponsesPtr:(id *)arg3 removedResponsesPtr:(id *)arg4 fetchedResponsesPtr:(id *)arg5;

- (int)_mimeSupportCode;

- (int)_mimeTruncationCode;

- (void)_setSpinning:(_Bool)arg1;

@property(retain) NSArray *actions; // @synthesize actions=_actions;

- (void)appendActionData:(id)arg1;

- (void)appendSupportedFieldsData:(id)arg1;

@property int bodyTruncationBytes; // @synthesize bodyTruncationBytes=_bodyTruncationBytes;

- (int)bodyType;

- (_Bool)checkForErrorInContext:(id)arg1;

- (int)commandCode;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property int dataclass; // @synthesize dataclass=_dataclass;

- (void)dealloc;

@property int filterDays; // @synthesize filterDays=_filterDays;

- (void)finishWithError:(id)arg1;

@property(readonly) NSString *folderID; // @synthesize folderID=_folderID;

- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;

- (int)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(int)arg6;

- (id)initWithFolderID:(id)arg1;

- (id)initWithFolderID:(id)arg1 deletesAsMoves:(_Bool)arg2;

@property _Bool isInitialBootstrapSync; // @synthesize isInitialBootstrapSync=_isInitialBootstrapSync;

@property _Bool isInitialSync; // @synthesize isInitialSync=_isInitialSync;

@property _Bool isResyncAfterConnectionFailed; // @synthesize isResyncAfterConnectionFailed=_isResyncAfterConnectionFailed;

@property(setter=setMIMESupport:) int mimeSupport; // @synthesize mimeSupport=_mimeSupport;

@property _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;

- (int)numDownloadedElements;

- (double)percentComplete;

@property(retain) NSArray *perservedActions; // @synthesize perservedActions=_perservedActions;

@property(copy) NSString *previousSyncKey; // @synthesize previousSyncKey=_previousSyncKey;

@property(readonly) NSString *previousSyncKeyForAgent;

- (_Bool)processContext:(id)arg1;

@property(retain) NSArray *pushedActions; // @synthesize pushedActions=_pushedActions;

@property(readonly) NSSet *rejectedServerIds; // @synthesize rejectedServerIds=_rejectedServerIds;

- (id)replacementObjectForEmailItem:(id)arg1;

- (void)reportStatusWithError:(id)arg1;

- (id)requestBody;

@property(retain) ASMailMessage *streamingMailMessage; // @synthesize streamingMailMessage=_streamingMailMessage;

@property _Bool willUpdate; // @synthesize willUpdate=_willUpdate;

- (int)taskStatusForExchangeStatus:(int)arg1;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSManagedObjectID, NSMutableArray, NSMutableSet, PLImageSource, PLLoadRequestKey;



@interface PLImageLoadRequest : NSObject

{

    NSManagedObjectID *_assetID;

    PLImageSource *_source;

    NSMutableSet *_queues;

    int _priority;

    NSMutableArray *_completionBlocks;

    PLLoadRequestKey *_key;

}



+ (id)requestWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3 completion:(id)arg4 loadingQueue:(void)arg5;

- (void)addCompletionBlock:(id)arg1;

- (id)assetInPhotoLibrary:(id)arg1;

@property(readonly, nonatomic) NSArray *completionBlocks;

- (void)dealloc;

- (id)debugDescription;

- (void)deregisterImageLoadingQueue:(id)arg1;

- (id)initWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isImageLoadingQueueRegistered:(id)arg1;

@property(readonly, nonatomic) PLLoadRequestKey *key;

- (void)notifyImageLoadingQueuesOfImageAvailability:(id)arg1;

@property(nonatomic) int priority; // @synthesize priority=_priority;

- (void)registerImageLoadingQueue:(id)arg1;

- (_Bool)someImageLoadingQueuesRegistered;

@property(readonly, nonatomic) PLImageSource *source; // @synthesize source=_source;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAsset, AVAssetTrack, AVAudioMix, AVCustomVideoCompositorSession, AVMetadataItemFilter, AVVideoComposition, AVWeakReference, NSArray, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSURL;



@interface AVAssetExportSessionInternal : NSObject

{

    AVWeakReference *weakReference;

    NSObject<OS_dispatch_queue> *readWriteQueue;

    struct OpaqueFigRemaker *remaker;

    long long status;

    NSError *error;

    float progress;

    AVAsset *asset;

    AVAssetTrack *firstVideoTrack;

    NSString *preset;

    NSString *preset16x9;

    NSURL *outputURL;

    NSString *outputFileType;

    NSString *actualOutputFileType;

    NSString *audioTimePitchAlgorithm;

    AVAudioMix *audioMix;

    AVVideoComposition *videoComposition;

    void *figVideoCompositor;

    AVCustomVideoCompositorSession *customVideoCompositorSession;

    NSArray *metadata;

    AVMetadataItemFilter *metadataItemFilter;

    CDStruct_e83c9415 timeRange;

    CDStruct_1b6d18a9 minVideoFrameDuration;

    _Bool canUseFastFrameRateConversion;

    NSString *videoFrameRateConversionAlgorithm;

    NSObject<OS_dispatch_semaphore> *canUseFastFrameRateConversionSemaphore;

    long long maxFileSize;

    id handler;

    _Bool optimizeForNetworkUse;

    _Bool outputFileCreatedByRemaker;

    long long compatibleFileTypesDispatchOncePredicate;

    NSArray *compatibleFileTypes;

    NSObject<OS_dispatch_queue> *remakerNotificationSerializationQueue;

}



@end


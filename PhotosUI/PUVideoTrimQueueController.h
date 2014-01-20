/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PLManagedAlbum, UIViewController;



@interface PUVideoTrimQueueController : NSObject

{

    UIViewController *_displayingViewController;

    double _startTime;

    double _endTime;

    NSMutableArray *_assetsToTransform;

    NSMutableDictionary *_trimmedVideoInfo;

    struct {

        unsigned int hasWillTrim:1;

        unsigned int hasDidTrim:1;

        unsigned int hasDidFinish:1;

        unsigned int hasDidCancel:1;

    } _delegateFlags;

    id <PUVideoTrimQueueControllerDelegate> _delegate;

    NSArray *_assetsToShare;

    PLManagedAlbum *_album;

    NSString *_albumName;

    NSArray *_recipients;

    NSString *_commentText;

}



- (void).cxx_destruct;

- (void)_dequeueTrimmingControl;

- (void)_sendDidFinish;

- (_Bool)_shouldShowVideoTooLongAlertForAsset:(id)arg1;

- (void)_showTrimViewControllerForAsset:(id)arg1;

- (void)_trimVideo:(id)arg1;

- (id)_videoTooLongAlert;

@property(readonly, nonatomic) PLManagedAlbum *album; // @synthesize album=_album;

@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;

@property(readonly, nonatomic) NSArray *assetsToShare; // @synthesize assetsToShare=_assetsToShare;

@property(retain, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;

@property(nonatomic) __weak id <PUVideoTrimQueueControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;

- (void)editVideoViewControllerDidCancel:(id)arg1;

- (id)initWithViewController:(id)arg1 assetsToShare:(id)arg2 album:(id)arg3;

@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;

- (void)start;

@property(readonly, nonatomic) NSDictionary *trimmedVideoInfo; // @synthesize trimmedVideoInfo=_trimmedVideoInfo;



@end


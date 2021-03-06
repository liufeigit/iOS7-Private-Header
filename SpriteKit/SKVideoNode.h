/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKNode.h"


@class AVPlayer, NSString, NSURL;



@interface SKVideoNode : SKNode

{

    _Bool _isLoaded;

    NSString *_videoFileName;

    NSURL *_videoFileURL;

    AVPlayer *_player;

}



+ (id)videoNodeWithAVPlayer:(id)arg1;

+ (id)videoNodeWithVideoFileNamed:(id)arg1;

+ (id)videoNodeWithVideoURL:(id)arg1;

- (void).cxx_destruct;

@property(retain, nonatomic) AVPlayer *_player; // @synthesize _player;

@property(nonatomic) struct CGPoint anchorPoint;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithAVPlayer:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithVideoFileNamed:(id)arg1;

- (id)initWithVideoURL:(id)arg1;

- (_Bool)isPaused;

- (void)pause;

- (void)play;

- (void)setPaused:(_Bool)arg1;

@property(nonatomic) struct CGSize size;



@end



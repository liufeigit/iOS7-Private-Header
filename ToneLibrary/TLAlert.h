/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>, NSString;



@interface TLAlert : NSObject

{

    _Bool _shouldOverrideMasterSwitches;

    int _type;

    NSString *_toneIdentifier;

    NSString *_vibrationIdentifier;

    NSObject<OS_dispatch_queue> *_targetQueue;

    id _completionHandler;

}



+ (void)_playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(_Bool)arg4;

+ (void)playToneAndVibrationForType:(int)arg1;

+ (void)playToneAndVibrationForType:(int)arg1 accountIdentifier:(id)arg2;

+ (void)playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;

@property(copy, nonatomic, setter=_setCompletionHandler:) id _completionHandler; // @synthesize _completionHandler;

@property(nonatomic, setter=_setShouldOverrideMasterSwitches:) _Bool _shouldOverrideMasterSwitches; // @synthesize _shouldOverrideMasterSwitches;

@property(retain, nonatomic, setter=_setTargetQueue:) NSObject<OS_dispatch_queue> *_targetQueue; // @synthesize _targetQueue;

- (void)_setToneIdentifier:(id)arg1;

- (void)_setType:(int)arg1;

- (void)_setVibrationIdentifier:(id)arg1;

- (void)dealloc;

- (id)initWithType:(int)arg1;

- (id)initWithType:(int)arg1 accountIdentifier:(id)arg2;

- (id)initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;

- (_Bool)playWithCompletionHandler:(id)arg1 targetQueue:(void)arg2;

- (void)stop;

@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;

@property(nonatomic) int type; // @synthesize type=_type;

@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;



@end


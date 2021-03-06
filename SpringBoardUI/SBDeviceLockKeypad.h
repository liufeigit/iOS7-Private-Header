/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TPLegacyPhonePad.h"



@class UIButton;



@interface SBDeviceLockKeypad : TPLegacyPhonePad

{

    UIButton *_deleteButton;

    UIButton *_cancelButton;

    _Bool _deleteEnabled;

    _Bool _playKeyboardClicks;

}



+ (struct CGSize)defaultSize;

+ (id)keypadImage;

+ (id)pressedImage;

- (id)_keypadImage;

- (id)_pressedImage;

@property(readonly, nonatomic) BOOL cancelKeyChar;

- (void)dealloc;

@property(readonly, nonatomic) BOOL deleteKeyChar;

@property(readonly, nonatomic) BOOL emergencyKeyChar;

- (void)hiddenFromView;

- (id)initWithDefaultSizeForStyle:(int)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isDeleteEnabled) _Bool deleteEnabled; // @synthesize deleteEnabled=_deleteEnabled;

@property(nonatomic) _Bool playsKeyboardClicks;

@property(nonatomic) _Bool showsEmergencyCallButton;

- (void)willBecomeVisible;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSMutableString, NSString;



@interface TPPasscodeView : UIView

{

    NSMutableString *_passcodeMutableString;

}



- (void)appendCharacter:(id)arg1;

- (void)clear;

- (void)dealloc;

- (void)deleteLastCharacter;

- (void)drawRect:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (struct CGSize)intrinsicContentSize;

@property(retain) NSMutableString *passcodeMutableString; // @synthesize passcodeMutableString=_passcodeMutableString;

@property(readonly) NSString *passcodeString; // @dynamic passcodeString;



@end



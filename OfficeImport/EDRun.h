/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "EDKeyedObject.h"



@class EDResources;



__attribute__((visibility("hidden")))

@interface EDRun : NSObject <EDKeyedObject>

{

    EDResources *mResources;

    unsigned long long mCharIndex;

    unsigned long long mFontIndex;

}



+ (id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3;

+ (id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3;

+ (id)runWithResources:(id)arg1;

- (unsigned long long)charIndex;

- (id)font;

- (unsigned long long)fontIndex;

- (id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3;

- (id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3;

- (id)initWithResources:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isEqualToRun:(id)arg1;

- (long long)key;

- (void)setCharIndex:(unsigned long long)arg1;

- (void)setFont:(id)arg1;

- (void)setFontIndex:(unsigned long long)arg1;



@end



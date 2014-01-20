/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, NSValue, UIImage;



__attribute__((visibility("hidden")))

@interface _UISearchBarAppearanceStorage : NSObject

{

    NSMutableDictionary *searchFieldBackgroundImages;

    NSValue *searchFieldPositionAdjustment;

    NSMutableDictionary *iconImages;

    UIImage *separatorImage;

    UIImage *scopeBarBackgroundImage;

}



- (void)dealloc;

- (id)imageForIcon:(long long)arg1 state:(unsigned long long)arg2;

@property(retain, nonatomic) UIImage *scopeBarBackgroundImage; // @synthesize scopeBarBackgroundImage;

- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;

@property(retain, nonatomic) NSValue *searchFieldPositionAdjustment; // @synthesize searchFieldPositionAdjustment;

@property(retain, nonatomic) UIImage *separatorImage; // @synthesize separatorImage;

- (void)setImage:(id)arg1 forIcon:(long long)arg2 state:(unsigned long long)arg3;

- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;



@end


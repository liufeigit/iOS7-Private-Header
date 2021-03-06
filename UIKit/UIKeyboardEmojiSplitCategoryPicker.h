/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKeyboardEmojiSplit.h"


#import "UIKeyboardEmojiCategoryControl.h"



@class UIKeyboardEmojiCategory, UIKeyboardEmojiCategoryController;



__attribute__((visibility("hidden")))

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl>

{

    UIKeyboardEmojiCategoryController *_categoryController;

    _Bool _whiteText;

    UIKeyboardEmojiCategory *_lastUsedCategory;

}



- (id)categoryForCurrentRow;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

- (void)setCategory:(id)arg1;

- (void)setRenderConfig:(id)arg1;

@property _Bool whiteText; // @synthesize whiteText=_whiteText;

- (id)symbolForRow:(long long)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (id)titleForRow:(long long)arg1;

- (void)updateCategorySelectedIndicator:(int)arg1;



@end



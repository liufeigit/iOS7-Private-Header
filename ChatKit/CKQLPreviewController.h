/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "QLPreviewController.h"



#import "QLPreviewControllerDataSource.h"



@class NSArray;



@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource>

{

    NSArray *_previewItems;

}



- (id)currentPreviewItem;

- (void)dealloc;

- (id)init;

- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;

- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;

@property(copy, nonatomic) NSArray *previewItems; // @synthesize previewItems=_previewItems;

- (void)setDataSource:(id)arg1;



@end


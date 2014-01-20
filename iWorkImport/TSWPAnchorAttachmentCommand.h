/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextBaseCommand.h"


#import "TSDCoalesceableInfoPositioningCommmand.h"



@class TSKAddedToDocumentContext, TSWPAttachment, TSWPStorage;



__attribute__((visibility("hidden")))

@interface TSWPAnchorAttachmentCommand : TSWPTextBaseCommand <TSDCoalesceableInfoPositioningCommmand>

{

    TSWPStorage *_storage;

    TSWPAttachment *_attachment;

    TSKAddedToDocumentContext *_dolcContext;

    unsigned long long _charIndex;

    int _hOffsetType;

    double _hOffset;

    int _vOffsetType;

    double _vOffset;

    _Bool _isHTMLWrap;

    struct TSWPStorageTransaction *_undoRedoTransaction;

}



- (id)actionString;

- (void)coalesceWithCommand:(id)arg1;

- (void)commit;

- (void)dealloc;

- (id)drawable;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithStorage:(id)arg1 attachment:(id)arg2 charIndex:(unsigned long long)arg3 hOffsetType:(int)arg4 hOffset:(double)arg5 vOffsetType:(int)arg6 vOffset:(double)arg7 dolcContext:(id)arg8;

- (void)loadFromArchive:(const struct AnchorAttachmentCommandArchive *)arg1 unarchiver:(id)arg2;

- (void)p_invalidateRange:(struct _NSRange)arg1;

- (void)p_invalidateSelection:(id)arg1;

- (_Bool)process;

- (void)redo;

- (void)saveToArchive:(struct AnchorAttachmentCommandArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (_Bool)shouldBeCoalescedWithInsertionCommandOfInfo:(id)arg1;

- (void)undo;

- (void)undoRedo;

- (struct TSWPStorageTransaction *)undoRedoTransaction;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPStyleBaseCommand.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface TSWPStyleRenameCommand : TSWPStyleBaseCommand

{

    NSString *_updatedName;

    NSString *_oldName;

}



- (id)actionString;

- (void)commit;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithTheme:(id)arg1 style:(id)arg2 updatedName:(id)arg3;

- (void)loadFromMessage:(const struct StyleRenameCommandArchive *)arg1 unarchiver:(id)arg2;

@property(copy, nonatomic) NSString *oldName; // @synthesize oldName=_oldName;

- (void)p_CommitAndRedo;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

- (void)saveToMessage:(struct StyleRenameCommandArchive *)arg1 archiver:(id)arg2;

@property(copy, nonatomic) NSString *updatedName; // @synthesize updatedName=_updatedName;

- (void)undo;



@end



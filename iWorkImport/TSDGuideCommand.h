/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommand.h"


@class TSDGuideStorage, TSDUserDefinedGuide;



__attribute__((visibility("hidden")))

@interface TSDGuideCommand : TSKCommand

{

    TSDGuideStorage *mStorage;

    TSDUserDefinedGuide *mOldGuide;

    TSDUserDefinedGuide *mNewGuide;

    unsigned long long mMode;

}



- (void)commit;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithGuideStorage:(id)arg1 mode:(unsigned long long)arg2 oldGuide:(id)arg3 newGuide:(id)arg4;

- (_Bool)process;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

- (void)undo;



@end


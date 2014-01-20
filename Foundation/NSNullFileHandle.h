/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSFileHandle.h"


__attribute__((visibility("hidden")))

@interface NSNullFileHandle : NSFileHandle

{

}



- (id)availableData;

- (void)closeFile;

- (int)fileDescriptor;

- (unsigned long long)offsetInFile;

- (id)readDataOfLength:(unsigned long long)arg1;

- (id)readDataToEndOfFile;

- (id)readabilityHandler;

- (unsigned long long)seekToEndOfFile;

- (void)seekToFileOffset:(unsigned long long)arg1;

- (void)setReadabilityHandler:(id)arg1;

- (void)setWriteabilityHandler:(id)arg1;

- (void)synchronizeFile;

- (void)truncateFileAtOffset:(unsigned long long)arg1;

- (void)writeData:(id)arg1;

- (id)writeabilityHandler;



@end


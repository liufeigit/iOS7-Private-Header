/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol ICDeviceManagerProtocol <NSObject>

- (int)closeDevice:(id)arg1 contextInfo:(void *)arg2;

- (int)closeSession:(id)arg1 contextInfo:(void *)arg2;

- (int)deleteFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void *)arg3;

- (int)downloadFile:(id)arg1 fromDevice:(id)arg2 options:(id)arg3 contextInfo:(void *)arg4;

- (int)eject:(id)arg1;

- (int)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void *)arg3;

- (int)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void *)arg3;

- (int)openDevice:(id)arg1 contextInfo:(void *)arg2;

- (int)openSession:(id)arg1 contextInfo:(void *)arg2;

- (int)syncClock:(id)arg1 contextInfo:(void *)arg2;

@end



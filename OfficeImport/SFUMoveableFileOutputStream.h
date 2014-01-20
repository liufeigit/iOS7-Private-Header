/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SFUOutputStream.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface SFUMoveableFileOutputStream : NSObject <SFUOutputStream>

{

    int mFd;

    NSString *mPath;

}



- (_Bool)canCreateInputStream;

- (_Bool)canSeek;

- (void)close;

- (id)closeLocalStream;

- (void)dealloc;

- (void)flush;

- (id)initWithPath:(id)arg1;

- (id)initWithTemporaryFile:(id)arg1;

- (id)inputStream;

- (_Bool)moveToPath:(id)arg1;

- (long long)offset;

- (id)path;

- (void)seekToOffset:(long long)arg1 whence:(int)arg2;

- (void)truncateToLength:(long long)arg1;

- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSPComponentWriteChannel.h"



@class TSUZipFileWriter;



__attribute__((visibility("hidden")))

@interface TSPBundleWriterComponentWriteChannel : NSObject <TSPComponentWriteChannel>

{

    TSUZipFileWriter *_archiveWriter;

    _Bool _isClosed;

}



- (void).cxx_destruct;

- (void)close;

- (id)initWithArchiveWriter:(id)arg1;

- (void)writeData:(id)arg1;



@end



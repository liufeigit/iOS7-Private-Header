/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface DATrafficLogger : NSObject

{

    NSString *_filename;

}



+ (_Bool)enabled;

- (void)_ensureCustomLogFile;

- (void)dealloc;

- (id)initWithFilename:(id)arg1;

- (void)logSnippet:(id)arg1;

- (void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3;



@end



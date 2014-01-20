/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GQUOutputBundle.h"



__attribute__((visibility("hidden")))

@interface GQUIglooOutputBundle : NSObject <GQUOutputBundle>

{

    struct __CFDictionary *mAttachments;

    struct __CFData *mMainHtmlData;

    struct __CFString *mUriPrefix;

    struct __CFString *mUuidStr;

}



- (struct __CFDictionary *)attachments;

- (struct __CFDictionary *)createOutputDictionary;

- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;

- (void)dealloc;

- (id)init;

- (struct __CFData *)mainHtmlData;

- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;

- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;

- (void)setDocumentSize:(struct CGSize)arg1;

- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;

- (void)setUriPrefix:(struct __CFString *)arg1;



@end


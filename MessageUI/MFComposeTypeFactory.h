/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface MFComposeTypeFactory : NSObject

{

}



+ (id)_markupForInlineAttachment:(id)arg1 willBeIncluded:(_Bool)arg2 prependBlankLine:(_Bool)arg3 delegate:(id)arg4;

+ (void)_prependPreamble:(id)arg1 toBodyField:(id)arg2;

+ (void)_prependQuotedMarkup:(id)arg1 shouldIndent:(_Bool)arg2 toBodyField:(id)arg3;

+ (void)_quoteFromModel:(id)arg1 delegate:(id)arg2;

+ (void)_setContent:(id)arg1 includeAttachments:(_Bool)arg2 shouldQuote:(_Bool)arg3 prependBlankLine:(_Bool)arg4 delegate:(id)arg5;

+ (void)_setupForForwardWithModel:(id)arg1 delegate:(id)arg2;

+ (void)_setupForNewMessageWithModel:(id)arg1 delegate:(id)arg2;

+ (void)_setupForReplyAllWithModel:(id)arg1 delegate:(id)arg2;

+ (void)_setupForReplyWithModel:(id)arg1 delegate:(id)arg2;

+ (void)addAttachment:(id)arg1 prepend:(_Bool)arg2 withCompositionModel:(id)arg3 delegate:(id)arg4;

+ (id)addInlineAttachmentForInclusion:(id)arg1 onlyIfNecessary:(_Bool)arg2 delegate:(id)arg3;

+ (id)headersFromDelegate:(id)arg1;

+ (id)headersFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;

+ (unsigned long long)imageScaleFromUserDefaults;

+ (id)messageFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;

+ (void)setupWithCompositionModel:(id)arg1 delegate:(id)arg2;

+ (void)setupWithContent:(id)arg1 delegate:(id)arg2;

+ (id)subjectFromSubject:(id)arg1 withComposeType:(int)arg2;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSTTableDataObject.h"


@class TSTRichTextPayload;



__attribute__((visibility("hidden")))

@interface TSTTableDataRichTextPayload : TSTTableDataObject

{

    TSTRichTextPayload *mPayload;

}



- (void)dealloc;

- (id)description;

- (unsigned long long)hash;

- (id)initObjectWithRichTextPayload:(id)arg1;

- (_Bool)isEqual:(id)arg1;



@end


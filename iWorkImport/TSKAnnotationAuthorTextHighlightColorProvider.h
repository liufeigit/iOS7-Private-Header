/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSKCGColorProvider.h"



@class TSKAnnotationAuthor;



__attribute__((visibility("hidden")))

@interface TSKAnnotationAuthorTextHighlightColorProvider : NSObject <TSKCGColorProvider>

{

    TSKAnnotationAuthor *mAnnotationAuthor;

}



- (struct CGColor *)cgColor;

- (void)dealloc;

- (id)initWithAnnotationAuthor:(id)arg1;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "TSDAnnotationHosting.h"

#import "TSKDocumentObject.h"

#import "TSPCopying.h"



@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor;



__attribute__((visibility("hidden")))

@interface TSWPHighlight : TSPObject <TSDAnnotationHosting, TSPCopying, TSKDocumentObject>

{

    int annotationType;

    TSKAnnotationAuthor *author;

    NSDate *date;

    id <TSKModel> model;

    TSDCommentStorage *_commentStorage;

}



+ (id)defaultHighlightWithContext:(id)arg1 includeCommentWithAuthor:(id)arg2;

@property(readonly, nonatomic) int annotationDisplayStringType;

@property(readonly, nonatomic) int annotationType; // @synthesize annotationType;

@property(retain, nonatomic) TSKAnnotationAuthor *author; // @synthesize author;

- (id)commandForDeletingComment;

@property(retain, nonatomic) TSDCommentStorage *commentStorage; // @synthesize commentStorage=_commentStorage;

- (void)commitText:(id)arg1;

- (id)copyWithContext:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) NSDate *date; // @synthesize date;

- (void)dealloc;

- (id)description;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 commentStorage:(id)arg2;

- (_Bool)isCommentEmpty;

- (_Bool)isEqual:(id)arg1;

- (void)loadFromArchive:(const struct HighlightArchive *)arg1 unarchiver:(id)arg2;

@property(nonatomic) id <TSKModel> model; // @synthesize model;

- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1;

- (void)saveToArchiver:(id)arg1;

@property(copy, nonatomic) TSDCommentStorage *storage;

- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)wasRemovedFromDocumentRoot:(id)arg1;

- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)willBeRemovedFromDocumentRoot:(id)arg1;



// Remaining properties

@property(readonly, nonatomic) NSString *changeTrackingString;



@end


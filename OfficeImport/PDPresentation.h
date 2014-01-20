/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OCDDocument.h"


@class NSMutableArray, NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface PDPresentation : OCDDocument

{

    NSMutableArray *mSlideMasters;

    NSMutableArray *mNotesMasters;

    NSMutableArray *mSlides;

    NSMutableArray *mBulletBlips;

    struct CGSize mSlideSize;

    struct CGSize mNotesSize;

    _Bool mIsAutoPlay;

    _Bool mIsCommentsVisible;

    _Bool mIsLooping;

    _Bool mIsKiosk;

    NSMutableDictionary *mCommentAuthors;

}



- (id).cxx_construct;

- (unsigned int)addBulletBlip:(id)arg1;

- (void)addNotesMaster:(id)arg1;

- (void)addSlide:(id)arg1;

- (void)addSlideMaster:(id)arg1;

- (id)bulletBlipAtIndex:(int)arg1;

- (unsigned int)bulletBlipCount;

- (id)bulletBlips;

- (void)cacheGraphicStyleForDrawable:(id)arg1 colorContext:(id)arg2;

- (void)cacheGraphicStylesForSlideBase:(id)arg1;

- (id)commentAuthorForId:(unsigned int)arg1;

- (void)dealloc;

- (void)ensureDefaultLayoutsForMasters;

- (void)flushUnusedMastersAndLayouts;

- (unsigned long long)indexOfSlide:(id)arg1;

- (id)init;

- (_Bool)isAutoPlay;

- (_Bool)isCommentsVisible;

- (_Bool)isKiosk;

- (_Bool)isLooping;

- (id)notesMasterAtIndex:(unsigned long long)arg1;

- (unsigned long long)notesMasterCount;

- (struct CGSize)notesSize;

- (void)setCommentAuthor:(id)arg1 forId:(unsigned int)arg2;

- (void)setIsAutoPlay:(_Bool)arg1;

- (void)setIsCommentsVisible:(_Bool)arg1;

- (void)setIsKiosk:(_Bool)arg1;

- (void)setIsLooping:(_Bool)arg1;

- (void)setNotesSize:(struct CGSize)arg1;

- (void)setSlideSize:(struct CGSize)arg1;

- (id)slideAtIndex:(unsigned long long)arg1;

- (unsigned long long)slideCount;

- (id)slideMasterAtIndex:(unsigned long long)arg1;

- (unsigned long long)slideMasterCount;

- (struct CGSize)slideSize;



@end


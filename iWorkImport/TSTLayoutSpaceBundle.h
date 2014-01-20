/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSTLayout, TSTLayoutSpace;



__attribute__((visibility("hidden")))

@interface TSTLayoutSpaceBundle : NSObject

{

    TSTLayout *mLayout;

    TSTLayoutSpace *mSpace;

    TSTLayoutSpace *mFrozenHeaderColumnsSpace;

    TSTLayoutSpace *mFrozenHeaderRowsSpace;

    TSTLayoutSpace *mFrozenHeaderCornerSpace;

    TSTLayoutSpace *mRepeatHeaderColumnsSpace;

    TSTLayoutSpace *mRepeatHeaderRowsSpace;

    TSTLayoutSpace *mRepeatHeaderCornerSpace;

}



- (void)dealloc;

- (id)description;

@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderColumnsSpace; // @synthesize frozenHeaderColumnsSpace=mFrozenHeaderColumnsSpace;

@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderCornerSpace; // @synthesize frozenHeaderCornerSpace=mFrozenHeaderCornerSpace;

@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderRowsSpace; // @synthesize frozenHeaderRowsSpace=mFrozenHeaderRowsSpace;

- (id)getSpaceContainingCellID:(CDStruct_0441cfb5)arg1;

- (id)initWithLayout:(id)arg1;

- (void)invalidateCoordinates;

- (void)invalidateTableOffsets;

@property(nonatomic) TSTLayout *layout; // @synthesize layout=mLayout;

- (void)performActionOnEachLayoutSpace:(id)arg1;

- (_Bool)performActionOnFrozenLayoutSpaces:(id)arg1;

- (_Bool)performActionOnRepeatLayoutSpaces:(id)arg1;

@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderColumnsSpace; // @synthesize repeatHeaderColumnsSpace=mRepeatHeaderColumnsSpace;

@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderCornerSpace; // @synthesize repeatHeaderCornerSpace=mRepeatHeaderCornerSpace;

@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderRowsSpace; // @synthesize repeatHeaderRowsSpace=mRepeatHeaderRowsSpace;

@property(retain, nonatomic) TSTLayoutSpace *space; // @synthesize space=mSpace;

- (int)validateLayoutSpaces;



@end


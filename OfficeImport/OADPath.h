/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface OADPath : NSObject

{

    struct CGSize mSize;

    NSMutableArray *mElements;

    int mFillMode;

    _Bool mStroked;

}



- (id).cxx_construct;

- (void)addElement:(id)arg1;

- (void)dealloc;

- (id)elementAtIndex:(unsigned long long)arg1;

- (unsigned long long)elementCount;

- (int)fillMode;

- (id)init;

- (void)setFillMode:(int)arg1;

- (void)setSize:(struct CGSize)arg1;

- (void)setStroked:(_Bool)arg1;

- (struct CGSize)size;

- (_Bool)stroked;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol UIElementProtocol <NSObject>

+ (void)applyElementAttributeCacheScheme:(int)arg1;

+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;

- (id)arrayWithAXAttribute:(int)arg1;

- (_Bool)boolWithAXAttribute:(int)arg1;

- (_Bool)canPerformAXAction:(int)arg1;

- (void)disableCache;

- (void)enableCache:(_Bool)arg1;

- (_Bool)isMockElement;

- (_Bool)isValid;

- (_Bool)isValidForApplication:(id)arg1;

- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3;

- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3 currentCursorRange:(struct _NSRange)arg4;

- (id)nextElementsWithCount:(unsigned long long)arg1;

- (id)numberWithAXAttribute:(int)arg1;

- (id)objectWithAXAttribute:(int)arg1;

- (id)objectWithAXAttribute:(int)arg1 parameter:(void *)arg2;

- (struct CGPath *)pathWithAXAttribute:(int)arg1;

- (_Bool)performAXAction:(int)arg1;

- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2;

- (int)pid;

- (struct CGPoint)pointWithAXAttribute:(int)arg1;

- (id)previousElementsWithCount:(unsigned long long)arg1;

- (struct _NSRange)rangeWithAXAttribute:(int)arg1;

- (struct CGRect)rectWithAXAttribute:(int)arg1;

- (void)setAXAttribute:(int)arg1 withArray:(id)arg2;

- (void)setAXAttribute:(int)arg1 withBOOL:(_Bool)arg2;

- (void)setAXAttribute:(int)arg1 withFloat:(float)arg2;

- (void)setAXAttribute:(int)arg1 withLong:(long long)arg2;

- (void)setAXAttribute:(int)arg1 withNumber:(id)arg2;

- (void)setAXAttribute:(int)arg1 withObject:(id)arg2;

- (void)setAXAttribute:(int)arg1 withObject:(id)arg2 synchronous:(_Bool)arg3;

- (void)setAXAttribute:(int)arg1 withPoint:(struct CGPoint)arg2;

- (void)setAXAttribute:(int)arg1 withRange:(struct _NSRange)arg2;

- (void)setAXAttribute:(int)arg1 withSize:(struct CGSize)arg2;

- (void)setAXAttribute:(int)arg1 withString:(id)arg2;

- (void)setAXAttribute:(int)arg1 withUIElement:(id)arg2;

- (void)setAXAttribute:(int)arg1 withUIElementArray:(id)arg2;

- (id)stringWithAXAttribute:(int)arg1;

- (id)uiElementsWithAttribute:(int)arg1;

- (id)uiElementsWithAttribute:(int)arg1 parameter:(void *)arg2;

- (void)updateCache:(int)arg1;

- (void)updateCacheWithAttributes:(id)arg1;

@end



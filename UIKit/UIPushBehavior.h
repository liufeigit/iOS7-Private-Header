/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIDynamicBehavior.h"


@class NSArray, NSMutableDictionary;



@interface UIPushBehavior : UIDynamicBehavior

{

    double _angle;

    double _magnitude;

    _Bool _active;

    long long _mode;

    struct CGVector _forceVector;

    double _timeInterval;

    NSMutableDictionary *_targetPoints;

    int _i;

}



- (void)_associate;

- (void)_commonInit;

- (void)_dissociate;

- (void)_step;

@property(nonatomic) _Bool active;

- (void)addItem:(id)arg1;

@property(nonatomic) double angle;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithItems:(id)arg1;

- (id)initWithItems:(id)arg1 mode:(long long)arg2;

@property(readonly, nonatomic) NSArray *items;

@property(nonatomic) double magnitude;

@property(readonly, nonatomic) long long mode;

@property(nonatomic) struct CGVector pushDirection;

- (void)removeItem:(id)arg1;

- (void)setAngle:(double)arg1 magnitude:(double)arg2;

- (void)setTargetOffsetFromCenter:(struct UIOffset)arg1 forItem:(id)arg2;

- (void)setTargetPoint:(struct CGPoint)arg1 forItem:(id)arg2;

- (void)setXComponent:(double)arg1;

- (void)setXComponent:(double)arg1 yComponent:(double)arg2;

- (void)setYComponent:(double)arg1;

- (struct UIOffset)targetOffsetFromCenterForItem:(id)arg1;

- (struct CGPoint)targetPointForItem:(id)arg1;

- (double)xComponent;

- (double)yComponent;



@end



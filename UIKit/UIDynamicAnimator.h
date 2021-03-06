/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CADisplayLink, CALayer, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, PKExtendedPhysicsWorld, UIView;



@interface UIDynamicAnimator : NSObject

{

    PKExtendedPhysicsWorld *_world;

    CADisplayLink *_displaylink;

    double _elapsedTime;

    double _realElapsedTime;

    double _lastUpdateTime;

    double _lastInterval;

    long long _ticks;

    CALayer *_debugLayer;

    NSMutableDictionary *_bodies;

    NSMutableArray *_topLevelBehaviors;

    NSMutableSet *_registeredBehaviors;

    NSMutableSet *_behaviorsToRemove;

    NSMutableSet *_behaviorsToAdd;

    NSMutableArray *_postSolverActions;

    NSMutableArray *_beginContacts;

    NSMutableArray *_endContacts;

    _Bool _isInWorldStepMethod;

    _Bool _needsLocalBehaviorReevaluation;

    unsigned long long _referenceSystemType;

    unsigned long long _integralization;

    struct {

        unsigned int delegateImplementsDynamicAnimatorDidPause:1;

        unsigned int delegateImplementsDynamicAnimatorWillResume:1;

    } _stateFlags;

    double _accuracy;

    int _registeredCollisionGroups;

    int _registeredImplicitBounds;

    struct CGRect _referenceSystemBounds;

    id <_UIDynamicReferenceSystem> _referenceSystem;

    int _debugInterval;

    id _action;

    id <UIDynamicAnimatorDelegate> _delegate;

    _Bool _disableDisplayLink;

    double _speed;

}



+ (id)_allDynamicAnimators;

+ (void)_clearReferenceViewFromAnimators:(id)arg1;

+ (void)_referenceViewSizeChanged:(id)arg1;

+ (void)_registerAnimator:(id)arg1;

+ (void)_unregisterAnimator:(id)arg1;

+ (void)initialize;

- (_Bool)_alwaysDisableDisplayLink;

- (unsigned long long)_animatorIntegralization;

- (double)_animatorInterval;

- (_Bool)_animatorStep:(double)arg1;

- (id)_bodyForItem:(id)arg1;

- (void)_checkBehavior:(id)arg1;

- (void)_clearReferenceView;

- (int)_debugInterval;

- (void)_defaultMapper:(id)arg1 position:(struct CGPoint)arg2 angle:(double)arg3 itemType:(unsigned long long)arg4;

- (id)_delegate;

- (void)_displayLinkTick:(id)arg1;

- (void)_evaluateLocalBehaviors;

- (_Bool)_isWorldActive;

- (id)_keyForItem:(id)arg1;

- (void)_postSolverStep;

- (void)_preSolverStep;

- (double)_ptmRatio;

- (double)_realElapsedTime;

- (void)_reevaluateImplicitBounds;

- (id)_referenceSystem;

- (struct CGRect)_referenceSystemBounds;

- (unsigned long long)_referenceSystemType;

- (void)_registerBehavior:(id)arg1;

- (id)_registerBodyForItem:(id)arg1;

- (id)_registerBodyForItem:(id)arg1 shape:(unsigned long long)arg2;

- (int)_registerCollisionGroup;

- (void)_registerImplicitBounds;

- (void)_reportBeginContacts;

- (void)_reportEndContacts;

- (void)_runBlockPostSolverIfNeeded:(id)arg1;

- (void)_setAction:(id)arg1;

- (void)_setAlwaysDisableDisplayLink:(_Bool)arg1;

- (void)_setAnimatorIntegralization:(unsigned long long)arg1;

- (void)_setDebugInterval:(int)arg1;

- (void)_setDelegate:(id)arg1;

- (void)_setReferenceSystem:(id)arg1;

- (void)_setRunning:(_Bool)arg1;

- (void)_setSpeed:(double)arg1;

- (void)_setupWorld;

- (void)_shouldReevaluateLocalBehaviors;

- (double)_speed;

- (void)_start;

- (void)_stop;

- (void)_tickle;

- (long long)_ticks;

- (void)_traverseBehaviorHierarchy:(id)arg1;

- (void)_unregisterBehavior:(id)arg1;

- (void)_unregisterBodyForItem:(id)arg1 action:(id)arg2;

- (void)_unregisterCollisionGroup;

- (void)_unregisterImplicitBounds;

- (id)_world;

- (void)addBehavior:(id)arg1;

@property(readonly, nonatomic) NSArray *behaviors;

- (void)dealloc;

@property(nonatomic) id <UIDynamicAnimatorDelegate> delegate;

- (id)description;

- (void)didBeginContact:(id)arg1;

- (void)didEndContact:(id)arg1;

- (double)elapsedTime;

- (id)init;

- (id)initWithCollectionViewLayout:(id)arg1;

- (id)initWithReferenceSystem:(id)arg1;

- (id)initWithReferenceView:(id)arg1;

@property(readonly, nonatomic, getter=isRunning) _Bool running;

- (id)itemsInRect:(struct CGRect)arg1;

- (id)layoutAttributesForCellAtIndexPath:(id)arg1;

- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;

- (id)recursiveDescription;

@property(readonly, nonatomic) UIView *referenceView;

- (void)removeAllBehaviors;

- (void)removeBehavior:(id)arg1;

- (void)setReferenceView:(id)arg1;

- (void)updateItemFromCurrentState:(id)arg1;

- (void)updateItemUsingCurrentState:(id)arg1;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIDynamicBehavior.h"


@class NSArray, PKExtendedPhysicsBody, PKPhysicsJoint;



@interface UIAttachmentBehavior : UIDynamicBehavior

{

    struct CGPoint _anchorPoint;

    struct CGPoint _anchorPointA;

    struct CGPoint _anchorPointB;

    PKExtendedPhysicsBody *_anchorBody;

    PKPhysicsJoint *_joint;

    double _damping;

    double _frequency;

    double _length;

    long long _type;

    struct {

        unsigned int dampingSet:1;

        unsigned int frequencySet:1;

        unsigned int lengthSet:1;

        unsigned int isRevolute:1;

    } _stateFlags;

    long long _attachedBehaviorType;

}



- (void)_associate;

- (void)_changedParameter;

- (void)_dissociate;

- (void)_reevaluateJoint;

@property(nonatomic) struct CGPoint anchorPoint;

@property(readonly, nonatomic) long long attachedBehaviorType; // @synthesize attachedBehaviorType=_attachedBehaviorType;

@property(nonatomic) double damping;

- (void)dealloc;

- (id)description;

@property(nonatomic) double frequency;

- (id)init;

- (id)initWithItem:(id)arg1 attachedToAnchor:(struct CGPoint)arg2;

- (id)initWithItem:(id)arg1 attachedToItem:(id)arg2;

- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset)arg2 attachedToAnchor:(struct CGPoint)arg3;

- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset)arg2 attachedToItem:(id)arg3 offsetFromCenter:(struct UIOffset)arg4;

- (id)initWithItem:(id)arg1 point:(struct CGPoint)arg2 attachedToAnchor:(struct CGPoint)arg3;

- (id)initWithItem:(id)arg1 point:(struct CGPoint)arg2 attachedToItem:(id)arg3 point:(struct CGPoint)arg4;

@property(readonly, nonatomic) NSArray *items;

@property(nonatomic) double length;

- (long long)type;



@end


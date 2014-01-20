/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PUAbstractTransition.h"


@class CADisplayLink, CAMediaTimingFunction, NSMutableDictionary, PUCollectionViewTransitionLayout, UICollectionView, UICollectionViewLayout;



@interface PUCollectionViewTransition : PUAbstractTransition

{

    UICollectionView *__targetCollectionView;

    UICollectionViewLayout *__fromLayout;

    UICollectionViewLayout *__toLayout;

    PUCollectionViewTransitionLayout *__transitionLayout;

    NSMutableDictionary *__indexPathsToInterpolatingLayoutAttributes;

    CAMediaTimingFunction *__interpolationTimingFunction;

    double __interpolationProgress;

    double __interpolationInitialProgress;

    CADisplayLink *__interpolatingDisplayLink;

    double __initialUpdateTime;

    id __interpolatingCompletionBlock;

}



- (void).cxx_destruct;

@property(retain, nonatomic, setter=_setFromLayout:) UICollectionViewLayout *_fromLayout; // @synthesize _fromLayout=__fromLayout;

- (id)_indexPathsFromLayout:(id)arg1 inCollectionView:(id)arg2 withMapping:(out id *)arg3;

@property(retain, nonatomic, setter=_setIndexPathsToInterpolatingLayoutAttributes:) NSMutableDictionary *_indexPathsToInterpolatingLayoutAttributes; // @synthesize _indexPathsToInterpolatingLayoutAttributes=__indexPathsToInterpolatingLayoutAttributes;

@property(nonatomic, setter=_setInitialUpdateTime:) double _initialUpdateTime; // @synthesize _initialUpdateTime=__initialUpdateTime;

- (id)_interpolatingAttributes;

@property(copy, nonatomic, setter=_setInterpolatingCompletionBlock:) id _interpolatingCompletionBlock; // @synthesize _interpolatingCompletionBlock=__interpolatingCompletionBlock;

@property(retain, nonatomic, setter=_setInterpolatingDisplayLink:) CADisplayLink *_interpolatingDisplayLink; // @synthesize _interpolatingDisplayLink=__interpolatingDisplayLink;

@property(nonatomic, setter=_setInterpolationInitialProgress:) double _interpolationInitialProgress; // @synthesize _interpolationInitialProgress=__interpolationInitialProgress;

@property(nonatomic, setter=_setInterpolationProgress:) double _interpolationProgress; // @synthesize _interpolationProgress=__interpolationProgress;

@property(retain, nonatomic, setter=_setInterpolationTimingFunction:) CAMediaTimingFunction *_interpolationTimingFunction; // @synthesize _interpolationTimingFunction=__interpolationTimingFunction;

@property(retain, nonatomic, setter=_setTargetCollectionView:) UICollectionView *_targetCollectionView; // @synthesize _targetCollectionView=__targetCollectionView;

@property(retain, nonatomic, setter=_setToLayout:) UICollectionViewLayout *_toLayout; // @synthesize _toLayout=__toLayout;

@property(retain, nonatomic, setter=_setTransitionLayout:) PUCollectionViewTransitionLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;

- (void)_updateBidirectionalAnimatingLayoutAttributes;

- (void)_updateUnidirectionalAnimatingLayoutAttributes;

- (void)cancelInteractiveTransitionWithBounce:(_Bool)arg1 withCompletionBlock:(id)arg2;

- (void)cancelInteractiveTransitionWithCompletionBlock:(id)arg1;

- (void)dealloc;

- (void)finishInteractiveTransitionAtVelocity:(double)arg1 withBounce:(_Bool)arg2 withCompletionBlock:(id)arg3;

- (void)finishTransitionUsingDynamicsAtVelocity:(double)arg1 withCompletionBlock:(id)arg2;

- (void)finishTransitionUsingInterpolationToProgress:(double)arg1 withCompletionBlock:(id)arg2;

- (id)initWithCollectionView:(id)arg1 fromLayout:(id)arg2;

- (id)initWithCollectionView:(id)arg1 fromLayout:(id)arg2 toLayout:(id)arg3;

- (void)interpolatedTransition:(id)arg1;

- (void)performTransitionWithBounce:(_Bool)arg1 withCompletionBlock:(id)arg2;

- (void)setProgress:(double)arg1;



@end


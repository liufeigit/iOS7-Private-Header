/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PUMapAnnotationQuadtreeAddress.h"


@class NSArray, NSMutableSet;



@interface PUMapAnnotationQuadtreeMultiAddress : PUMapAnnotationQuadtreeAddress

{

    NSMutableSet *_alternativeAddresses;

}



- (void).cxx_destruct;

- (void)addAlternativeAddress:(id)arg1;

@property(readonly, nonatomic) NSArray *alternativeAddresses;

- (id)initWithQuadtreeAddress:(id)arg1;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSProgress.h"



@interface NSProgress (LSInstallProgressAdditions)

+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned long long)arg2;

+ (id)keyPathsForValuesAffectingInstallPhase;

+ (id)keyPathsForValuesAffectingInstallState;

+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned long long)arg2;

- (id)description;

- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned long long)arg3;

@property(nonatomic) unsigned long long installPhase;

@property(nonatomic) unsigned long long installState;

- (void)resume;

@end



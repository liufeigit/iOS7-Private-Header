/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PLAssetContainerList.h"



@class NSOrderedSet;



@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>

{

    NSOrderedSet *_containers;

}



- (_Bool)canEditContainers;

@property(retain, nonatomic) NSOrderedSet *containers; // @synthesize containers=_containers;

@property(readonly, nonatomic) unsigned long long containersCount;

- (id)containersRelationshipName;

- (void)dealloc;

- (id)initWithAssetContainer:(id)arg1;

- (id)initWithAssetContainers:(id)arg1;

- (_Bool)isEmpty;

- (id)managedObjectContext;

- (id)photoLibrary;



@end



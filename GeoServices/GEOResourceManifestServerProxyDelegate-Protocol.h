/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol GEOResourceManifestServerProxyDelegate <NSObject>

- (oneway void)serverProxyDidChangeActiveTileGroup:(id)arg1 finishedCallback:(id)arg2;

- (oneway void)serverProxyDidStopLoadingResources;

- (oneway void)serverProxyDidStopUpdatingResourceManifest;

- (oneway void)serverProxyWillStartLoadingResources;

- (oneway void)serverProxyWillStartUpdatingResourceManifest;

@end



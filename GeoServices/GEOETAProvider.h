/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface GEOETAProvider : NSObject

{

}



+ (unsigned short)providerID;

- (void)cancelRequest;

- (void)startRequest:(id)arg1 connectionProperties:(const CDStruct_96e0509c *)arg2 willSendRequest:(id)arg3 finished:(void)arg4 error:(id)arg5;

- (void)startRequest:(id)arg1 finished:(id)arg2 error:(void)arg3;

- (void)startSimpleETARequest:(id)arg1 finished:(id)arg2 error:(void)arg3;

- (void)updateRequest:(id)arg1 finished:(id)arg2 error:(void)arg3;



@end


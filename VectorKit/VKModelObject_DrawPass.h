/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class VKModelObject;



__attribute__((visibility("hidden")))

@interface VKModelObject_DrawPass : NSObject

{

    unsigned int _pass;

    VKModelObject *_submodel;

}



- (void)dealloc;

- (id)description;

@property(nonatomic) unsigned int pass; // @synthesize pass=_pass;

@property(retain, nonatomic) VKModelObject *submodel; // @synthesize submodel=_submodel;



@end


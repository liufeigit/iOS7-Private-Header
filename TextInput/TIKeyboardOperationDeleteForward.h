/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TIKeyboardOperation.h"


@interface TIKeyboardOperationDeleteForward : TIKeyboardOperation

{

    _Bool _shouldNotify;

    unsigned long long _deletionCount;

}



+ (id)operationWithDeletionCount:(unsigned long long)arg1;

+ (id)operationWithDeletionCount:(unsigned long long)arg1 shouldNotify:(_Bool)arg2;

+ (_Bool)supportsSecureCoding;

@property(readonly, nonatomic) unsigned long long deletionCount; // @synthesize deletionCount=_deletionCount;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithDeletionCount:(unsigned long long)arg1 shouldNotify:(_Bool)arg2;

- (id)propertiesForDescription;

@property(readonly, nonatomic) _Bool shouldNotify; // @synthesize shouldNotify=_shouldNotify;



@end



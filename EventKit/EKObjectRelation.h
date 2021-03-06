/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EKObject, NSString;



__attribute__((visibility("hidden")))

@interface EKObjectRelation : NSObject

{

    EKObject *_owner;

    NSString *_relationName;

    _Bool _dirty;

    _Bool _loaded;

    NSString *_inverseName;

}



- (void)_addRelatedObject:(id)arg1 setInverse:(_Bool)arg2 dirty:(_Bool)arg3;

- (void)_removeRelatedObject:(id)arg1 setInverse:(_Bool)arg2 dirty:(_Bool)arg3;

- (id)committedValue;

- (void)dealloc;

- (void)didCommit;

- (unsigned long long)hash;

- (id)initWithOwner:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3;

@property(readonly, nonatomic) NSString *inverseName; // @synthesize inverseName=_inverseName;

- (_Bool)isDirty;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isWeak;

@property(readonly, nonatomic) EKObject *owner; // @synthesize owner=_owner;

- (void)refresh;

- (void)relatedObjectDidChange;

@property(readonly, nonatomic) NSString *relationName; // @synthesize relationName=_relationName;

- (void)reset;

- (void)rollback;

- (void)updatePersistentObject;

- (_Bool)validate:(id *)arg1;



@end



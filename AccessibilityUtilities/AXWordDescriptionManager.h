/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;



@interface AXWordDescriptionManager : NSObject

{

    NSManagedObjectContext *_managedObjectContext;

    NSPersistentStoreCoordinator *_persistentStoreCoordinator;

    NSManagedObjectModel *_managedObjectModel;

    NSString *languageDialectCode;

}



+ (id)sharedInstance;

- (void)dealloc;

- (id)descriptionForWord:(id)arg1;

- (id)languageCode;

@property(retain, nonatomic) NSString *languageDialectCode; // @synthesize languageDialectCode;

@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;

@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;

@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;



@end



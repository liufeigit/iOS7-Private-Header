/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PLManagedObjectContextPTPNotificationDelegate.h"



@class NSArray, NSFileManager, NSMutableArray, NSObject<PhotoLibraryPTPDelegate>, NSString, PLManagedObjectContext, PLPhotoLibrary;



@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate>

{

    NSObject<PhotoLibraryPTPDelegate> *_delegate;

    NSArray *_albumObjectIDs;

    NSString *_firstDCIMFolderServiced;

    NSMutableArray *_inflightAssets;

    PLPhotoLibrary *_photoLibrary;

    NSFileManager *fileManager;

}



- (id)_allAssetObjectIDs;

- (_Bool)_isPTPAlbum:(id)arg1;

- (void)_performBlockAndWait:(id)arg1;

- (void)_performTransactionAndWait:(id)arg1;

- (id)_ptpInformationForAllAssets;

- (id)albumHandles;

@property(readonly, nonatomic) NSArray *albumObjectIDs;

- (id)assetsInAssociation:(struct NSObject *)arg1;

- (id)associationsInAlbum:(struct NSObject *)arg1;

- (void)dealloc;

@property(nonatomic) NSObject<PhotoLibraryPTPDelegate> *delegate;

- (void)deleteAsset:(struct NSObject *)arg1;

@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager;

- (id)infoForAlbum:(struct NSObject *)arg1;

- (id)infoForAsset:(struct NSObject *)arg1;

- (id)init;

- (_Bool)libraryIsAvailable;

@property(readonly) PLManagedObjectContext *managedObjectContext;

- (void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssets:(id)arg2 deletedAssets:(id)arg3 changedAssets:(id)arg4;

@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;

- (void)photoLibraryAvailabilityChangedNotification;

- (_Bool)ptpCanDeleteFiles;

- (_Bool)ptpDeletePhotoWithKey:(struct NSObject *)arg1 andExtension:(id)arg2;

- (id)ptpInformationForFilesInDirectory:(id)arg1;

- (id)ptpInformationForPhotoWithObjectID:(id)arg1;

- (id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1;

- (id)ptpThumbnailForPhotoWithKey:(struct NSObject *)arg1;

- (void)setPtpDelegate:(id)arg1;



@end



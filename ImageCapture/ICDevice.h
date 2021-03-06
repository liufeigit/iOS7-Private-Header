/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class DeviceManager, NSString;



@interface ICDevice : NSObject

{

    void *_deviceProperties;

}



@property(copy) NSString *UUIDString;

@property _Bool autoOpenSession;

@property _Bool closeSessionPending;

- (void)dealloc;

@property id <ICDeviceDelegate> delegate;

- (id)description;

@property DeviceManager *deviceManager;

- (void)finalize;

- (void)handleCommandCompletionNotification:(id)arg1;

- (void)handleImageCaptureEventNotification:(id)arg1;

@property _Bool hasOpenSession;

@property(readonly) struct CGImage *icon;

- (id)init;

@property(copy) NSString *name;

@property _Bool openSessionPending;

@property(copy) NSString *productKind;

- (void)requestCloseSession;

- (void)requestOpenSession;

@property(copy) NSString *transportType;

@property int usbLocationID;

@property int usbProductID;

@property int usbVendorID;

- (id)valueForUndefinedKey:(id)arg1;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CLHeading, CLLocation, NSString;



__attribute__((visibility("hidden")))

@interface MKUserLocationInternal : NSObject

{

    CLLocation *location;

    CLLocation *fixedLocation;

    CLLocation *predictedLocation;

    CLHeading *heading;

    NSString *title;

    NSString *subtitle;

    id <MKUserLocationAnnotation> _annotation;

    int source;

    double timestamp;

    _Bool updating;

    double course;

    id <MKAnnotation> annotation;

}



@property(readonly, nonatomic) id <MKAnnotation> annotation; // @synthesize annotation;

@property(nonatomic) double course; // @synthesize course;

@property(retain, nonatomic) CLLocation *fixedLocation; // @synthesize fixedLocation;

@property(retain, nonatomic) CLHeading *heading; // @synthesize heading;

@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating;

@property(retain, nonatomic) CLLocation *location; // @synthesize location;

@property(retain, nonatomic) CLLocation *predictedLocation; // @synthesize predictedLocation;

@property(nonatomic) int source; // @synthesize source;

@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle;

@property(nonatomic) double timestamp; // @synthesize timestamp;

@property(retain, nonatomic) NSString *title; // @synthesize title;



@end



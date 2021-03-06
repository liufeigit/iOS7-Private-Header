/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SADomainObject.h"


@class NSArray, NSString, SAWeatherCurrentConditions, SAWeatherLocation, SAWeatherUnits;



@interface SAWeatherObject : SADomainObject

{

}



+ (id)object;

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

@property(retain, nonatomic) SAWeatherCurrentConditions *currentConditions;

@property(copy, nonatomic) NSArray *dailyForecasts;

- (id)encodedClassName;

@property(copy, nonatomic) NSString *extendedForecastUrl;

- (id)groupIdentifier;

@property(copy, nonatomic) NSArray *hourlyForecasts;

@property(retain, nonatomic) SAWeatherUnits *units;

@property(copy, nonatomic) NSString *view;

@property(retain, nonatomic) SAWeatherLocation *weatherLocation;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;



@end



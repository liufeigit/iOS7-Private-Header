/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface GEOTrafficIncident : PBCodable <NSCopying>

{

    double _endTime;

    double _lastUpdated;

    double _startTime;

    long long _uID;

    NSString *_info;

    NSString *_location;

    NSString *_title;

    int _type;

    int _vertexCount;

    int _vertexOffset;

    struct {

        unsigned int endTime:1;

        unsigned int lastUpdated:1;

        unsigned int startTime:1;

        unsigned int uID:1;

        unsigned int type:1;

        unsigned int vertexCount:1;

        unsigned int vertexOffset:1;

    } _has;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) double endTime; // @synthesize endTime=_endTime;

@property(nonatomic) _Bool hasEndTime;

@property(readonly, nonatomic) _Bool hasInfo;

@property(nonatomic) _Bool hasLastUpdated;

@property(readonly, nonatomic) _Bool hasLocation;

@property(nonatomic) _Bool hasStartTime;

@property(readonly, nonatomic) _Bool hasTitle;

@property(nonatomic) _Bool hasType;

@property(nonatomic) _Bool hasUID;

@property(nonatomic) _Bool hasVertexCount;

@property(nonatomic) _Bool hasVertexOffset;

- (unsigned long long)hash;

@property(retain, nonatomic) NSString *info; // @synthesize info=_info;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) double lastUpdated; // @synthesize lastUpdated=_lastUpdated;

@property(retain, nonatomic) NSString *location; // @synthesize location=_location;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@property(nonatomic) int type; // @synthesize type=_type;

@property(nonatomic) long long uID; // @synthesize uID=_uID;

@property(nonatomic) int vertexCount; // @synthesize vertexCount=_vertexCount;

@property(nonatomic) int vertexOffset; // @synthesize vertexOffset=_vertexOffset;

- (void)writeTo:(id)arg1;



@end


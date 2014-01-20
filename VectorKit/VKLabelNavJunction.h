/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "VKLabelNavFeature.h"



@class NSArray, NSMutableArray, NSString, VKLabelNavRoad, VKLabelNavRoadLabel, VKLabelTile;



__attribute__((visibility("hidden")))

@interface VKLabelNavJunction : NSObject <VKLabelNavFeature>

{

    VKLabelTile *_tile;

    Vec2Imp_1782d7e3 _tileCoordinate;

    CDStruct_dde70fb6 *_geoJunction;

    struct PolylineCoordinate _routeOffset;

    NSMutableArray *_roads;

    VKLabelNavRoad *_incomingRoad;

    VKLabelNavRoad *_outgoingRoad;

    float _distanceFromPreviousShieldLabel;

    int _preferredLabelPlacement;

    _Bool _isOnDualCarriageway;

    _Bool _hasSharedRouteDirection;

    Vec2Imp_1782d7e3 _sharedRouteDirection;

    _Bool _foundRoads;

    _Bool _isOverpass;

    _Bool _isRouteOverpass;

    int _largestRoadClass;

    struct {

        CDStruct_283a3ada _field1;

        Vec2Imp_1782d7e3 _field2;

        unsigned char _field3;

        char _field4;

        char _field5;

        CDStruct_183601bc *_field6;

    } *_labelFeature;

    NSString *_name;

    VKLabelNavRoadLabel *_junctionSign;

    _Bool _areLabelsDisabled;

    unsigned long long _depthFromRoute;

    double _worldUnitsPerMeter;

    VKLabelNavJunction *_overpassJunction;

    struct VKPoint _worldCoordinate;

    double _sortValue;

    _Bool _isRouteRefineJunction;

}



- (id).cxx_construct;

- (struct VKPoint)_anchorCoordinateForSignOrientation:(long long)arg1;

- (long long)_signOrientationWithDrivingSide:(_Bool)arg1;

- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge *)arg1 atA:(_Bool)arg2;

- (void)createLabelWithNavContext:(struct NavContext *)arg1 isDrivingSideRight:(_Bool)arg2;

- (void)dealloc;

@property(nonatomic) unsigned long long depthFromRoute; // @synthesize depthFromRoute=_depthFromRoute;

- (id)description;

@property(nonatomic) float distanceFromPreviousShieldLabel; // @synthesize distanceFromPreviousShieldLabel=_distanceFromPreviousShieldLabel;

- (void)evaluateCrossStreets;

- (void)evaluateCrossStreetsUsingRouteJunction:(id)arg1;

- (void)findRoads;

@property(readonly, nonatomic) const CDStruct_dde70fb6 *geoJunction; // @synthesize geoJunction=_geoJunction;

@property(readonly, nonatomic) _Bool hasSharedRouteDirection; // @synthesize hasSharedRouteDirection=_hasSharedRouteDirection;

@property(readonly, nonatomic) VKLabelNavRoad *incomingRoad; // @synthesize incomingRoad=_incomingRoad;

- (id)initWithGEOJunction:(CDStruct_dde70fb6 *)arg1 routeOffset:(struct PolylineCoordinate)arg2 tile:(id)arg3;

- (id)initWithRoadEdge:(const CDStruct_91f75a7f *)arg1 atA:(_Bool)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(id)arg4;

@property(readonly, nonatomic) long long intraRoadPriority;

@property(readonly, nonatomic) _Bool isAwayFromRoute;

@property(readonly, nonatomic) _Bool isGuidanceStepStart;

@property(readonly, nonatomic) _Bool isInGuidance;

@property(readonly, nonatomic) _Bool isIntersection;

@property(readonly, nonatomic) _Bool isIntraRamp;

@property(readonly, nonatomic) _Bool isMultiRoadIntersection;

@property(readonly, nonatomic) _Bool isOffRouteGraph;

@property(nonatomic) _Bool isOnDualCarriageway; // @synthesize isOnDualCarriageway=_isOnDualCarriageway;

@property(readonly, nonatomic) _Bool isOnRoute;

@property(readonly, nonatomic) _Bool isOverpass; // @synthesize isOverpass=_isOverpass;

@property(readonly, nonatomic) _Bool isRamp;

@property(readonly, nonatomic) _Bool isRoadTerminus;

@property(nonatomic) _Bool isRouteOverpass; // @synthesize isRouteOverpass=_isRouteOverpass;

@property(nonatomic) _Bool isRouteRefineJunction; // @synthesize isRouteRefineJunction=_isRouteRefineJunction;

@property(readonly, nonatomic) _Bool isStartOfRoadName;

@property(readonly, nonatomic) _Bool isTileEdgeJunction;

@property(readonly, nonatomic) VKLabelNavRoadLabel *junctionSign; // @synthesize junctionSign=_junctionSign;

@property(readonly, nonatomic) int largestRoadClass;

- (_Bool)matchesLocationForJunction:(id)arg1;

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;

@property(readonly, nonatomic) VKLabelNavRoad *outgoingRoad; // @synthesize outgoingRoad=_outgoingRoad;

@property(nonatomic) VKLabelNavJunction *overpassJunction; // @synthesize overpassJunction=_overpassJunction;

@property(nonatomic) int preferredLabelPlacement; // @synthesize preferredLabelPlacement=_preferredLabelPlacement;

@property(readonly, nonatomic) int requiredLabelPlacement;

@property(readonly, nonatomic) NSArray *roads; // @synthesize roads=_roads;

@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;

@property(nonatomic) Vec2Imp_1782d7e3 sharedRouteDirection; // @synthesize sharedRouteDirection=_sharedRouteDirection;

@property(readonly, nonatomic) NSString *shieldDisplayGroup;

@property(readonly, nonatomic) VKLabelTile *tile; // @synthesize tile=_tile;

@property(readonly, nonatomic) Vec2Imp_1782d7e3 tileCoordinate; // @synthesize tileCoordinate=_tileCoordinate;

@property(readonly, nonatomic) double worldUnitsPerMeter; // @synthesize worldUnitsPerMeter=_worldUnitsPerMeter;



@end


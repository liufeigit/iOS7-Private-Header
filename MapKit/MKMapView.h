/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "GEOResourceManifestTileGroupObserver.h"

#import "MKAnnotationContainerViewDelegate.h"

#import "MKAnnotationManagerDelegate.h"

#import "MKAnnotationMarkerContainer.h"

#import "MKMapGestureControllerDelegate.h"

#import "MKOverlayContainerViewDelegate.h"

#import "MKVariableDelayTapRecognizerDelegate.h"

#import "NSCoding.h"

#import "UIGestureRecognizerDelegate.h"

#import "VKMapViewDelegate.h"

#import "VKPuckAnimatorDelegate.h"



@class CLLocation, MKAnnotationContainerView, MKAnnotationView, MKAttributionLabel, MKBasicMapView, MKCompassView, MKMapAnnotationManager, MKMapCamera, MKMapGestureController, MKMapViewInternal, MKOverlayContainerView, MKScaleView, MKUserLocation, MKVariableDelayTapRecognizer, NSArray, NSTimer, UIGestureRecognizer, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, VKMapView, VKPuckAnimator;



@interface MKMapView : UIView <VKPuckAnimatorDelegate, MKOverlayContainerViewDelegate, UIGestureRecognizerDelegate, MKVariableDelayTapRecognizerDelegate, MKAnnotationContainerViewDelegate, VKMapViewDelegate, MKMapGestureControllerDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, GEOResourceManifestTileGroupObserver, NSCoding>

{

    MKMapViewInternal *_internal;

    UIView *_contentView;

    MKMapAnnotationManager *_annotationManager;

    MKAnnotationContainerView *_annotationContainer;

    MKAttributionLabel *_attributionLabel;

    id _annotationRectTest;

    id _annotationCoordinateTest;

    UIImageView *_attributionBadgeView;

    NSTimer *_startEffectsTimer;

    id <MKMapViewDelegate><MKMapViewDelegatePrivate> _delegate;

    int _animationType;

    unsigned long long _suspendedEffectsCount;

    unsigned long long _eventMode;

    unsigned long long _eventModeHistory;

    unsigned long long _mapType;

    NSTimer *_defaultLocationTimer;

    UILabel *_debugView;

    NSTimer *_debugTimer;

    double _heading;

    UILongPressGestureRecognizer *_longPressGestureRecognizer;

    UITapGestureRecognizer *_tapGestureRecognizer;

    UITapGestureRecognizer *_immediateTapGesture;

    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;

    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;

    UIGestureRecognizer *_locationConsoleGesture;

    MKMapGestureController *_gestureController;

    MKOverlayContainerView *_overlayContainer;

    int _rotationState;

    double _angularVelocity;

    long long _userTrackingMode;

    MKBasicMapView *_basicMapView;

    VKMapView *_mapView;

    MKScaleView *_scaleView;

    MKCompassView *_compassView;

    _Bool _scaleVisible;

    _Bool _compassVisible;

    _Bool _suppressCompassDisplay;

    _Bool _scaleEnabled;

    _Bool _compassEnabled;

    UIView *_scrollContainerView;

    id _regionSetterWhenSized;

    MKUserLocation *_userLocation;

    VKPuckAnimator *_userLocationAnimator;

    MKMapCamera *_camera;

    id _topLayoutGuide;

    id _bottomLayoutGuide;

    id _showCalloutAfterRegionChangeBlock;

    id _showCalloutAfterPanBlock;

    id _selectAnnotationViewAfterRedrawBlock;

    struct {

        unsigned int callsDelegateForAllRegionChanges:1;

        unsigned int changingRegion:1;

        unsigned int debugViewHeading:1;

        unsigned int didStartDragging:1;

        unsigned int draggingInterrupted:1;

        unsigned int didStartSmoothScrolling:1;

        unsigned int hasRenderedSomething:1;

        unsigned int ignoreHeadingUpdates:1;

        unsigned int ignoreLocationUpdates:1;

        unsigned int isSuspended:1;

        unsigned int liveTrackingAutoSelectZoomLevel:1;

        unsigned int longPressing:1;

        unsigned int persistFixedUserLocation:1;

        unsigned int regionChangeIsAnimated:1;

        unsigned int regionChangeIsUserInitiated:1;

        unsigned int rotationSupported:1;

        unsigned int scrollEnabled:1;

        unsigned int scrolling:1;

        unsigned int scrollIsAnimated:1;

        unsigned int shouldRotateForHeading:1;

        unsigned int showsUserLocation:1;

        unsigned int zoomEnabled:1;

        unsigned int zoomIsAnimated:1;

        unsigned int zooming:1;

        unsigned int wasZooming:1;

        unsigned int isChangingViewSize:1;

        unsigned int shouldSetRegionOnSizeChange:1;

        unsigned int showsAttribution:1;

        unsigned int showsAttributionBadge:1;

        unsigned int locationUpdatesPausedForRegionChange:1;

        unsigned int useOld2DAnnotationContainer:1;

        unsigned int rotating:1;

        unsigned int pitching:1;

        unsigned int rotateEnabled:1;

        unsigned int pitchEnabled:1;

        unsigned int hasPendingCameraChange:1;

        unsigned int backdropViewQualityChangingDisabled:1;

        unsigned int delegateShouldReceiveTouch:1;

        unsigned int delegateShouldDelayTapResponse:1;

        unsigned int delegateWillChangeRotation:1;

        unsigned int delegateDidUpdateUserLocation:1;

        unsigned int delegateDidFailToLocateUser:1;

        unsigned int delegateWillChangeRegion:1;

        unsigned int delegateDidChangeRegion:1;

        unsigned int delegateDidStartMapRendering:1;

        unsigned int delegateDidFinishMapRendering:1;

        unsigned int delegateDidChangeUserTrackingMode:1;

        unsigned int delegateDidChangeUserTrackingModeButton:1;

        unsigned int delegateDidChangeMapType:1;

    } _flags;

}



+ (CDStruct_90e2a262)_mapRectThatFitsViewBounds:(struct CGRect)arg1 mapRect:(CDStruct_90e2a262)arg2 viewInsets:(struct UIEdgeInsets)arg3 edgePadding:(struct UIEdgeInsets)arg4 minZoomLevel:(double)arg5 maxZoomLevel:(double)arg6;

+ (CDStruct_90e2a262)_regionThatFitsMapType:(unsigned long long)arg1 viewSize:(struct CGSize)arg2 edgeInsets:(struct UIEdgeInsets)arg3 region:(CDStruct_90e2a262)arg4 minZoomLevel:(double)arg5 maxZoomLevel:(double)arg6;

+ (unsigned long long)minZoomLevelForMapType:(unsigned long long)arg1 viewSize:(struct CGSize)arg2;

+ (CDStruct_90e2a262)regionThatFitsMapType:(unsigned long long)arg1 viewSize:(struct CGSize)arg2 edgeInsets:(struct UIEdgeInsets)arg3 region:(CDStruct_90e2a262)arg4;

+ (CDStruct_90e2a262)regionThatFitsMapType:(unsigned long long)arg1 viewSize:(struct CGSize)arg2 region:(CDStruct_90e2a262)arg3;

+ (void)setRendersInBackgroundByDefault:(_Bool)arg1;

- (void)_addAnnotation:(id)arg1 allowAnimation:(_Bool)arg2;

- (void)_addDebugGesture;

- (void)_addSetRegionBlockWhenSized:(id)arg1;

- (_Bool)_animationTypeIgnoresEvents:(int)arg1;

- (void)_annotationViewDragStateChanged:(id)arg1;

- (_Bool)_annotationViewsAreAddedImmediately;

- (double)_boundedZoomLevel:(double)arg1;

- (double)_boundedZoomLevel:(double)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;

- (Class)_calloutViewClass;

- (id)_camera;

- (void)_cancelAccessories;

- (void)_cancelAccessoriesAndDoubleTap;

- (void)_cancelDoubleTap;

- (CDStruct_c3b9c2ee)_centerMapPoint;

- (CDStruct_c3b9c2ee)_centerMapPointForMapRegion:(id)arg1;

- (struct CGPoint)_centerPoint;

- (struct CGPoint)_centerPointOffset;

- (void)_clearEventMode:(int)arg1;

- (void)_clearFixedUserLocation;

- (void)_clearGestureRecognizers;

- (void)_clearLayoutGuides;

- (id)_commonInitAndEnableLoading:(_Bool)arg1 fromIB:(_Bool)arg2;

- (void)_configureGestureRecognizers;

- (void)_considerMovingToThrottledHeading;

- (struct CGPoint)_convertCoordinate:(CDStruct_c3b9c2ee)arg1 toDoublePointToView:(id)arg2;

- (CDStruct_c3b9c2ee)_convertDoublePoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;

- (CDStruct_c3b9c2ee)_convertDoublePoint:(struct CGPoint)arg1 toMapPointFromView:(id)arg2;

- (CDStruct_90e2a262)_convertDoubleRect:(struct CGRect)arg1 toMapRectFromView:(id)arg2;

- (struct CGPoint)_convertMapPoint:(CDStruct_c3b9c2ee)arg1 toDoublePointToView:(id)arg2;

- (struct CGRect)_convertMapRect:(CDStruct_90e2a262)arg1 toDoubleRectToView:(id)arg2;

- (struct CGRect)_debugViewFrame;

- (id)_defaultLocationTimer;

- (_Bool)_deviceIsPluggedIn;

- (void)_didChangeRegionMidstream:(_Bool)arg1;

- (void)_didEndScroll;

- (void)_didEndUserInteraction;

- (void)_didEndZoom;

- (void)_displayWorld;

- (void)_dropDraggingAnnotationView:(_Bool)arg1;

- (void)_ensureLiveTrackingResourcesInitialized;

- (id)_findLayoutGuideVC;

- (void)_fixUserLocationFromPresentationValue;

- (double)_goToCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(double)arg2 animationType:(int)arg3;

- (double)_goToCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(double)arg2 animationType:(int)arg3 cancelDefaultLocationTimer:(_Bool)arg4;

- (void)_goToMapRegion:(id)arg1 duration:(double)arg2 animationType:(int)arg3 resetHeading:(_Bool)arg4;

- (void)_handleLongPressDidEnd;

- (_Bool)_haveNewPendingLocation;

- (_Bool)_iconsShouldAlignToPixels;

- (void)_insertSubview:(id)arg1;

- (long long)_interfaceOrientation;

- (_Bool)_isChangingRegionForGesture;

- (_Bool)_isHandlingUserEvent;

- (_Bool)_isScrollingAnimation;

- (_Bool)_isUserLocationInView:(_Bool)arg1;

- (_Bool)_isVisible;

- (void)_layoutAttribution;

- (CDStruct_90e2a262)_mapRectWithFraction:(double)arg1 ofVisible:(CDStruct_90e2a262)arg2;

- (id)_mapRegionWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomScale:(double)arg2;

- (double)_maxZoomLevelForCoordinate:(CDStruct_c3b9c2ee)arg1;

- (double)_panDurationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;

- (void)_pauseUserLocationUpdates;

- (void)_populateArchivedSubviews:(id)arg1;

- (void)_resumeUserLocationUpdates:(_Bool)arg1;

- (_Bool)_roomForCompass;

- (_Bool)_rotationPossible;

- (int)_rotationState;

- (long long)_roundedZoomLevel;

- (void)_selectUserLocationTypeWithDeltaZoomLevel:(double)arg1;

- (void)_setAnimationType:(int)arg1;

- (void)_setCalloutViewClass:(Class)arg1;

- (void)_setCamera:(id)arg1;

- (void)_setCamera:(id)arg1 animated:(_Bool)arg2;

- (void)_setCamera:(id)arg1 duration:(double)arg2 timing:(id)arg3;

- (void)_setCamera:(id)arg1 duration:(double)arg2 timingCurve:(long long)arg3;

- (void)_setCompassVisible:(_Bool)arg1 animated:(_Bool)arg2;

- (void)_setEventMode:(int)arg1;

- (void)_setMapType:(unsigned long long)arg1 onInit:(_Bool)arg2;

- (void)_setScaleVisible:(_Bool)arg1 animated:(_Bool)arg2;

- (void)_setScrolling:(_Bool)arg1;

- (void)_setScrolling:(_Bool)arg1 animated:(_Bool)arg2;

- (void)_setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2 fromTrackingButton:(_Bool)arg3;

- (void)_setZoomScale:(double)arg1 centerCoordinate:(CDStruct_c3b9c2ee)arg2 duration:(double)arg3 animationType:(int)arg4 resetHeading:(_Bool)arg5;

- (void)_setZoomScale:(double)arg1 centerMapPoint:(CDStruct_c3b9c2ee)arg2 duration:(double)arg3 animationType:(int)arg4 resetHeading:(_Bool)arg5;

- (_Bool)_shouldConservePowerAnimationType:(int)arg1;

- (void)_sizeDidChangeWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1;

- (void)_sizeWillChange;

- (id)_startEffectsTimer;

- (void)_startTrackingHeading;

- (void)_stopTrackingHeading;

- (id)_stringWithEventMode:(long long)arg1;

- (void)_updateAccessories;

- (void)_updateAttribution;

- (void)_updateCameraState;

- (void)_updateCenteredAttributesWithCoordinate:(CDStruct_c3b9c2ee)arg1;

- (void)_updateCompassPosition;

- (void)_updateCompassVisibility;

- (void)_updateContentBounds;

- (void)_updateDebugViewFrameWithEdgeInsets;

- (void)_updateEffects;

- (void)_updateFromCamera:(id)arg1;

- (void)_updateFromCamera:(id)arg1 duration:(double)arg2 timing:(id)arg3;

- (void)_updateHeading:(id)arg1 rotationType:(int)arg2 animated:(_Bool)arg3;

- (void)_updateHeadingOrientation;

- (void)_updateIconsShouldAlignToPixels;

- (void)_updateInsets;

- (void)_updateLocationConsole;

- (void)_updatePitchAllowed;

- (void)_updateRotationAttributes;

- (_Bool)_updateRotationSupported;

- (void)_updateScalePosition;

- (void)_updateScaleVisibility;

- (void)_updateScrollContainerView:(_Bool)arg1;

- (void)_updateScrollingAndGestures;

- (void)_updateShouldDisplayEffects;

- (void)_userScrollingEnded;

- (int)_viewIndexForSubview:(id)arg1;

- (CDStruct_90e2a262)_visibleUnderRotationMapRect;

- (_Bool)_wasScrolling;

- (void)_willChangeRegionAnimated:(_Bool)arg1 userInitiated:(_Bool)arg2;

- (void)_willChangeStatusBarFrame:(id)arg1;

- (void)_willStartScroll:(_Bool)arg1;

- (void)_willStartUserInteraction;

- (void)_willStartZoom:(_Bool)arg1;

- (CDStruct_c3b9c2ee)_zoomCenterPointWithAnchor:(int)arg1 point:(struct CGPoint)arg2 zoomScale:(double)arg3;

- (double)_zoomLevel;

- (double)_zoomLevelForMapRect:(CDStruct_90e2a262)arg1 includeAccessoryPadding:(_Bool)arg2;

- (double)_zoomLevelForRegion:(CDStruct_90e2a262)arg1 includeAccessoryPadding:(_Bool)arg2;

- (CDStruct_46f4fb6f)_zoomRegionForMapRect:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2 maxZoomLevel:(long long)arg3 minZoomLevel:(long long)arg4;

- (double)_zoomScale;

- (double)_zoomScaleForMapRegion:(id)arg1;

- (void)addAnnotation:(id)arg1;

- (void)addAnnotationRepresentation:(id)arg1 allowAnimation:(_Bool)arg2;

- (void)addAnnotations:(id)arg1;

- (void)addOverlay:(id)arg1;

- (void)addOverlay:(id)arg1 level:(long long)arg2;

- (void)addOverlays:(id)arg1;

- (void)addOverlays:(id)arg1 level:(long long)arg2;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (int)animationType;

- (id)annotationContainer;

- (void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;

- (double)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(CDStruct_c3b9c2ee)arg2 maxDistance:(double *)arg3 startPoint:(struct CGPoint *)arg4 shadowStartPoint:(struct CGPoint *)arg5;

- (void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint)arg2 annotationCoordinate:(CDStruct_c3b9c2ee)arg3 completionHandler:(id)arg4;

- (void)annotationContainerDidAnimateBubble:(id)arg1;

- (void)annotationContainerDidDropPins:(id)arg1;

- (void)annotationContainerDidHideUserLocationView;

- (void)annotationContainerDidShowUserLocationView;

- (_Bool)annotationContainerIsRotated:(id)arg1;

- (_Bool)annotationContainerShouldAlignToPixels:(id)arg1;

- (struct CGRect)annotationContainerVisibleRect:(id)arg1;

- (void)annotationContainerWillAnimateBubble:(id)arg1;

- (void)annotationContainerWillDropPins:(id)arg1;

- (id)annotationCoordinateTest;

- (void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;

- (void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;

- (void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;

- (id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;

- (id)annotationRectTest;

@property(readonly, nonatomic) struct CGRect annotationVisibleRect;

@property(readonly, nonatomic) NSArray *annotations;

- (id)annotationsInMapRect:(CDStruct_90e2a262)arg1;

- (void)applicationDidBecomeActive:(id)arg1;

- (void)applicationDidEnterBackground:(id)arg1;

- (void)applicationWillResignActive:(id)arg1;

- (void)applicationWillTerminate:(id)arg1;

- (struct CGRect)attributionFrame;

- (id)awakeAfterUsingCoder:(id)arg1;

- (_Bool)calloutViewContainsPoint:(struct CGPoint)arg1;

- (_Bool)calloutViewIsExpanded;

- (_Bool)callsDelegateForAllRegionChanges;

@property(copy, nonatomic) MKMapCamera *camera;

- (_Bool)canRotateForHeading;

@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate;

- (struct CGPoint)centerLongLat;

- (id)compassView;

- (id)compassVisibilityAnimation;

- (_Bool)compassVisible;

- (struct CGRect)contentBounds;

- (void)contentSizeCategoryDidChange:(id)arg1;

- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;

- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;

- (CDStruct_90e2a262)convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;

- (struct CGRect)convertRegion:(CDStruct_90e2a262)arg1 toRectToView:(id)arg2;

- (id)createDrawableForOverlay:(id)arg1;

- (void)dealloc;

- (id)debugView;

@property(nonatomic) id <MKMapViewDelegate> delegate;

- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;

- (id)descriptionForLocation:(id)arg1 compact:(_Bool)arg2;

- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;

- (void)deselectAnnotationRepresentation:(id)arg1 animated:(_Bool)arg2;

- (void)deviceOrientationDidChange:(id)arg1;

- (void)didMoveToSuperview;

- (void)didMoveToWindow;

- (void)disableHeadingTracking:(_Bool)arg1;

- (void)disableLiveTracking;

- (void)disableMapRotation:(_Bool)arg1;

- (void)drawRect:(struct CGRect)arg1 forViewPrintFormatter:(id)arg2;

- (struct UIEdgeInsets)edgeInsets;

- (_Bool)effectsEnabled;

- (void)enableMapRotationIfNeeded;

- (void)encodeWithCoder:(id)arg1;

- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;

- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;

- (void)geoDefaultsDidChange:(id)arg1;

- (void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(_Bool)arg2;

- (void)gestureControllerDidStopPanningDecelerating:(id)arg1;

- (void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(_Bool)arg2;

- (void)gestureControllerDidStopRotatingDecelerating:(id)arg1;

- (void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(_Bool)arg2;

- (void)gestureControllerDidStopTiltingDecelerating:(id)arg1;

- (void)gestureControllerDidStopTwoFingerLongPress:(id)arg1;

- (void)gestureControllerDidStopUserInteraction:(id)arg1;

- (void)gestureControllerDidStopZooming:(id)arg1 direction:(long long)arg2 willDecelerate:(_Bool)arg3;

- (void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(long long)arg2;

- (void)gestureControllerWillStartPanning:(id)arg1;

- (void)gestureControllerWillStartRotating:(id)arg1;

- (void)gestureControllerWillStartTilting:(id)arg1;

- (void)gestureControllerWillStartTwoFingerLongPress:(id)arg1;

- (void)gestureControllerWillStartUserInteraction:(id)arg1;

- (void)gestureControllerWillStartZooming:(id)arg1 animated:(_Bool)arg2;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

- (_Bool)goToCenterCoordinate:(CDStruct_c3b9c2ee)arg1 longLatSpan:(struct CGSize)arg2 animationType:(int)arg3;

- (_Bool)goToCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(double)arg2 animationType:(int)arg3;

- (void)goToDefaultLocation;

- (_Bool)goToRegion:(CDStruct_90e2a262)arg1 animationType:(int)arg2;

- (void)handleLongPress:(id)arg1;

- (void)handleTap:(id)arg1;

- (_Bool)hasRenderedSomething;

- (_Bool)hasUserLocation;

@property(nonatomic) _Bool ignoreLocationUpdates;

- (id)initFromIBWithFrame:(struct CGRect)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;

- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;

- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3;

- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;

- (_Bool)isCompassEnabled;

- (_Bool)isGoingToDefaultLocation;

- (_Bool)isHeadingTrackingEnabled;

- (_Bool)isLoadingEnabled;

- (_Bool)isLocationConsoleEnabled;

@property(nonatomic, getter=isPitchEnabled) _Bool pitchEnabled;

- (_Bool)isRegionChanging;

@property(nonatomic, getter=isRotateEnabled) _Bool rotateEnabled;

- (_Bool)isScaleEnabled;

@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;

- (_Bool)isScrolling;

- (_Bool)isShowingNoDataPlaceholders;

- (_Bool)isSuspended;

- (_Bool)isTrackingUserLocation;

- (_Bool)isUserLocationViewCentered;

@property(readonly, nonatomic, getter=isUserLocationVisible) _Bool userLocationVisible;

@property(nonatomic, getter=isZoomEnabled) _Bool zoomEnabled;

- (_Bool)isZooming;

- (void)layoutSubviews;

- (_Bool)liveTrackingAutoSelectZoomLevel;

- (void)locationManagerDidPauseLocationUpdates:(id)arg1;

- (void)locationManagerDidReset:(id)arg1;

- (void)locationManagerDidResumeLocationUpdates:(id)arg1;

- (void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2;

- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;

- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;

- (void)locationManagerUpdatedHeading:(id)arg1;

- (void)locationManagerUpdatedLocation:(id)arg1;

- (id)mapAttributionWithStringAttributes:(id)arg1;

- (CDStruct_90e2a262)mapRectThatFits:(CDStruct_90e2a262)arg1;

- (CDStruct_90e2a262)mapRectThatFits:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2;

- (id)mapRegion;

- (long long)mapRegionZoomLevel;

@property(nonatomic) unsigned long long mapType;

- (id)mapView:(id)arg1 presentationForAnnotation:(id)arg2;

- (void)mapViewDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(_Bool)arg2;

- (void)mapViewDidBecomePartiallyDrawn:(id)arg1;

- (void)mapViewDidChangeVisibleRegion:(id)arg1;

- (void)mapViewDidDraw:(id)arg1;

- (void)mapViewDidFailLoadingTiles:(id)arg1 withError:(id)arg2;

- (void)mapViewDidFinishLoadingTiles:(id)arg1;

- (void)mapViewDidStartLoadingTiles:(id)arg1;

- (void)mapViewDidStopRegionAnimation:(id)arg1 completed:(_Bool)arg2;

- (void)mapViewWillStartRegionAnimation:(id)arg1;

@property(readonly) double minZoomLevel;

- (void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(CDStruct_c3b9c2ee)arg2 animated:(_Bool)arg3 duration:(double)arg4;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

- (id)overlayContainer;

- (void)overlayContainerAddedDrawables:(id)arg1;

@property(readonly, nonatomic) NSArray *overlays;

- (id)overlaysInLevel:(long long)arg1;

- (void)pauseUserHeadingUpdates;

- (void)pauseUserLocationUpdates;

- (double)pointDistanceFromCoordinate:(CDStruct_c3b9c2ee)arg1 toCoordinate:(CDStruct_c3b9c2ee)arg2;

@property(retain, nonatomic) CLLocation *predictedUserLocation;

- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;

- (void)puckAnimator:(id)arg1 updatedPosition:(CDStruct_31142d93)arg2 course:(double)arg3;

- (void)puckAnimator:(id)arg1 updatedTargetPosition:(CDStruct_31142d93)arg2;

- (void)puckAnimatorDidStop:(id)arg1;

@property(nonatomic) CDStruct_90e2a262 region;

- (CDStruct_90e2a262)regionThatFits:(CDStruct_90e2a262)arg1;

- (void)removeAnnotation:(id)arg1;

- (void)removeAnnotationRepresentation:(id)arg1;

- (void)removeAnnotations:(id)arg1;

- (void)removeOverlay:(id)arg1;

- (void)removeOverlays:(id)arg1;

- (void)removeUserLocation;

- (id)rendererForOverlay:(id)arg1;

- (void)resetUserLocation;

- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;

- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

- (void)resumeUserHeadingUpdates;

- (void)resumeUserLocationUpdates;

- (id)scaleView;

- (id)scaleVisibilityAnimation;

- (id)scrollContainerView;

- (void)scrollWithOffset:(struct CGPoint)arg1 annotationCoordinate:(CDStruct_c3b9c2ee)arg2 andAnimationType:(int)arg3;

- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;

- (void)selectAnnotationRepresentation:(id)arg1 animated:(_Bool)arg2 avoid:(struct CGRect)arg3;

@property(copy, nonatomic) NSArray *selectedAnnotations;

- (void)setBackdropViewQualityChangingDisabled:(_Bool)arg1;

- (void)setBounds:(struct CGRect)arg1;

- (void)setCallsDelegateForAllRegionChanges:(_Bool)arg1;

- (void)setCamera:(id)arg1 animated:(_Bool)arg2;

- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 animated:(_Bool)arg2;

- (void)setCompassEnabled:(_Bool)arg1;

- (void)setEdgeInsets:(struct UIEdgeInsets)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setHeadingTrackingEnabled:(_Bool)arg1;

- (void)setHidden:(_Bool)arg1;

- (void)setLiveTrackingAutoSelectZoomLevel:(_Bool)arg1;

- (void)setLoadingEnabled:(_Bool)arg1;

- (void)setLocationConsoleEnabled:(_Bool)arg1;

- (void)setRegion:(CDStruct_90e2a262)arg1 animated:(_Bool)arg2;

- (void)setRendersInBackground:(_Bool)arg1;

- (void)setScaleEnabled:(_Bool)arg1;

- (void)setShouldReloadSynchronously:(_Bool)arg1;

- (void)setShouldRotateForHeading:(_Bool)arg1;

- (void)setShowsAttribution:(_Bool)arg1;

- (void)setShowsAttributionBadge:(_Bool)arg1;

@property(nonatomic) _Bool showsBuildings;

- (void)setShowsPOIIcons:(_Bool)arg1;

@property(nonatomic) _Bool showsPointsOfInterest;

@property(nonatomic) _Bool showsUserLocation;

- (void)setSuspended:(_Bool)arg1;

@property(nonatomic) int userLocationSource;

@property(nonatomic) long long userTrackingMode;

- (void)setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2;

@property(nonatomic) CDStruct_90e2a262 visibleMapRect;

- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1 animated:(_Bool)arg2;

- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;

- (void)set_annotationViewsAreAddedImmediately:(_Bool)arg1;

- (void)set_defaultLocationTimer:(id)arg1;

- (void)set_rotationState:(int)arg1;

- (void)set_startEffectsTimer:(id)arg1;

- (void)set_zoomScale:(double)arg1;

- (_Bool)shouldHideOffscreenSelectedAnnotation;

- (_Bool)shouldReloadSynchronously;

- (_Bool)shouldRotateForHeading;

- (void)showAnnotations:(id)arg1 animated:(_Bool)arg2;

- (void)showCalloutIfNecessaryForAnnotationRepresentation:(id)arg1 animated:(_Bool)arg2 avoid:(struct CGRect)arg3;

- (_Bool)showsAttribution;

- (_Bool)showsAttributionBadge;

- (_Bool)showsPOIIcons;

- (void)snapToNorth:(id)arg1;

- (void)startEffects;

- (void)startUpdatingUserLocation;

- (void)stopEffects;

- (void)stopUpdatingUserLocation;

- (void)toggleLocationConsole:(id)arg1;

- (void)updateLayoutGuides;

- (void)updateTiling;

@property(readonly, nonatomic) MKUserLocation *userLocation;

@property(readonly, nonatomic) MKAnnotationView *userLocationView;

- (struct CGPoint)userPosition;

- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;

- (id)viewForAnnotation:(id)arg1;

- (id)viewForOverlay:(id)arg1;

- (struct CGRect)visibleCenteringRectInView:(id)arg1;

- (struct CGRect)visibleRectInView:(id)arg1;

- (id)vk_mapLayer;

- (void)willMoveToWindow:(id)arg1;



@end



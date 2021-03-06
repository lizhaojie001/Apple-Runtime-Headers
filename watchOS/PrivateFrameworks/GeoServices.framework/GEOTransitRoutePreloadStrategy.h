//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEORoutePreloadStrategy-Protocol.h>

@class GEOComposedRoute, GEOMapServiceTraits, GEORoutePreloader, GEOTransitSuggestedRoute, NSMutableDictionary, NSString, NSTimer, _GEOTransitRoutePreloaderData;
@protocol OS_dispatch_queue;

@interface GEOTransitRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy>
{
    GEOTransitSuggestedRoute *_suggestedRoute;
    _GEOTransitRoutePreloaderData *_reserved;
    GEOMapServiceTraits *_traits;
    double _endRoutePosition;
    unsigned int _indexOfLastStepWithPreparedBatch;
    NSTimer *_geodCrashTimer;
    double _radialDistanceToImplicateTilesMeters;
    int _tilesRequested;
    _Bool _shouldPreloadEntireRoute;
    NSObject<OS_dispatch_queue> *_workQueue;
    GEORoutePreloader *_preloader;
    GEOComposedRoute *_route;
    double _currentRoutePosition;
    int _downloadState;
    double _stepSizeInMeters;
    _Bool _enabled;
    NSMutableDictionary *_tileSetStyles;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(nonatomic) __weak GEORoutePreloader *preloader; // @synthesize preloader=_preloader;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)_geodCrashed:(id)arg1;
- (void)_loadPlacecardsForBatch:(id)arg1;
- (void)_loadTilesForBatch:(id)arg1;
- (void)_processedFinishedBatch:(id)arg1 withPartialStatus:(unsigned int)arg2;
- (void)_processBatches;
- (void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg1 andPriority:(unsigned int)arg2;
- (void)_makePreloadBatchForPlaceDataOnSteps:(id)arg1;
- (void)_makePreloadBatchForSteps:(id)arg1;
- (void)_makeBatchForTilesAroundStationsForSteps:(id)arg1;
- (void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg1;
- (void)_makeBatchesForSteps:(id)arg1;
- (void)_performNextRequests;
- (struct PolylineCoordinate)_polylineCoordinateForDouble:(double)arg1;
- (void)_cancelAllBatches;
- (void)_stop;
- (void)stop;
- (void)_start;
- (void)start;
- (void)updateWithRouteMatch:(id)arg1;
- (void)updateWithRoute:(id)arg1 routeMatch:(id)arg2;
- (void)setShouldPreloadEntireRoute:(_Bool)arg1;
- (int)tilesRequested;
- (void)setTraits:(id)arg1;
- (void)performTearDown;
- (void)_resetErrorCounts;
- (void)_retryFailuresWithErrorsReset:(_Bool)arg1;
- (void)observedNetworkQualityDidChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


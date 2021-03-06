//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOETAUpdaterDelegate.h"
#import "GEOResourceManifestTileGroupObserver.h"

@class GEOETAUpdater, MNRouteSet, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface MNETAManager : NSObject <GEOResourceManifestTileGroupObserver, GEOETAUpdaterDelegate>
{
    GEOETAUpdater *_etaUpdater;
    NSMapTable *_routesStepsLookup;
    MNRouteSet *_currentRouteSet;
    NSMapTable *_etaRoutesTable;
    id <MNETAManagerDelegate> _delegate;
    long long _etaBehavior;
}

@property(nonatomic) long long etaBehavior; // @synthesize etaBehavior=_etaBehavior;
@property(nonatomic) __weak id <MNETAManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_updateRouteWithETATrafficUpdateResponse:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3;
- (void)_updateRequestInterval;
- (void)_updateRouteStepsLookupWithContingentRoutes;
- (void)_createCurrentRouteStepsLookup;
- (id)etaRouteForRoute:(id)arg1;
- (void)stopUpdateRequests;
- (void)startUpdateRequests;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (_Bool)etaUpdater:(id)arg1 updateRouteWithETATrafficUpdateResponse:(id)arg2 step:(id)arg3 percentOfCurrentStepRemaining:(double)arg4;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)reset;
- (void)updateCurrentRoute:(id)arg1;
- (void)useRouteSet:(id)arg1;
- (void)updateUserLocation:(id)arg1 routeMatch:(id)arg2;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTracePlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


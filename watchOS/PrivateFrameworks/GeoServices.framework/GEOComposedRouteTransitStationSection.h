//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedRouteSection.h>

#import <GeoServices/GEOComposedRouteTransitSection-Protocol.h>

@class NSString;

@interface GEOComposedRouteTransitStationSection : GEOComposedRouteSection <GEOComposedRouteTransitSection>
{
    CDStruct_2c43369c _fromNodeLocation;
    CDStruct_2c43369c _toNodeLocation;
    CDStruct_79c5c966 _fromNodeID;
    CDStruct_79c5c966 _toNodeID;
    int _toNodeSignificance;
    CDStruct_02837cd9 _originalBounds;
}

@property(readonly, nonatomic) int toNodeSignificance; // @synthesize toNodeSignificance=_toNodeSignificance;
@property(readonly, nonatomic) CDStruct_79c5c966 toNodeID; // @synthesize toNodeID=_toNodeID;
@property(readonly, nonatomic) CDStruct_79c5c966 fromNodeID; // @synthesize fromNodeID=_fromNodeID;
@property(readonly, copy) NSString *description;
- (_Bool)_MapsCarPlay_isEqual:(id)arg1;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 step:(id)arg4 toNodeSignificance:(int)arg5 startDistance:(double)arg6 lengthScaleFactor:(double)arg7;
@property(readonly, nonatomic) _Bool isTransfer;
@property(readonly, nonatomic) unsigned long long lineID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


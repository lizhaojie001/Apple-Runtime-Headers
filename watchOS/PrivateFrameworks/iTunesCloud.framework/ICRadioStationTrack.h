//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICStoreHLSAssetInfo, ICStorePlatformMetadata, NSArray, NSDate, NSDictionary;

@interface ICRadioStationTrack : NSObject
{
    NSDictionary *_responseDictionary;
    int _responseVersion;
    NSDate *_expirationDate;
    ICRadioStationTrack *_parentTrack;
}

+ (id)flattenedTracksWithTracks:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) ICRadioStationTrack *parentTrack; // @synthesize parentTrack=_parentTrack;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)_hlsAssetFromAssetDictionary:(id)arg1;
@property(readonly, nonatomic) int trackType;
@property(readonly, copy, nonatomic) ICStorePlatformMetadata *storePlatformMetadata;
@property(readonly, copy, nonatomic) NSDictionary *serverTrackInfo;
@property(readonly, nonatomic) long long storeAdamID;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) int likeState;
@property(readonly, nonatomic, getter=isSkippable) _Bool skippable;
@property(readonly, copy, nonatomic) NSArray *radioStreamAssets;
@property(readonly, copy, nonatomic) ICStoreHLSAssetInfo *hlsAsset;
@property(readonly, nonatomic) _Bool hasStartTime;
@property(readonly, copy, nonatomic) NSArray *fileAssets;
@property(readonly, nonatomic) ICRadioStationTrack *beforePromoContentTrack;
@property(readonly, nonatomic) ICRadioStationTrack *afterPromoContentTrack;
- (id)initWithResponseDictionary:(id)arg1 responseVersion:(int)arg2 expirationDate:(id)arg3;

@end


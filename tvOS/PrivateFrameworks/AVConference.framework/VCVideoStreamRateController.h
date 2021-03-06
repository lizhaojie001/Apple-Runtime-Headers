//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, VCVideoStreamRateControlProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoStreamRateController : NSObject
{
    int _algorithm;
    id <VCVideoStreamRateControlProtocol> _rateControl;
    unsigned int _minBitrate;
    unsigned int _maxBitrate;
    unsigned int _targetBitrate;
    unsigned short _operatingTierIndex;
    unsigned short _maxTierIndex;
    unsigned short _minTierIndex;
    double _rateControlTime;
    double _rateControlInterval;
    unsigned int _previousRTPTimestamp;
    unsigned int _averageTargetBitrate;
    unsigned long long _accumulatedTargetDataSize;
    double _totalTime;
    double _videoFrozenDuration;
    _Bool _didVideoStall;
    void *_logDump;
    NSObject<OS_dispatch_queue> *_videoStreamRateControllerQueue;
}

@property(readonly, nonatomic) unsigned int maxBitrate; // @synthesize maxBitrate=_maxBitrate;
@property(readonly, nonatomic) unsigned int minBitrate; // @synthesize minBitrate=_minBitrate;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
- (id)className;
- (void)releaseLogDumpFile;
- (void)createLogDumpFile:(unsigned int)arg1;
- (void)updateAverageTargetBitrate:(unsigned int)arg1 interval:(double)arg2;
- (void)setOperatingTierIndexWithBitrate:(unsigned int)arg1;
- (unsigned short)maxTierIndex:(unsigned int)arg1;
- (unsigned short)minTierIndex:(unsigned int)arg1;
@property(readonly, nonatomic) double nowrdAcc;
@property(readonly, nonatomic) double nowrdShort;
@property(readonly, nonatomic) double nowrd;
@property(readonly, nonatomic) double owrd;
- (void)updateVideoStall:(_Bool)arg1 withStallDuration:(unsigned int)arg2;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingBitrate:(unsigned int)arg4 averageReceivedBitrate:(unsigned int)arg5;
- (void)setRateControlInterval:(double)arg1;
- (void)setMaxTargetBitrate:(unsigned int)arg1 minTargetBitrate:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithDumpID:(unsigned int)arg1;

@end


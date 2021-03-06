//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLCommandQueueSPI-Protocol.h>

@class CaptureMTLDevice, NSMutableDictionary, NSString;
@protocol MTLCommandQueue, MTLCommandQueueSPI, MTLDevice, MTLSharedEvent;

@interface CaptureMTLCommandQueue : NSObject <MTLCommandQueueSPI, CaptureMTLObject>
{
    id <MTLCommandQueueSPI> _baseObject;
    CaptureMTLDevice *_captureDevice;
    struct GTTraceContext *_traceContext;
    unsigned long long _traceStream;
    BOOL _insertDebugBoundaryUsed;
    // Error parsing type: AQ, name: _downloadSignal
    id <MTLSharedEvent> _downloadEvent;
    id <MTLCommandQueue> _downloadQueue;
}

- (void).cxx_destruct;
- (id)subdivideCounterList:(id)arg1;
- (void)setSubmissionQueue:(struct dispatch_queue_s *)arg1;
- (BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (BOOL)setGPUPriority:(unsigned long long)arg1;
- (void)setCompletionQueue:(struct dispatch_queue_s *)arg1;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)arg1;
- (int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
- (int)requestCounters:(id)arg1;
- (id)getRequestedCounters;
- (unsigned long long)getGPUPriority;
- (unsigned long long)getBackgroundGPUPriority;
- (void)finish;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffer;
- (id)availableCountersAndDict;
- (id)availableCounters;
- (unsigned long long)StatOptions;
- (unsigned long long)StatLocations;
@property BOOL skipRender;
@property(readonly) unsigned long long qosLevel;
@property(getter=isProfilingEnabled) BOOL profilingEnabled;
@property(nonatomic, getter=numRequestedCounters) unsigned long long numRequestedCounters;
@property(nonatomic, getter=numInternalSampleCounters) unsigned long long numInternalSampleCounters;
@property(readonly) unsigned long long maxCommandBufferCount;
@property(copy) NSString *label;
@property BOOL isOpenGLQueue;
@property BOOL executionEnabled;
@property(readonly) id <MTLDevice> device;
@property(retain, getter=counterInfo) NSMutableDictionary *counterInfo;
@property(readonly) struct dispatch_queue_s *completionQueue;
@property(readonly) BOOL commitSynchronously;
@property(readonly) struct dispatch_queue_s *commitQueue;
@property int backgroundTrackingPID;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property(nonatomic, getter=isStatEnabled) BOOL StatEnabled;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;
- (id)newDownloadPoint;
- (void)dealloc;
- (void)insertDebugCaptureBoundary;
@property(readonly) BOOL insertDebugBoundaryUsed;
@property(readonly) id <MTLCommandQueue> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFSystemInfo;

@interface HMFLogEventReporter : NSObject
{
    HMFSystemInfo *_systemInfo;
}

+ (id)sharedReporter;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMFSystemInfo *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)submitSingleEventWithName:(id)arg1 payload:(id)arg2;
- (id)adoptVoucher:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(CDUnknownBlockType)arg3;
- (id)startSessionForServiceName:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(CDUnknownBlockType)arg3;
- (id)initWithSystemInfo:(id)arg1;

@end


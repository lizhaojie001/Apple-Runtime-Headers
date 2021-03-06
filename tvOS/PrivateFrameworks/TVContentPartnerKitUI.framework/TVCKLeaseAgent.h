//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSStateMachine.h>

@class NSNumber, NSString, NSTimer, TVCKDataItem;
@protocol TVCKLeaseAgentDelegate;

__attribute__((visibility("hidden")))
@interface TVCKLeaseAgent : TVSStateMachine
{
    unsigned int _FPMediaKind;
    unsigned long long _dsid;
    id <TVCKLeaseAgentDelegate> _delegate;
    NSString *_leaseID;
    NSTimer *_renewalTimer;
    TVCKDataItem *_item;
    NSString *_storeMediaKind;
    double _leaseDuration;
    double _numLeaseStartRetries;
    unsigned long long _numRenewalRetries;
    NSNumber *_sagaID;
}

+ (id)_documentForOperation:(id)arg1 mediaItem:(id)arg2 clientData:(id)arg3 leaseID:(id)arg4 storeMediaKind:(id)arg5;
+ (void)stopAllLeases;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *sagaID; // @synthesize sagaID=_sagaID;
@property(nonatomic) unsigned long long numRenewalRetries; // @synthesize numRenewalRetries=_numRenewalRetries;
@property(nonatomic) double numLeaseStartRetries; // @synthesize numLeaseStartRetries=_numLeaseStartRetries;
@property(nonatomic) double leaseDuration; // @synthesize leaseDuration=_leaseDuration;
@property(retain, nonatomic) NSString *storeMediaKind; // @synthesize storeMediaKind=_storeMediaKind;
@property(retain, nonatomic) TVCKDataItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSTimer *renewalTimer; // @synthesize renewalTimer=_renewalTimer;
@property(retain, nonatomic) NSString *leaseID; // @synthesize leaseID=_leaseID;
@property(nonatomic) __weak id <TVCKLeaseAgentDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_decodeResponseDictionary:(id)arg1;
- (id)_errorFromDictionary:(id)arg1;
- (void)_renewLease:(id)arg1;
- (void)_leaseRenewalLoaded:(id)arg1;
- (void)_leaseAcquisitionLoaded:(id)arg1 error:(id)arg2;
- (_Bool)_errorIsRecoverable:(int)arg1;
- (id)_initiateLease;
- (id)_invalidateAgentWithError:(id)arg1 wasCancelled:(_Bool)arg2;
- (id)_invalidateAgentWithError:(id)arg1;
- (void)_initializeStateMachine;
- (void)_stopLease;
- (void)stopLease;
- (void)startLease;
- (id)initWithMediaItem:(id)arg1 stateChangedHandler:(CDUnknownBlockType)arg2;

@end


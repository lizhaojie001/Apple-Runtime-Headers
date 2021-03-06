//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBRemoteTransientOverlayViewControllerDelegate-Protocol.h>

@class BSTransaction, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, SBRemoteTransientOverlayViewController, SBSRemoteAlertDefinition;
@protocol SBRemoteTransientOverlaySessionHostDelegate;

@interface SBRemoteTransientOverlaySession : NSObject <SBRemoteTransientOverlayViewControllerDelegate>
{
    BSTransaction *_activeTransaction;
    SBRemoteTransientOverlayViewController *_containerViewController;
    _Bool _hasInitiatedPresentation;
    _Bool _hasPresented;
    NSMutableDictionary *_identifierToHandlingButtonEvents;
    NSHashTable *_observers;
    NSMutableArray *_pendingTransactions;
    _Bool _activated;
    _Bool _prepared;
    _Bool _valid;
    _Bool _pendingInvalidation;
    SBSRemoteAlertDefinition *_definition;
    NSError *_error;
    NSString *_sessionID;
    id <SBRemoteTransientOverlaySessionHostDelegate> _hostDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBRemoteTransientOverlaySessionHostDelegate> hostDelegate; // @synthesize hostDelegate=_hostDelegate;
@property(readonly, nonatomic, getter=isPendingInvalidation) _Bool pendingInvalidation; // @synthesize pendingInvalidation=_pendingInvalidation;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic, getter=isPrepared) _Bool prepared; // @synthesize prepared=_prepared;
@property(readonly, nonatomic, getter=isActivated) _Bool activated; // @synthesize activated=_activated;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) SBSRemoteAlertDefinition *definition; // @synthesize definition=_definition;
- (void)_registerObserversForTransaction:(id)arg1;
- (void)_processPendingTransactions;
- (void)_requestInvalidationWithReason:(long long)arg1 error:(id)arg2;
- (void)_invalidateWithReason:(long long)arg1 error:(id)arg2;
- (id)_actionForHandlingButtonEvents:(unsigned long long)arg1;
- (void)_didDeactivate;
- (void)_didActivate;
- (void)_addTransaction:(id)arg1;
- (void)removeSessionObserver:(id)arg1;
- (void)prepareWithConfigurationContext:(id)arg1;
@property(readonly, nonatomic, getter=isSwitcherEligible) _Bool switcherEligible;
- (void)invalidate;
- (_Bool)hasServiceProcessIdentifier:(int)arg1;
- (_Bool)hasPendingButtonEvents:(unsigned long long)arg1;
- (void)getActionForHandlingButtonEvents:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deactivate;
- (void)addSessionObserver:(id)arg1;
- (void)activateWithContext:(id)arg1;
- (void)remoteTransientOverlayViewController:(id)arg1 didDisappearAnimated:(_Bool)arg2;
- (void)remoteTransientOverlayViewController:(id)arg1 didAppearAnimated:(_Bool)arg2;
- (void)remoteTransientOverlayViewController:(id)arg1 willAppearAnimated:(_Bool)arg2;
- (void)remoteTransientOverlayViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteTransientOverlayViewControllerRequestsInvalidation:(id)arg1;
- (void)remoteTransientOverlayViewControllerDidInvalidate:(id)arg1;
- (id)remoteTransientOverlayViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
- (_Bool)remoteTransientOverlayViewController:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2;
- (void)remoteTransientOverlayViewControllerRequestsDeactivation:(id)arg1;
- (void)dealloc;
- (id)_initWithSessionID:(id)arg1 definition:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


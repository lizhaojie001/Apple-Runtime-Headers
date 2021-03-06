//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebGeolocationProvider-Protocol.h>

@class NSString;

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider>
{
    struct RetainPtr<WebGeolocationCoreLocationProvider> _coreLocationProvider;
    struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> _coreLocationUpdateListenerProxy;
    _Bool _enableHighAccuracy;
    _Bool _isSuspended;
    _Bool _shouldResetOnResume;
    struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::PtrHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>> _webViewsWaitingForCoreLocationAuthorization;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>> _pendingInitialPositionWebView;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>> _registeredWebViews;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>> _trackedWebViews;
    struct RetainPtr<NSTimer> _sendLastPositionAsynchronouslyTimer;
    struct RetainPtr<WebGeolocationPosition> _lastPosition;
}

+ (id)sharedGeolocationProvider;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetGeolocation;
- (void)errorOccurred:(id)arg1;
- (void)positionChanged:(id)arg1;
- (void)stopTrackingWebView:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;
- (void)setEnableHighAccuracy:(_Bool)arg1;
- (id)lastPosition;
- (void)unregisterWebView:(id)arg1;
- (void)registerWebView:(id)arg1;
- (void)_handlePendingInitialPosition:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


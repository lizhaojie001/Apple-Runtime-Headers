//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface AFNowPlayingObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    long long _playbackState;
    NSHashTable *_listeners;
    _Bool _isObserving;
}

+ (id)defaultObserver;
- (void).cxx_destruct;
- (void)_fetchNowPlayingAppPlaybackState;
- (void)_handleNowPlayingApplicationPlaybackStateChange:(long long)arg1;
- (void)nowPlayingApplicationPlaybackStateChanged:(id)arg1;
- (void)_stopObservingNowPlayingAppPlaybackState;
- (void)_startObservingNowPlayingAppPlaybackState;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)getPlaybackStateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long playbackState;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end


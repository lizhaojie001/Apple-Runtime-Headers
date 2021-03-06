//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSSiteMetadataImageCacheDelegate-Protocol.h>
#import <SafariSharedUI/WBSSiteMetadataProvider-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, WBSSiteMetadataImageCache;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSLeadImageCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider>
{
    WBSSiteMetadataImageCache *_imageCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_urlStringToRequestSets;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)savePendingChangesBeforeTermination;
- (void)purgeUnneededCacheEntries;
- (void)emptyCaches;
- (void)_addRequest:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (BOOL)canHandleRequest:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(char *)arg2;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (void)saveImage:(id)arg1 forURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)imageForURL:(id)arg1;
@property(readonly, nonatomic) NSURL *imageDirectoryURL;
- (id)initWithImageDirectoryURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL providesFavicons;
@property(readonly) Class superclass;

@end


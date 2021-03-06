//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QLExtensionManagerCache;

@interface QLExtensionManager : NSObject
{
    QLExtensionManagerCache *_thumbnailExtensionCache;
    QLExtensionManagerCache *_previewExtensionCache;
    QLExtensionManagerCache *_previewHighMemoryExtensionCache;
    QLExtensionManagerCache *_thumbnailHighMemoryExtensionCache;
}

+ (_Bool)extension:(id)arg1 supportsExactType:(id)arg2;
+ (void)_resetSharedManager;
+ (void)_setSharedManager:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) QLExtensionManagerCache *thumbnailHighMemoryExtensionCache; // @synthesize thumbnailHighMemoryExtensionCache=_thumbnailHighMemoryExtensionCache;
@property(retain, nonatomic) QLExtensionManagerCache *previewHighMemoryExtensionCache; // @synthesize previewHighMemoryExtensionCache=_previewHighMemoryExtensionCache;
@property(retain, nonatomic) QLExtensionManagerCache *previewExtensionCache; // @synthesize previewExtensionCache=_previewExtensionCache;
@property(retain, nonatomic) QLExtensionManagerCache *thumbnailExtensionCache; // @synthesize thumbnailExtensionCache=_thumbnailExtensionCache;
- (id)_applicationPathForBundleId:(id)arg1;
- (void)_addQueryAttributesToExtensionQuery:(id)arg1 withContentType:(id)arg2 appBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (id)_extensionPointNameForExtensionType:(unsigned long long)arg1;
- (id)extensionForContentType:(id)arg1 allowExtensionsForParentTypes:(_Bool)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6;
- (id)qlExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(_Bool)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6;
- (void)extensionContextForContentType:(id)arg1 allowExtensionsForParentTypes:(_Bool)arg2 appBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (_Bool)existsExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(_Bool)arg2 applicationBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (_Bool)existsExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(_Bool)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6;
- (id)_cachesForExtensionType:(unsigned long long)arg1;
- (void)_setupCache;

@end


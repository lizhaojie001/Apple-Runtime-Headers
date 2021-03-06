//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, WFSettings;

@interface WFSettingsManager : NSObject
{
    _Bool _useFallback;
    id <WFSettings> _settings;
    NSObject<OS_dispatch_queue> *_requestSerialQueue;
    struct os_unfair_lock_s _useFallbackLock;
    struct os_unfair_lock_s _settingsLock;
}

+ (id)userId;
- (void).cxx_destruct;
@property(nonatomic) struct os_unfair_lock_s settingsLock; // @synthesize settingsLock=_settingsLock;
@property(nonatomic) struct os_unfair_lock_s useFallbackLock; // @synthesize useFallbackLock=_useFallbackLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestSerialQueue; // @synthesize requestSerialQueue=_requestSerialQueue;
- (id)_URLSafeBase64EncodedStringWithData:(id)arg1 options:(unsigned int)arg2;
- (id)containerIdentifier;
- (BOOL)_containerIDForContainerIdentifier:(id)arg1;
- (id)_permanentURLForRecordID:(id)arg1 containerIdentifier:(id)arg2;
- (void)completeOnQueue:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSString *APIVersion;
- (void)setSettings:(id)arg1;
@property(readonly, nonatomic) id <WFSettings> settings; // @synthesize settings=_settings;
- (void)setUseFallback:(_Bool)arg1;
@property(readonly, nonatomic) _Bool useFallback; // @synthesize useFallback=_useFallback;
- (id)init;

@end


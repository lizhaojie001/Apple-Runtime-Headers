//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSKeyedUnarchiverDelegate-Protocol.h>

@class NSDate, NSDictionary, NSString, SUDescriptor, SUDownload, SUInstallPolicy, SUManagedDeviceUpdateDelay, _SUAutoInstallOperationModel;

@interface SUState : NSObject <NSKeyedUnarchiverDelegate>
{
    SUDownload *_lastDownload;
    SUDescriptor *_lastScannedDescriptor;
    SUDescriptor *_currentDescriptor;
    SUDescriptor *_failedPatchDescriptor;
    NSDate *_lastScannedDescriptorTime;
    NSDate *_scheduledManualDownloadWifiPeriodEndTime;
    NSDate *_scheduledAutodownloadWifiPeriodEndTime;
    NSDate *_scheduledAutodownloadPolicyChangeTime;
    _Bool _autodownloadNeedsOneTimeRetry;
    _Bool _stashbagPersisted;
    NSString *_lastProductVersion;
    NSString *_lastProductBuild;
    NSString *_lastProductType;
    NSString *_lastReleaseType;
    NSDictionary *_unlockCallbacks;
    NSDictionary *_mandatoryUpdateDict;
    _SUAutoInstallOperationModel *_lastAutoInstallOperationModel;
    SUManagedDeviceUpdateDelay *_mdmDelay;
    SUInstallPolicy *_installPolicy;
    _Bool _manifestSubmitted;
    NSString *_sessionID;
    NSString *_lastDeletedSUAssetID;
    NSString *_lastAssetAudience;
}

+ (id)currentState;
+ (id)statePath;
@property(retain, nonatomic) NSString *lastAssetAudience; // @synthesize lastAssetAudience=_lastAssetAudience;
@property(retain, nonatomic) NSString *lastDeletedSUAssetID; // @synthesize lastDeletedSUAssetID=_lastDeletedSUAssetID;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSDictionary *mandatoryUpdateDict; // @synthesize mandatoryUpdateDict=_mandatoryUpdateDict;
@property(nonatomic) _Bool manifestSubmitted; // @synthesize manifestSubmitted=_manifestSubmitted;
@property(retain, nonatomic) SUInstallPolicy *installPolicy; // @synthesize installPolicy=_installPolicy;
@property(retain, nonatomic) SUManagedDeviceUpdateDelay *mdmDelay; // @synthesize mdmDelay=_mdmDelay;
@property(retain, nonatomic) _SUAutoInstallOperationModel *lastAutoInstallOperationModel; // @synthesize lastAutoInstallOperationModel=_lastAutoInstallOperationModel;
@property(retain, nonatomic) NSDictionary *unlockCallbacks; // @synthesize unlockCallbacks=_unlockCallbacks;
@property(retain, nonatomic) NSString *lastReleaseType; // @synthesize lastReleaseType=_lastReleaseType;
@property(retain, nonatomic) NSString *lastProductType; // @synthesize lastProductType=_lastProductType;
@property(retain, nonatomic) NSString *lastProductBuild; // @synthesize lastProductBuild=_lastProductBuild;
@property(retain, nonatomic) NSString *lastProductVersion; // @synthesize lastProductVersion=_lastProductVersion;
@property(nonatomic) _Bool stashbagPersisted; // @synthesize stashbagPersisted=_stashbagPersisted;
@property(nonatomic) _Bool autodownloadNeedsOneTimeRetry; // @synthesize autodownloadNeedsOneTimeRetry=_autodownloadNeedsOneTimeRetry;
@property(retain, nonatomic) NSDate *scheduledAutodownloadPolicyChangeTime; // @synthesize scheduledAutodownloadPolicyChangeTime=_scheduledAutodownloadPolicyChangeTime;
@property(retain, nonatomic) NSDate *scheduledAutodownloadWifiPeriodEndTime; // @synthesize scheduledAutodownloadWifiPeriodEndTime=_scheduledAutodownloadWifiPeriodEndTime;
@property(retain, nonatomic) NSDate *scheduledManualDownloadWifiPeriodEndTime; // @synthesize scheduledManualDownloadWifiPeriodEndTime=_scheduledManualDownloadWifiPeriodEndTime;
@property(copy, nonatomic) SUDescriptor *failedPatchDescriptor; // @synthesize failedPatchDescriptor=_failedPatchDescriptor;
@property(copy, nonatomic) SUDescriptor *currentDescriptor; // @synthesize currentDescriptor=_currentDescriptor;
@property(retain, nonatomic) NSDate *lastScannedDescriptorTime; // @synthesize lastScannedDescriptorTime=_lastScannedDescriptorTime;
@property(copy, nonatomic) SUDescriptor *lastScannedDescriptor; // @synthesize lastScannedDescriptor=_lastScannedDescriptor;
@property(copy, nonatomic) SUDownload *lastDownload; // @synthesize lastDownload=_lastDownload;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)save;
- (void)load;
- (id)_stateAsDictionary;
- (void)resetAllHistory;
- (void)resetDownloadAndScanHistory;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


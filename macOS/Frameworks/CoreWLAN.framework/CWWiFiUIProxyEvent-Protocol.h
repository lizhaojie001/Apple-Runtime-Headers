//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CWDisplayedScanResult, NSArray, NSError, NSSet, NSString, NSUUID;

@protocol CWWiFiUIProxyEvent
- (void)dismissUIWithUUID:(NSUUID *)arg1;
- (void)showErrorUIWithScanResult:(CWDisplayedScanResult *)arg1 uuid:(NSUUID *)arg2;
- (void)showInfoUIWithTitle:(NSString *)arg1 description:(NSString *)arg2 uuid:(NSUUID *)arg3;
- (void)showWPSUIWithScanResult:(CWDisplayedScanResult *)arg1 pin:(NSString *)arg2 uuid:(NSUUID *)arg3;
- (void)showSecurityMismatchUIWithScanResult:(CWDisplayedScanResult *)arg1 uuid:(NSUUID *)arg2;
- (void)didReceiveSharedPassword:(NSString *)arg1 uuid:(NSUUID *)arg2;
- (void)showJoinUIWithScanResult:(CWDisplayedScanResult *)arg1 previousError:(NSError *)arg2 previousPassword:(NSString *)arg3 supportsWiFiPasswordSharing:(BOOL)arg4 remember:(BOOL)arg5 uuid:(NSUUID *)arg6;
- (void)didUpdateUIState:(unsigned long long)arg1 previous:(unsigned long long)arg2;
- (void)didFindScanResults:(NSSet *)arg1;
- (void)didCompleteDiagnostics:(NSArray *)arg1;
@end


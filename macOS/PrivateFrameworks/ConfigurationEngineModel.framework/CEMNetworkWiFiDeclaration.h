//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMNetworkWiFiDeclaration_EAPClientConfiguration, CEMNetworkWiFiDeclaration_QoSMarkingPolicy, NSArray, NSNumber, NSString;

@interface CEMNetworkWiFiDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAutoJoin;
    NSString *_payloadSSIDSTR;
    NSNumber *_payloadHIDDENNETWORK;
    NSString *_payloadProxyType;
    NSString *_payloadEncryptionType;
    NSString *_payloadPassword;
    NSString *_payloadPayloadCertificateUUID;
    CEMNetworkWiFiDeclaration_EAPClientConfiguration *_payloadEAPClientConfiguration;
    NSString *_payloadDisplayedOperatorName;
    NSString *_payloadDomainName;
    NSArray *_payloadRoamingConsortiumOIs;
    NSNumber *_payloadServiceProviderRoamingEnabled;
    NSNumber *_payloadIsHotspot;
    NSString *_payloadHESSID;
    NSArray *_payloadNAIRealmNames;
    NSArray *_payloadMCCAndMNCs;
    NSNumber *_payloadCaptiveBypass;
    CEMNetworkWiFiDeclaration_QoSMarkingPolicy *_payloadQoSMarkingPolicy;
    NSString *_payloadInterface;
    NSArray *_payloadSetupModes;
    NSNumber *_payloadPriority;
    NSNumber *_payloadEnableIPv6;
    NSNumber *_payloadTLSCertificateRequired;
    NSString *_payloadProxyServer;
    NSNumber *_payloadProxyServerPort;
    NSString *_payloadProxyUsername;
    NSString *_payloadProxyPassword;
    NSString *_payloadProxyPACURL;
    NSNumber *_payloadProxyPACFallbackAllowed;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAutoJoin:(id)arg2 withSSIDSTR:(id)arg3 withHIDDENNETWORK:(id)arg4 withProxyType:(id)arg5 withEncryptionType:(id)arg6 withPassword:(id)arg7 withPayloadCertificateUUID:(id)arg8 withEAPClientConfiguration:(id)arg9 withDisplayedOperatorName:(id)arg10 withDomainName:(id)arg11 withRoamingConsortiumOIs:(id)arg12 withServiceProviderRoamingEnabled:(id)arg13 withIsHotspot:(id)arg14 withHESSID:(id)arg15 withNAIRealmNames:(id)arg16 withMCCAndMNCs:(id)arg17 withCaptiveBypass:(id)arg18 withQoSMarkingPolicy:(id)arg19 withInterface:(id)arg20 withSetupModes:(id)arg21 withPriority:(id)arg22 withEnableIPv6:(id)arg23 withTLSCertificateRequired:(id)arg24 withProxyServer:(id)arg25 withProxyServerPort:(id)arg26 withProxyUsername:(id)arg27 withProxyPassword:(id)arg28 withProxyPACURL:(id)arg29 withProxyPACFallbackAllowed:(id)arg30;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *payloadProxyPACFallbackAllowed; // @synthesize payloadProxyPACFallbackAllowed=_payloadProxyPACFallbackAllowed;
@property(copy, nonatomic) NSString *payloadProxyPACURL; // @synthesize payloadProxyPACURL=_payloadProxyPACURL;
@property(copy, nonatomic) NSString *payloadProxyPassword; // @synthesize payloadProxyPassword=_payloadProxyPassword;
@property(copy, nonatomic) NSString *payloadProxyUsername; // @synthesize payloadProxyUsername=_payloadProxyUsername;
@property(copy, nonatomic) NSNumber *payloadProxyServerPort; // @synthesize payloadProxyServerPort=_payloadProxyServerPort;
@property(copy, nonatomic) NSString *payloadProxyServer; // @synthesize payloadProxyServer=_payloadProxyServer;
@property(copy, nonatomic) NSNumber *payloadTLSCertificateRequired; // @synthesize payloadTLSCertificateRequired=_payloadTLSCertificateRequired;
@property(copy, nonatomic) NSNumber *payloadEnableIPv6; // @synthesize payloadEnableIPv6=_payloadEnableIPv6;
@property(copy, nonatomic) NSNumber *payloadPriority; // @synthesize payloadPriority=_payloadPriority;
@property(copy, nonatomic) NSArray *payloadSetupModes; // @synthesize payloadSetupModes=_payloadSetupModes;
@property(copy, nonatomic) NSString *payloadInterface; // @synthesize payloadInterface=_payloadInterface;
@property(copy, nonatomic) CEMNetworkWiFiDeclaration_QoSMarkingPolicy *payloadQoSMarkingPolicy; // @synthesize payloadQoSMarkingPolicy=_payloadQoSMarkingPolicy;
@property(copy, nonatomic) NSNumber *payloadCaptiveBypass; // @synthesize payloadCaptiveBypass=_payloadCaptiveBypass;
@property(copy, nonatomic) NSArray *payloadMCCAndMNCs; // @synthesize payloadMCCAndMNCs=_payloadMCCAndMNCs;
@property(copy, nonatomic) NSArray *payloadNAIRealmNames; // @synthesize payloadNAIRealmNames=_payloadNAIRealmNames;
@property(copy, nonatomic) NSString *payloadHESSID; // @synthesize payloadHESSID=_payloadHESSID;
@property(copy, nonatomic) NSNumber *payloadIsHotspot; // @synthesize payloadIsHotspot=_payloadIsHotspot;
@property(copy, nonatomic) NSNumber *payloadServiceProviderRoamingEnabled; // @synthesize payloadServiceProviderRoamingEnabled=_payloadServiceProviderRoamingEnabled;
@property(copy, nonatomic) NSArray *payloadRoamingConsortiumOIs; // @synthesize payloadRoamingConsortiumOIs=_payloadRoamingConsortiumOIs;
@property(copy, nonatomic) NSString *payloadDomainName; // @synthesize payloadDomainName=_payloadDomainName;
@property(copy, nonatomic) NSString *payloadDisplayedOperatorName; // @synthesize payloadDisplayedOperatorName=_payloadDisplayedOperatorName;
@property(copy, nonatomic) CEMNetworkWiFiDeclaration_EAPClientConfiguration *payloadEAPClientConfiguration; // @synthesize payloadEAPClientConfiguration=_payloadEAPClientConfiguration;
@property(copy, nonatomic) NSString *payloadPayloadCertificateUUID; // @synthesize payloadPayloadCertificateUUID=_payloadPayloadCertificateUUID;
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadEncryptionType; // @synthesize payloadEncryptionType=_payloadEncryptionType;
@property(copy, nonatomic) NSString *payloadProxyType; // @synthesize payloadProxyType=_payloadProxyType;
@property(copy, nonatomic) NSNumber *payloadHIDDENNETWORK; // @synthesize payloadHIDDENNETWORK=_payloadHIDDENNETWORK;
@property(copy, nonatomic) NSString *payloadSSIDSTR; // @synthesize payloadSSIDSTR=_payloadSSIDSTR;
@property(copy, nonatomic) NSNumber *payloadAutoJoin; // @synthesize payloadAutoJoin=_payloadAutoJoin;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


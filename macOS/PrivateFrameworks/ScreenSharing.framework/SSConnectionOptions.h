//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SSConnectionOptions : NSObject
{
    BOOL mShouldFallbackToObserve;
    BOOL shouldScaleScreen;
    BOOL shouldCurtainScreen;
    BOOL shouldSharePasteboard;
    BOOL mShouldGetUserInfo;
    BOOL openInFullScreen;
    BOOL showConnectionProgress;
    BOOL mSkipAddressPresentation;
    BOOL mShouldReturnToAddressBox;
    BOOL skipUserPassDialogIfPossible;
    BOOL noReconnect;
    BOOL _connectingToIOSdevice;
    long long mMinimumEncryptionLevel;
    long long sessionSelectionAction;
    long long panningMode;
    long long screenQualityMode;
    unsigned long long selectedScreen;
    NSDictionary *mHints;
    NSArray *mVideoEncodings;
    NSString *idsDestination;
    long long _controlType;
    long long _authMethod;
    NSString *_deviceID;
    NSString *_displayName;
    struct CGSize maxSize;
    struct CGRect restoreWindowFrame;
    struct CGRect restoreContentFrame;
}

+ (id)defaultOptions;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property BOOL connectingToIOSdevice; // @synthesize connectingToIOSdevice=_connectingToIOSdevice;
@property long long authMethod; // @synthesize authMethod=_authMethod;
@property long long controlType; // @synthesize controlType=_controlType;
@property(retain) NSString *idsDestination; // @synthesize idsDestination;
@property BOOL noReconnect; // @synthesize noReconnect;
@property BOOL skipUserPassDialogIfPossible; // @synthesize skipUserPassDialogIfPossible;
@property BOOL shouldReturnToAddressBox; // @synthesize shouldReturnToAddressBox=mShouldReturnToAddressBox;
@property BOOL skipAddressPresentation; // @synthesize skipAddressPresentation=mSkipAddressPresentation;
@property(copy) NSArray *videoEncodings; // @synthesize videoEncodings=mVideoEncodings;
@property(copy) NSDictionary *hints; // @synthesize hints=mHints;
@property BOOL showConnectionProgress; // @synthesize showConnectionProgress;
@property BOOL openInFullScreen; // @synthesize openInFullScreen;
@property unsigned long long selectedScreen; // @synthesize selectedScreen;
@property struct CGRect restoreContentFrame; // @synthesize restoreContentFrame;
@property struct CGRect restoreWindowFrame; // @synthesize restoreWindowFrame;
@property struct CGSize maxSize; // @synthesize maxSize;
@property long long screenQualityMode; // @synthesize screenQualityMode;
@property long long panningMode; // @synthesize panningMode;
@property long long sessionSelectionAction; // @synthesize sessionSelectionAction;
@property BOOL shouldGetUserInfo; // @synthesize shouldGetUserInfo=mShouldGetUserInfo;
@property BOOL shouldSharePasteboard; // @synthesize shouldSharePasteboard;
@property BOOL shouldCurtainScreen; // @synthesize shouldCurtainScreen;
@property BOOL shouldScaleScreen; // @synthesize shouldScaleScreen;
@property BOOL shouldFallbackToObserve; // @synthesize shouldFallbackToObserve=mShouldFallbackToObserve;
@property long long minimumEncryptionLevel; // @synthesize minimumEncryptionLevel=mMinimumEncryptionLevel;
- (id)description;
- (void)dealloc;
- (id)init;

@end


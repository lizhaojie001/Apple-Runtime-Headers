//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/ENDevicePublicKey-Protocol.h>

@class IDSMPPublicDeviceIdentity, IDSMPPublicLegacyIdentity, IDSPublicAccountIdentity, NSString;

@interface IDSPublicDeviceIdentity : NSObject <ENDevicePublicKey>
{
    IDSMPPublicLegacyIdentity *_legacyIdentity;
    IDSMPPublicDeviceIdentity *_modernIdentity;
    IDSPublicAccountIdentity *_accountIdentity;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) IDSPublicAccountIdentity *accountIdentity; // @synthesize accountIdentity=_accountIdentity;
@property(readonly, nonatomic) IDSMPPublicDeviceIdentity *modernIdentity; // @synthesize modernIdentity=_modernIdentity;
@property(readonly, nonatomic) IDSMPPublicLegacyIdentity *legacyIdentity; // @synthesize legacyIdentity=_legacyIdentity;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPublicLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


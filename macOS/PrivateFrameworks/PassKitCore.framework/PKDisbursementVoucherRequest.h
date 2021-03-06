//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKDisbursementVoucherRequest : PKPeerPaymentWebServiceRequest
{
    unsigned long long _disbursementSource;
    unsigned long long _disbursementTarget;
    NSString *_teamIdentifier;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(nonatomic) unsigned long long disbursementTarget; // @synthesize disbursementTarget=_disbursementTarget;
@property(nonatomic) unsigned long long disbursementSource; // @synthesize disbursementSource=_disbursementSource;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithDisbursementSource:(unsigned long long)arg1 disbursementTarget:(unsigned long long)arg2 teamIdentifier:(id)arg3 bundleIdentifier:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSObject, NSString, SSAuthenticationContext;
@protocol OS_xpc_object;

@interface SSVServerAuthenticateRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;
    NSObject<OS_xpc_object> *_dialog;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *encodedDialog; // @synthesize encodedDialog=_dialog;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithAuthenticateResponse:(CDUnknownBlockType)arg1;
- (id)initWithEncodedDialog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


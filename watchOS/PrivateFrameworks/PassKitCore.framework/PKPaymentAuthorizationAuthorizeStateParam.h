//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationAuthorizeStateParam : PKPaymentAuthorizationStateParam
{
    PKAuthenticatorEvaluationResponse *_evaluationResponse;
    NSData *_nonceData;
    NSData *_credential;
}

+ (id)paramWithNonceParam:(id)arg1 nonce:(id)arg2;
+ (id)paramWithAuthenticatorEvaluationResponse:(id)arg1;
+ (id)paramWithCredential:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) NSData *nonceData; // @synthesize nonceData=_nonceData;
@property(retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse; // @synthesize evaluationResponse=_evaluationResponse;
- (id)description;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>

#import <HealthKit/HKFeatureAvailabilityRule-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityAtrialFibrillationOnboardingCountryCodeRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule>
{
    NSString *_onboardingCountryCode;
}

+ (id)ruleIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *onboardingCountryCode; // @synthesize onboardingCountryCode=_onboardingCountryCode;
- (_Bool)evaluate;
- (void)processUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


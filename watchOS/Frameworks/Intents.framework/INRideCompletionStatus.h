//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INRideCompletionStatusExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCurrencyAmount, NSSet, NSString, NSUserActivity;

@interface INRideCompletionStatus : NSObject <INCacheableContainer, INRideCompletionStatusExport, NSCopying, NSSecureCoding>
{
    _Bool _completed;
    _Bool _missedPickup;
    _Bool _outstanding;
    _Bool _canceledByService;
    NSUserActivity *_completionUserActivity;
    INCurrencyAmount *_paymentAmount;
    unsigned int _feedbackType;
    NSSet *_defaultTippingOptions;
}

+ (_Bool)supportsSecureCoding;
+ (id)canceledMissedPickup;
+ (id)canceledByService;
+ (id)canceledByUser;
+ (id)completedWithOutstandingFeedbackType:(unsigned int)arg1;
+ (id)completedWithOutstandingPaymentAmount:(id)arg1;
+ (id)completedWithSettledPaymentAmount:(id)arg1;
+ (id)completed;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCanceledByService) _Bool canceledByService; // @synthesize canceledByService=_canceledByService;
@property(retain, nonatomic) NSSet *defaultTippingOptions; // @synthesize defaultTippingOptions=_defaultTippingOptions;
@property(readonly, nonatomic, getter=isOutstanding) _Bool outstanding; // @synthesize outstanding=_outstanding;
@property(readonly, nonatomic) unsigned int feedbackType; // @synthesize feedbackType=_feedbackType;
@property(readonly, nonatomic) INCurrencyAmount *paymentAmount; // @synthesize paymentAmount=_paymentAmount;
@property(readonly, nonatomic, getter=isMissedPickup) _Bool missedPickup; // @synthesize missedPickup=_missedPickup;
@property(readonly, nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSUserActivity *completionUserActivity; // @synthesize completionUserActivity=_completionUserActivity;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (id)_newValue;
- (id)_initWithValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initCompleted:(_Bool)arg1 canceledByService:(_Bool)arg2 missedPickup:(_Bool)arg3 amount:(id)arg4 feedbackType:(unsigned int)arg5 outstanding:(_Bool)arg6;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


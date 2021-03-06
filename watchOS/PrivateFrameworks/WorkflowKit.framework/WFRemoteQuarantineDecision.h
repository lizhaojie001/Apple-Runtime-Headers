//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>

@class NSDictionary, NSString;

@interface WFRemoteQuarantineDecision : MTLModel <MTLJSONSerializing>
{
    unsigned int _policy;
    NSString *_errorTitle;
    NSString *_errorMessage;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(readonly, nonatomic) unsigned int policy; // @synthesize policy=_policy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSMetricsEvent, NSMutableDictionary, NSString, NSURL, NSURLRequest;
@protocol OS_dispatch_queue;

@interface AMSFollowUpAction : NSObject
{
    NSMutableDictionary *_userInfo;
    NSString *_identifier;
    NSString *_label;
    AMSMetricsEvent *_metricsEvent;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_actionQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue; // @synthesize actionQueue=_actionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) AMSMetricsEvent *metricsEvent; // @synthesize metricsEvent=_metricsEvent;
@property(retain) NSString *label; // @synthesize label=_label;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)postMetricsWithBagContract:(id)arg1;
- (id)performActionsWithContract:(id)arg1 account:(id)arg2;
- (id)initWithAction:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (void)_setUserInfoProperty:(id)arg1 forKey:(id)arg2;
- (id)postMetricsWithBag:(id)arg1;
- (id)performActionsWithBag:(id)arg1 account:(id)arg2;
- (id)generateAction;
@property(retain) NSMutableDictionary *userInfo;
@property BOOL shouldClear;
@property BOOL requiresFollowUpUI;
@property(retain) NSURLRequest *request;
@property(retain) NSString *preferredClient;
@property(retain) NSString *parentIdentifier;
@property(retain) NSString *logKey;
- (id)initWithAction:(id)arg1 parentIdentifier:(id)arg2;
- (id)initWithLabel:(id)arg1 parentIdentifier:(id)arg2;

@end


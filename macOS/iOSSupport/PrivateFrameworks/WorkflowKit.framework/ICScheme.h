//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICApp, NSArray, NSDictionary, NSString, NSURL;

@interface ICScheme : NSObject
{
    ICApp *_app;
    NSString *_scheme;
    NSArray *_actions;
    NSArray *_capabilities;
    NSDictionary *_definition;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property(readonly, nonatomic) NSArray *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(readonly, nonatomic) __weak ICApp *app; // @synthesize app=_app;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *callbackErrorURLKey;
@property(readonly, nonatomic) NSString *callbackCancelURLKey;
@property(readonly, nonatomic) NSString *callbackSuccessURLKey;
@property(readonly, nonatomic) NSString *callbackSourceNameKey;
@property(readonly, nonatomic, getter=isCallbackScheme) BOOL callbackScheme;
- (BOOL)matchesURL:(id)arg1;
@property(readonly, nonatomic) NSURL *universalLinkBaseURL;
@property(readonly, nonatomic) BOOL canLaunchApp;
@property(readonly, nonatomic, getter=isAvailable) BOOL available;
- (id)initWithDefinition:(id)arg1 app:(id)arg2;

@end


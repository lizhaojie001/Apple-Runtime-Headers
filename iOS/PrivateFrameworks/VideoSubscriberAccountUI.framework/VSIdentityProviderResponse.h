//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VSAccount, VSAccountMetadata, VSOptional;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderResponse : NSObject
{
    _Bool _didCreateAccount;
    VSAccountMetadata *_accountMetadata;
    VSAccount *_account;
    VSOptional *_logoLoadOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSOptional *logoLoadOperation; // @synthesize logoLoadOperation=_logoLoadOperation;
@property(nonatomic) _Bool didCreateAccount; // @synthesize didCreateAccount=_didCreateAccount;
@property(retain, nonatomic) VSAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) VSAccountMetadata *accountMetadata; // @synthesize accountMetadata=_accountMetadata;
- (id)description;
- (id)init;

@end


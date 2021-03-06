//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageProtection/SignatureFormatter-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NGMMessageSignatureFormatter : NSObject <SignatureFormatter>
{
    NSData *_formattedSignedData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *formattedSignedData; // @synthesize formattedSignedData=_formattedSignedData;
- (id)signedData;
- (id)initWithDHOutput:(id)arg1 prekeyPub:(id)arg2 ephemeralPub:(id)arg3 recipientPub:(id)arg4 ciphertext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


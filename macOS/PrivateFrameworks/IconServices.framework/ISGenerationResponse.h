//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface ISGenerationResponse : NSObject <NSSecureCoding>
{
    NSData *_data;
    NSUUID *_uuid;
    NSData *_validationToken;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSData *validationToken; // @synthesize validationToken=_validationToken;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) NSData *data; // @synthesize data=_data;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 uuid:(id)arg2 validationToken:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallHistory/NSCopying-Protocol.h>
#import <CallHistory/NSSecureCoding-Protocol.h>

@class NSString;

@interface CHHandle : NSObject <NSSecureCoding, NSCopying>
{
    int _type;
    NSString *_value;
    NSString *_normalizedValue;
}

+ (int)handleTypeForValue:(id)arg1;
+ (id)normalizedPhoneNumberHandleForValue:(id)arg1 isoCountryCode:(id)arg2;
+ (id)normalizedGenericHandleForValue:(id)arg1;
+ (id)normalizedEmailAddressHandleForValue:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *normalizedValue; // @synthesize normalizedValue=_normalizedValue;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (_Bool)isEqualToHandle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 value:(id)arg2 normalizedValue:(id)arg3;
- (id)initWithType:(int)arg1 value:(id)arg2;
- (id)initWithHandle:(id)arg1;
- (id)init;

@end


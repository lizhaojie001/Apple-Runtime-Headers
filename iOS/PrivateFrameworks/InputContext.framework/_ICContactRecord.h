//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _ICContact;

@interface _ICContactRecord : NSObject
{
    unsigned char _changeType;
    NSString *_identifier;
    _ICContact *_contact;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) _ICContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToContactRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1 contact:(id)arg2 changeType:(unsigned char)arg3;

@end


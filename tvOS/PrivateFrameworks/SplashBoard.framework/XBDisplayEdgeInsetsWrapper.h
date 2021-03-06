//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSXPCCoding-Protocol.h>
#import <SplashBoard/NSCopying-Protocol.h>
#import <SplashBoard/NSSecureCoding-Protocol.h>

@class NSString;

@interface XBDisplayEdgeInsetsWrapper : NSObject <NSCopying, BSXPCCoding, NSSecureCoding>
{
    double _topInset;
    double _leftInset;
    double _bottomInset;
    double _rightInset;
}

+ (_Bool)supportsSecureCoding;
+ (id)makeWithEdgeInsets:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) double rightInset; // @synthesize rightInset=_rightInset;
@property(readonly, nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(readonly, nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
@property(readonly, nonatomic) double topInset; // @synthesize topInset=_topInset;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct UIEdgeInsets)edgeInsets;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasZeroInsets;
- (id)initWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


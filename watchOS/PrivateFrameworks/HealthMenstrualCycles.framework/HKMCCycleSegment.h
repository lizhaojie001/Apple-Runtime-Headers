//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCycles/NSSecureCoding-Protocol.h>

@interface HKMCCycleSegment : NSObject <NSSecureCoding>
{
    CDStruct_800a618e _days;
    int _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)_fertileWindowSegmentWithDays:(CDStruct_800a618e)arg1;
+ (id)_menstruationSegmentWithDays:(CDStruct_800a618e)arg1;
@property(readonly, nonatomic) CDStruct_800a618e days; // @synthesize days=_days;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithType:(int)arg1 days:(CDStruct_800a618e)arg2;

@end


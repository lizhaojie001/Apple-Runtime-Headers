//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FIUIChartDateAnchorRule : NSObject
{
    unsigned int _calendarUnit;
    int _roundingValue;
}

@property(nonatomic) int roundingValue; // @synthesize roundingValue=_roundingValue;
@property(nonatomic) unsigned int calendarUnit; // @synthesize calendarUnit=_calendarUnit;
- (_Bool)_componentsSuccessful:(id)arg1;
- (id)_anchorDiffComponents;
- (id)_floorDate:(id)arg1;
- (id)generateAnchorFromDate:(id)arg1;

@end


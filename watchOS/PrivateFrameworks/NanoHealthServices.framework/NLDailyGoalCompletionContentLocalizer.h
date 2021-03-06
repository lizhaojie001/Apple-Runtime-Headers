//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NLDailyGoalCompletionContentLocalizer : NSObject
{
}

+ (id)_localizeCount:(double)arg1 forKey:(id)arg2;
+ (id)_keyForTimeOfDayAtDate:(id)arg1;
+ (id)_keyForGoalTypes:(id)arg1;
+ (id)_keyForEventType:(id)arg1 aboveAverage:(_Bool)arg2;
+ (id)_keyForGoalType:(int)arg1;
+ (id)localizedDescriptionForGoalsCompleted:(id)arg1 singleGoalExceeded:(_Bool)arg2 date:(id)arg3 firstName:(id)arg4 isWheelchairUser:(_Bool)arg5;
+ (id)localizedDescriptionForIncompleteGoalTypes:(id)arg1 percentComplete:(double)arg2 value:(double)arg3 valueRemaining:(double)arg4 date:(id)arg5 firstName:(id)arg6 moveUnit:(id)arg7 isWheelchairUser:(_Bool)arg8 progressEventIdentifier:(id)arg9 minutesToWalkToCompleteRing:(int)arg10 hasCurrentMoveStreak:(_Bool)arg11;
+ (id)localizedTitleForGoalsCompleted:(id)arg1 isWheelchairUser:(_Bool)arg2;
+ (id)localizedTitleForIncompleteGoalTypes:(id)arg1 percentComplete:(double)arg2 valueRemaining:(double)arg3 progressEventIdentifier:(id)arg4;

@end


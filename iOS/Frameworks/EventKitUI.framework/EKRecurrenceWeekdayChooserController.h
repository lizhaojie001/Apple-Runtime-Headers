//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKRecurrenceChooserController.h>

@class NSArray, NSMutableArray;

@interface EKRecurrenceWeekdayChooserController : EKRecurrenceChooserController
{
    NSMutableArray *_selectedRows;
    NSMutableArray *_cells;
    NSArray *_daysOfTheWeek;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *daysOfTheWeek; // @synthesize daysOfTheWeek=_daysOfTheWeek;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
- (int)_dayMask;
- (void)_setCell:(id)arg1 selected:(_Bool)arg2;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)rowTapped:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (long long)numberOfRows;
- (long long)frequency;
- (id)initWithDate:(id)arg1;

@end


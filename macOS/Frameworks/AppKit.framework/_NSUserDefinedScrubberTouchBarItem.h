//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTouchBarItem.h>

#import <AppKit/NSScrubberDataSource-Protocol.h>
#import <AppKit/NSScrubberDelegate-Protocol.h>

@class NSArray, NSScrubber, NSString;

__attribute__((visibility("hidden")))
@interface _NSUserDefinedScrubberTouchBarItem : NSTouchBarItem <NSScrubberDataSource, NSScrubberDelegate>
{
    NSScrubber *_scrubber;
    NSArray *_keyChars;
    NSArray *_labels;
    NSString *_label;
}

- (void)_validateUserDefinedTouchBarItem;
- (void)scrubber:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (id)customizationLabel;
- (id)view;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


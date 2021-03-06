//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class NSArray, NSUUID;

@interface SBTetheredInsertionSwitcherModifier : SBSwitcherModifier
{
    NSUUID *_tetheredInsertionID;
    _Bool _isFloating;
    unsigned long long _phase;
    NSArray *_appLayoutsVisibleBeforeInsertion;
    unsigned long long _indexToScrollAfterInsertion;
}

- (void).cxx_destruct;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)initWithTetheredInsertionID:(id)arg1 floating:(_Bool)arg2;

@end


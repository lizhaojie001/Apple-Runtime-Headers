//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/TTMergeableStringIDTracker-Protocol.h>

@class NSString;

@interface TTMergeableStringSelection : NSObject <TTMergeableStringIDTracker>
{
    vector_0ee2fe7a _selectionRanges;
    unsigned int _selectionAffinity;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned int selectionAffinity; // @synthesize selectionAffinity=_selectionAffinity;
@property(readonly, copy) NSString *description;
- (id)serialize;
- (void)saveToArchive:(struct Selection *)arg1;
- (id)initWithArchive:(const struct Selection *)arg1;
- (id)initWithData:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasTopoIDsThatCanChange;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (vector_0ee2fe7a *)selectionRanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


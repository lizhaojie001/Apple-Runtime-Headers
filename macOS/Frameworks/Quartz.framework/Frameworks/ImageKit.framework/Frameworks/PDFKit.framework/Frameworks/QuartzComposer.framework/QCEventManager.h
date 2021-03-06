//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QCEventManager : NSObject
{
    struct __CFArray *_selectedPatches;
    struct __CFArray *_selectedCount;
    BOOL _interactive;
}

@property BOOL interactive; // @synthesize interactive=_interactive;
- (id)selectedPatchForIndex:(unsigned long long)arg1;
- (void)removeSelectionForIndex:(unsigned long long)arg1;
- (void)removePatch:(id)arg1;
- (void)addPatch:(id)arg1 atDepth:(double)arg2 forIteration:(unsigned long long)arg3 index:(unsigned long long)arg4;
- (id)description;
- (void)dealloc;
- (id)init;

@end


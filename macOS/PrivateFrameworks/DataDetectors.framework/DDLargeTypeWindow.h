//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

#import <DataDetectors/NSWindowDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDLargeTypeWindow : NSWindow <NSWindowDelegate>
{
}

+ (void)showWithString:(id)arg1 onScreen:(id)arg2;
+ (id)forceLTRString:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)sendEvent:(id)arg1;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


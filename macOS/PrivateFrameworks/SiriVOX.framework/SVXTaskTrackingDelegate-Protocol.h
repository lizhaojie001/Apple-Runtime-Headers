//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@protocol SVXTaskTracking;

@protocol SVXTaskTrackingDelegate <NSObject>
- (void)taskTrackerDidEnd:(id <SVXTaskTracking>)arg1;
- (void)taskTracker:(id <SVXTaskTracking>)arg1 childWillBegin:(id <SVXTaskTracking>)arg2;
@end


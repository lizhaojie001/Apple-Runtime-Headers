//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VSErrorRecoveryOption : NSObject
{
    _Bool _destructive;
    NSString *_localizedAlertButtonTitle;
    CDUnknownBlockType _attemptHandler;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(copy, nonatomic) CDUnknownBlockType attemptHandler; // @synthesize attemptHandler=_attemptHandler;
@property(copy, nonatomic) NSString *localizedAlertButtonTitle; // @synthesize localizedAlertButtonTitle=_localizedAlertButtonTitle;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/BSTransactionObserver-Protocol.h>

@class SBUIAnimationController;

@protocol SBUIAnimationControllerObserver <BSTransactionObserver>

@optional
- (void)animationControllerDidRevealApplication:(SBUIAnimationController *)arg1;
- (void)animationControllerDidFinishAnimation:(SBUIAnimationController *)arg1;
- (void)animationController:(SBUIAnimationController *)arg1 willBeginAnimation:(_Bool)arg2;
@end


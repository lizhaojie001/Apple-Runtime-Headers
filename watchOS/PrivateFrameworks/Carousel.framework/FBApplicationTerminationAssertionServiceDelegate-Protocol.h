//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/NSObject-Protocol.h>

@class FBApplicationTerminationAssertion, FBApplicationTerminationAssertionService;

@protocol FBApplicationTerminationAssertionServiceDelegate <NSObject>
- (void)service:(FBApplicationTerminationAssertionService *)arg1 didRelinquishTerminationAssertion:(FBApplicationTerminationAssertion *)arg2;
- (void)service:(FBApplicationTerminationAssertionService *)arg1 didAcquireTerminationAssertion:(FBApplicationTerminationAssertion *)arg2;

@optional
- (void)service:(FBApplicationTerminationAssertionService *)arg1 canAcquireTerminationAssertion:(FBApplicationTerminationAssertion *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end


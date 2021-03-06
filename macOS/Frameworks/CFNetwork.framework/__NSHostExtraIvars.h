//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface __NSHostExtraIvars : NSObject
{
    NSString *thingToResolve;
    int resolveType;
    NSObject<OS_dispatch_queue> *resolveQueue;
    NSObject<OS_dispatch_queue> *cacheAccessQueue;
    NSObject<OS_dispatch_queue> *callbackQueue;
    BOOL startedResolving;
}

@property BOOL startedResolving; // @synthesize startedResolving;
@property(retain, nonatomic) NSString *thingToResolve; // @synthesize thingToResolve;
@property(nonatomic) int resolveType; // @synthesize resolveType;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *cacheAccessQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *resolveQueue;
- (void)dealloc;
- (void)cleanup;
- (id)init;

@end


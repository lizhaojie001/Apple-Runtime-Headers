//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

@class NSMutableDictionary;

@interface IOSSHLTransaction : FBTransaction
{
    NSMutableDictionary *_transactionContext;
    IOSSHLTransaction *_parent;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IOSSHLTransaction *parent; // @synthesize parent=_parent;
- (double)watchdogTimeout;
- (_Bool)shouldWatchdog:(id *)arg1;
- (void)addChildTransaction:(id)arg1;
- (void)clearTransactionContextObjectForKey:(id)arg1;
- (void)setTransactionContextObject:(id)arg1 forKey:(id)arg2;
- (id)transactionContextObjectForKey:(id)arg1;
- (_Bool)_canBeInterrupted;

@end


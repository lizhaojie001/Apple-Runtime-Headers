//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSLChargingManagerStateDelegate;

@interface CSLChargingManagerState : NSObject
{
    CDUnknownBlockType _postTransitionBlock;
    NSObject<CSLChargingManagerStateDelegate> *_delegate;
}

+ (id)startStateWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSObject<CSLChargingManagerStateDelegate> *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType postTransitionBlock; // @synthesize postTransitionBlock=_postTransitionBlock;
- (void)logTransitionFrom:(id)arg1 to:(id)arg2 event:(int)arg3;
- (id)transitionToOnAC;
- (id)executeTransitionForEvent:(int)arg1;
- (id)initWithDelegate:(id)arg1;
@property(readonly, nonatomic, getter=isOnAC) _Bool onAC;
@property(readonly, nonatomic) int type;

@end


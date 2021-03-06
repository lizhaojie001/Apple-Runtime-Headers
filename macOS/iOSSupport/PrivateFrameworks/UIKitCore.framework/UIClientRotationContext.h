//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UISnapshotView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIClientRotationContext : NSObject
{
    UIView *_headerView;
    UIView *_footerView;
    UIView *_contentView;
    UIView *_snapshotTargetView;
    UIView *_rotatingSnapshotView;
    UIView *_footerStartSnapshotView;
    UIView *_footerEndSnapshotView;
    BOOL _headerWasHidden;
    BOOL _footerWasHidden;
    BOOL _contentWasHidden;
    BOOL _snapshotTargetWasHidden;
    BOOL _orderKeyboardInAfterRotating;
    long long _fromOrientation;
    long long _toOrientation;
    double _duration;
    UISnapshotView *_headerSnapshotViewStart;
    UISnapshotView *_footerSnapshotViewStart;
    UISnapshotView *_contentSnapshotViewStart;
    id _rotatingClient;
    CDStruct_f365cafe _rotationSettings;
    double contentBottomInset;
    UIWindow *_window;
    BOOL _skipClientRotationCallbacks;
}

@property(nonatomic) BOOL skipClientRotationCallbacks; // @synthesize skipClientRotationCallbacks=_skipClientRotationCallbacks;
@property(readonly, nonatomic) long long toOrientation; // @synthesize toOrientation=_toOrientation;
@property(readonly, nonatomic) long long fromOrientation; // @synthesize fromOrientation=_fromOrientation;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) id rotatingClient; // @synthesize rotatingClient=_rotatingClient;
- (void)finishFullRotateUsingOnePartAnimation:(BOOL)arg1;
- (void)finishFirstHalfRotation;
- (void)rotateSnapshots;
- (void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)arg1;
- (BOOL)_isFooterTranslucent;
- (BOOL)_isHeaderTranslucent;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (void)slideHeaderViewAndFooterViewOffScreen:(BOOL)arg1 forInterfaceOrientation:(long long)arg2;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(long long)arg4;
- (void)dealloc;
- (id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4;

@end


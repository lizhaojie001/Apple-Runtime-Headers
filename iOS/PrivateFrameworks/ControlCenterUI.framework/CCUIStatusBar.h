//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIStatusBarStyleRequest, UIStatusBar_Modern;
@protocol CCUIStatusBarDelegate;

@interface CCUIStatusBar : UIView
{
    UIStatusBar_Modern *_compactTrailingStatusBar;
    UIStatusBar_Modern *_expandedStatusBar;
    double _trailingMarginDelta;
    double _verticalBatteryAlignmentDelta;
    id <CCUIStatusBarDelegate> _delegate;
    unsigned long long _leadingState;
    unsigned long long _trailingState;
    double _maxCompactScaleFactor;
    double _verticalSecondaryServiceDelta;
    double _expandedStatusBarTranslation;
    struct UIEdgeInsets _compactEdgeInsets;
    struct UIEdgeInsets _expandedEdgeInsets;
    struct CGAffineTransform _compactScaleTransform;
}

- (void).cxx_destruct;
@property(nonatomic) double expandedStatusBarTranslation; // @synthesize expandedStatusBarTranslation=_expandedStatusBarTranslation;
@property(readonly, nonatomic) double verticalSecondaryServiceDelta; // @synthesize verticalSecondaryServiceDelta=_verticalSecondaryServiceDelta;
@property(readonly, nonatomic) double maxCompactScaleFactor; // @synthesize maxCompactScaleFactor=_maxCompactScaleFactor;
@property(nonatomic) struct UIEdgeInsets expandedEdgeInsets; // @synthesize expandedEdgeInsets=_expandedEdgeInsets;
@property(nonatomic) struct UIEdgeInsets compactEdgeInsets; // @synthesize compactEdgeInsets=_compactEdgeInsets;
@property(nonatomic) unsigned long long trailingState; // @synthesize trailingState=_trailingState;
@property(nonatomic) unsigned long long leadingState; // @synthesize leadingState=_leadingState;
@property(nonatomic) __weak id <CCUIStatusBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateCompactTrailingStatusBarStyleRequestAndAvoidanceFrame;
- (void)controlCenterApplyPrimaryContentShadow;
- (void)_updateShadow;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) double expandedStatusBarBaseline;
@property(nonatomic) struct CGAffineTransform compactScaleTransform; // @synthesize compactScaleTransform=_compactScaleTransform;
@property(nonatomic) long long orientation; // @dynamic orientation;
@property(nonatomic) double expandedTrailingAlpha; // @dynamic expandedTrailingAlpha;
@property(nonatomic) double compactTrailingAlpha; // @dynamic compactTrailingAlpha;
@property(nonatomic) double leadingAlpha; // @dynamic leadingAlpha;
- (struct CGRect)compactAvoidanceFrame;
@property(readonly, copy, nonatomic) UIStatusBarStyleRequest *compactTrailingStyleRequest; // @dynamic compactTrailingStyleRequest;
- (void)_updateMetricsIfNeeded;
- (void)prepareForPresentation;
- (id)initWithFrame:(struct CGRect)arg1;

@end


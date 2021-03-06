//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class CALayer, SBUILegibilityLabel, UIView, _UILegibilitySettings, _UILegibilityView;

@interface SBUIFaceIDCameraGlyphView : SBFTouchPassThroughView
{
    _UILegibilitySettings *_legibilitySettings;
    UIView *_arrowContainer;
    SBUILegibilityLabel *_callToActionLabel;
    unsigned long long _state;
    _UILegibilityView *_arrowHead;
    _UILegibilityView *_arrowTail;
    CALayer *_maskContainerLayer;
    CALayer *_maskTopLayer;
    CALayer *_maskLeftLayer;
    CALayer *_maskRightLayer;
    UIView *_localRotationView;
    struct CGAffineTransform _localTransform;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *localRotationView; // @synthesize localRotationView=_localRotationView;
@property(retain, nonatomic) CALayer *maskRightLayer; // @synthesize maskRightLayer=_maskRightLayer;
@property(retain, nonatomic) CALayer *maskLeftLayer; // @synthesize maskLeftLayer=_maskLeftLayer;
@property(retain, nonatomic) CALayer *maskTopLayer; // @synthesize maskTopLayer=_maskTopLayer;
@property(retain, nonatomic) CALayer *maskContainerLayer; // @synthesize maskContainerLayer=_maskContainerLayer;
@property(retain, nonatomic) _UILegibilityView *arrowTail; // @synthesize arrowTail=_arrowTail;
@property(retain, nonatomic) _UILegibilityView *arrowHead; // @synthesize arrowHead=_arrowHead;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) SBUILegibilityLabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
@property(retain, nonatomic) UIView *arrowContainer; // @synthesize arrowContainer=_arrowContainer;
@property(nonatomic) struct CGAffineTransform localTransform; // @synthesize localTransform=_localTransform;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void)_updateCallToActionLabelFont;
- (void)layoutSubviews;
- (void)_removeAnimations;
- (void)_setAlpha:(double)arg1 onComponents:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fadeComponenetsOut:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeComponentsIn:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_flyInWithText:(_Bool)arg1 delay:(double)arg2;
- (void)setState:(unsigned long long)arg1 delay:(double)arg2;
- (void)_installMask;
- (id)initWithFrame:(struct CGRect)arg1;

@end


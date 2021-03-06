//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BSAnimationSettings, SBSceneLayoutAnimationWrapperView, UIView;

@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController
{
    BSAnimationSettings *_animationSettings;
    _Bool _waitsForAppActivation;
    UIView *_internalContainerView;
    UIView *_blackView;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool waitsForAppActivation; // @synthesize waitsForAppActivation=_waitsForAppActivation;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (void)_showBlackView;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (_Bool)_shouldDismissBanner;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (void)_setHidden:(_Bool)arg1;
- (id)_getTransitionWindow;
- (id)initWithTransitionContextProvider:(id)arg1;

@end


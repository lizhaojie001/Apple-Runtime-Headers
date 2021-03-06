//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKeyboardMotionSupport.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIKeyboardKeyplaneTransitionDelegate-Protocol.h>

@class CADisplayLink, NSString, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UISplitKeyboardSupport : UIKeyboardMotionSupport <UIGestureRecognizerDelegate, UIKeyboardKeyplaneTransitionDelegate>
{
    UIPanGestureRecognizer *_singleFingerPanRecognizer;
    UIPanGestureRecognizer *_twoFingerPanRecognizer;
    BOOL _isTranslating;
    BOOL _isSplitting;
    BOOL _splitLockState;
    struct CGPoint _targetTranslation;
    struct CGPoint _initialTranslation;
    struct CGPoint _translationVelocity;
    CADisplayLink *_displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    CDUnknownBlockType _bounceCompletionBlock;
}

- (void)transitionDidFinish:(BOOL)arg1;
- (void)finishTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)prepareForTransition;
- (void)undock;
- (void)dock;
- (void)_updateBounceAnimation:(id)arg1;
- (void)invalidateDisplayLink;
- (void)bounceAnimationDidFinish;
- (void)cancelBounceAnimation;
- (void)translateDetected:(id)arg1;
- (void)cancelGestureRecognizers;
- (BOOL)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (BOOL)startedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)translateToPlacement:(id)arg1 animated:(BOOL)arg2;
- (void)willPerformPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)updatedControllerApplicator:(id)arg1;
@property(readonly, nonatomic) BOOL isSplitting;
@property(readonly, nonatomic) BOOL isTranslating;
- (void)translateToPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)generateSplitNotificationForNewPlacement:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_updatedController;
- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


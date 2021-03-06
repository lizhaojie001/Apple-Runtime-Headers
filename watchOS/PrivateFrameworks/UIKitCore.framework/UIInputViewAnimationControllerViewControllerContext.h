//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerKeyboardContextTransitioning-Protocol.h>

@class NSString, UIKBViewTreeSnapshotter, UIView, _UIViewControllerTransitionContext;
@protocol UIInputViewAnimationHost, UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerViewControllerContext : NSObject <UIViewControllerKeyboardContextTransitioning>
{
    _UIViewControllerTransitionContext *_context;
    id <UIInputViewAnimationHost> _host;
    UIView *_from;
    UIView *_to;
    struct CGRect _fromRect;
    struct CGRect _toRect;
    UIKBViewTreeSnapshotter *_kbSnapshotter;
}

+ (id)contextWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4;
@property(readonly, nonatomic) struct CGRect toKeyboardFrame;
@property(readonly, nonatomic) UIView *toKeyboard;
@property(readonly, nonatomic) struct CGRect fromKeyboardFrame;
@property(readonly, nonatomic) UIView *fromKeyboard;
@property(readonly, nonatomic) id <UIViewControllerContextTransitioning> mainContext;
- (void)dealloc;
- (id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNAvatarCardController.h>

#import <ContactsUI/CNQuickActionsManagerDelegate-Protocol.h>
#import <ContactsUI/UIAlertControllerSystemProvidedPresentationDelegate-Protocol.h>
#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>

@class CNQuickActionsManager, NSArray, NSString, UIAlertController, UIView;

__attribute__((visibility("hidden")))
@interface CNAvatarCardAlertController : CNAvatarCardController <CNQuickActionsManagerDelegate, UIAlertControllerSystemProvidedPresentationDelegate, UIGestureRecognizerDelegate>
{
    UIView *_sourceView;
    _Bool _expanded;
    CNQuickActionsManager *_actionsManager;
    NSArray *_actions;
    UIAlertController *_alertController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) CNQuickActionsManager *actionsManager; // @synthesize actionsManager=_actionsManager;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1;
- (id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1;
- (_Bool)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(struct CGPoint)arg2;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
- (void)dismissAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performAction:(id)arg1;
- (void)_refreshAlertController;
- (void)_updateWithActions:(id)arg1;
- (void)_updateActions;
- (id)sourceView;
- (void)setSourceView:(id)arg1;
- (void)setContact:(id)arg1;
- (_Bool)isVisible;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


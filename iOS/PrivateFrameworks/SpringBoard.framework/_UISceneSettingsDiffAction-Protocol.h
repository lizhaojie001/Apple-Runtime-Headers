//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSScene, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, UIScene;

@protocol _UISceneSettingsDiffAction <NSObject>
- (void)_performActionsForUIScene:(UIScene *)arg1 withUpdatedFBSScene:(FBSScene *)arg2 settingsDiff:(FBSSceneSettingsDiff *)arg3 fromSettings:(FBSSceneSettings *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5 lifecycleActionType:(unsigned int)arg6;
@end


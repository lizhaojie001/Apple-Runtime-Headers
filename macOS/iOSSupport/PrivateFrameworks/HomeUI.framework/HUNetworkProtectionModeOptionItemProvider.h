//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMAccessoryNetworkProtectionGroup, NSMutableSet;

@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider
{
    HMAccessoryNetworkProtectionGroup *_group;
    NSMutableSet *_networkProtectionModeOptionItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *networkProtectionModeOptionItems; // @synthesize networkProtectionModeOptionItems=_networkProtectionModeOptionItems;
@property(readonly, copy, nonatomic) HMAccessoryNetworkProtectionGroup *group; // @synthesize group=_group;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithGroup:(id)arg1;

@end


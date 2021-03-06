//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIShelfMenuBarViewElement.h>

#import <StoreKitUI/SKUIDynamicShelfViewElement-Protocol.h>

@class NSString, SKUIViewElement;
@protocol SKUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SKUIDynamicShelfMenuBarViewElement : SKUIShelfMenuBarViewElement <SKUIDynamicShelfViewElement>
{
    SKUIViewElement *_cellTemplateViewElement;
}

- (void).cxx_destruct;
- (void)setShelfItemViewElementValidator:(CDUnknownBlockType)arg1;
- (_Bool)isDynamicContainer;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIViewElement *cellTemplateViewElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <SKUIEntityProviding> entityProvider;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


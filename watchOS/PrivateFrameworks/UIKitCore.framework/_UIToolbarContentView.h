//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIBarContentView.h>

@class NSLayoutConstraint, NSMapTable, _UIBarButtonItemData, _UIButtonBar;

__attribute__((visibility("hidden")))
@interface _UIToolbarContentView : _UIBarContentView
{
    _UIButtonBar *_buttonBar;
    NSLayoutConstraint *_buttonBarLeadingConstraint;
    NSLayoutConstraint *_buttonBarTrailingConstraint;
    NSMapTable *_absorptionTable;
    float _standardEdgeSpacing;
    _Bool _compactMetrics;
    int _itemDistribution;
    _UIBarButtonItemData *_plainItemAppearance;
    _UIBarButtonItemData *_doneItemAppearance;
    struct NSDirectionalEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // @synthesize doneItemAppearance=_doneItemAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // @synthesize plainItemAppearance=_plainItemAppearance;
@property(nonatomic) int itemDistribution; // @synthesize itemDistribution=_itemDistribution;
@property(nonatomic) struct NSDirectionalEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool compactMetrics; // @synthesize compactMetrics=_compactMetrics;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_appearanceChanged;
- (float)defaultTextPadding;
- (float)defaultEdgeSpacing;
- (float)absorptionForItem:(id)arg1;
- (id)_computeEdgeAbsorptionForItems:(id)arg1;
- (unsigned int)edgesPaddingBarButtonItem:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(_Bool)arg3;
- (void)_updateThreeUpFlagsForItems:(id)arg1;
- (void)reloadWithItems:(id)arg1;
- (void)updateConstraints;
- (void)_ensureButtonBar;
- (void)updateContent;
- (void)_setButtonBarLeadingInset:(float)arg1 trailingInset:(float)arg2;
- (struct NSDirectionalEdgeInsets)_directionalSafeArea;
- (void)tintColorDidChange;
- (void)layoutMarginsDidChange;

@end


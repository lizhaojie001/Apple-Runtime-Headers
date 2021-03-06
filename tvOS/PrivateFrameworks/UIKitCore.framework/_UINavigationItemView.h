//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UILabel, UINavigationItem;

__attribute__((visibility("hidden")))
@interface _UINavigationItemView : UIView
{
    UINavigationItem *_item;
    struct CGSize _titleSize;
    UIView *_topCrossView;
    UIView *_bottomCrossView;
    _Bool _isCrossFading;
    _Bool _customFontSet;
    UILabel *_label;
    _Bool __isFadingInFromCustomAlpha;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setFadingInFromCustomAlpha:) _Bool _isFadingInFromCustomAlpha; // @synthesize _isFadingInFromCustomAlpha=__isFadingInFromCustomAlpha;
- (void)_cleanUpCrossView;
- (void)_crossFadeHiddingButton:(_Bool)arg1;
- (void)_prepareCrossViewsForNewSize:(struct CGSize)arg1;
- (id)description;
- (void)_setLineBreakMode:(long long)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)_setFont:(id)arg1;
- (_Bool)titleAutoresizesToFit;
- (void)setTitleAutoresizesToFit:(_Bool)arg1;
- (id)title;
- (struct CGSize)_titleSize;
- (void)_resetTitleSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_updateLabel;
- (struct CGRect)_labelFrame;
- (double)_titleYAdjustmentCustomization;
- (void)_updateLabelContents;
- (void)_updateLabelColor;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;
- (id)_currentTextColorForBarStyle:(long long)arg1;
- (id)_defaultFont;
- (id)navigationItem;
- (id)initWithNavigationItem:(id)arg1;

@end


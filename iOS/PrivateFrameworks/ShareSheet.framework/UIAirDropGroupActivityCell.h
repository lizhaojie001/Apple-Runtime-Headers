//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, UIAirDropNode, UILabel, UIView, UIVisualEffectView, _UIAirDropProgressView;

@interface UIAirDropGroupActivityCell : UICollectionViewCell
{
    _Bool _stateBeingRestored;
    _Bool _disabled;
    UILabel *_nameLabel;
    UIView *_titleSlotView;
    UIView *_subtitleSlotView;
    UIView *_displayNameSlotView;
    UIView *_imageSlotView;
    UIView *_transportSlotView;
    UIAirDropNode *_node;
    double _progress;
    UIVisualEffectView *_vibrantTitleView;
    UIVisualEffectView *_vibrantSubtitleView;
    UILabel *_secondLabel;
    NSArray *_secondLabelVisibleConstraintsArray;
    UILabel *_labelForPositioning;
    _UIAirDropProgressView *_circleProgressView;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *largeTextConstraints; // @synthesize largeTextConstraints=_largeTextConstraints;
@property(retain, nonatomic) NSArray *regularConstraints; // @synthesize regularConstraints=_regularConstraints;
@property(retain, nonatomic) _UIAirDropProgressView *circleProgressView; // @synthesize circleProgressView=_circleProgressView;
@property(retain, nonatomic) UILabel *labelForPositioning; // @synthesize labelForPositioning=_labelForPositioning;
@property(retain, nonatomic) NSArray *secondLabelVisibleConstraintsArray; // @synthesize secondLabelVisibleConstraintsArray=_secondLabelVisibleConstraintsArray;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UIVisualEffectView *vibrantSubtitleView; // @synthesize vibrantSubtitleView=_vibrantSubtitleView;
@property(retain, nonatomic) UIVisualEffectView *vibrantTitleView; // @synthesize vibrantTitleView=_vibrantTitleView;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool stateBeingRestored; // @synthesize stateBeingRestored=_stateBeingRestored;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIAirDropNode *node; // @synthesize node=_node;
@property(retain, nonatomic) UIView *transportSlotView; // @synthesize transportSlotView=_transportSlotView;
@property(retain, nonatomic) UIView *imageSlotView; // @synthesize imageSlotView=_imageSlotView;
@property(retain, nonatomic) UIView *displayNameSlotView; // @synthesize displayNameSlotView=_displayNameSlotView;
@property(retain, nonatomic) UIView *subtitleSlotView; // @synthesize subtitleSlotView=_subtitleSlotView;
@property(retain, nonatomic) UIView *titleSlotView; // @synthesize titleSlotView=_titleSlotView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateDarkening;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)setupConstraintsYukon;
- (id)initWithFrame:(struct CGRect)arg1;

@end


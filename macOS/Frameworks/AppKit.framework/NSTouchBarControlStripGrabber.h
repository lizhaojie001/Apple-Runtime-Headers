//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AppKit/NSCollectionViewElement-Protocol.h>
#import <AppKit/NSGestureRecognizerDelegate-Protocol.h>

@class CALayer, NSString;

@interface NSTouchBarControlStripGrabber : NSView <NSCollectionViewElement, NSGestureRecognizerDelegate>
{
    id _target;
    SEL _action;
    long long _state;
    BOOL _highlighted;
    CALayer *_backgroundLayer;
    CALayer *_upperChevronLayer;
    CALayer *_lowerChevronLayer;
    struct NSEdgeInsets _alignmentRectInsets;
    BOOL _enabled;
}

+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;
+ (id)keyPathsForValuesInvalidatingLayout;
+ (id)keyPathsForValuesAffectingAlignmentRectInsets;
+ (id)keyPathsForValuesInvalidatingDisplay;
- (void).cxx_destruct;
@property(getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property long long state; // @synthesize state=_state;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePress:(id)arg1;
@property struct NSEdgeInsets alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)layoutLayers;
- (BOOL)isFlipped;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
@property(getter=isEnabled) BOOL enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityIdentifierAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end


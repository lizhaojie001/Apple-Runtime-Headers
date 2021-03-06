//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TVCKBackgroundShelfWrappingView : UIView
{
    UIView *_shelfView;
    UIView *_backgroundView;
    UIView *_relatedView;
    double _height;
}

- (void).cxx_destruct;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIView *relatedView; // @synthesize relatedView=_relatedView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *shelfView; // @synthesize shelfView=_shelfView;
- (id)preferredFocusEnvironments;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_transitionFromView:(id)arg1 toView:(id)arg2 crossfade:(_Bool)arg3;
- (void)setRelatedView:(id)arg1 animated:(_Bool)arg2;
- (void)setBackgroundView:(id)arg1 animated:(_Bool)arg2;

@end


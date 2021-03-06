//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TVUIKit/_TVStackedMediaEntryView-Protocol.h>

@class NSString, _TVStackedImageView, _TVStackedMediaDocumentEntry, _TVStackedVideoPlayerLayerContainerView;

@interface _TVStackedVideoPlayerView : UIView <_TVStackedMediaEntryView>
{
    _TVStackedMediaDocumentEntry *_entry;
    _TVStackedImageView *_previewImageView;
    _TVStackedVideoPlayerLayerContainerView *_playerContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TVStackedVideoPlayerLayerContainerView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) _TVStackedImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) _TVStackedMediaDocumentEntry *entry; // @synthesize entry=_entry;
- (void)_teardownPlayerLayer;
- (id)player;
- (void)_finishPreviewToVideoTransition;
- (void)_transitionPreviewToVideo;
- (void)_finishVideoToPreviewTransition;
- (void)_transitionVideoToPreview;
- (void)_prepareVideoToPreviewTransition;
- (void)_configureWithPlayerLayer:(id)arg1;
- (void)resetVideoPlayback;
- (void)playVideo:(_Bool)arg1;
- (void)configureWithEntry:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


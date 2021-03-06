//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/FavoritesPickerCellViewAccessibilityDelegate-Protocol.h>
#import <Safari/NSScrubberDataSource-Protocol.h>
#import <Safari/NSScrubberDelegate-Protocol.h>
#import <Safari/NSScrubberFlowLayoutDelegate-Protocol.h>

@class NSMapTable, NSPointerArray, NSString;
@protocol FavoritesPickerViewControllerDataSource, FavoritesPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface FavoritesPickerViewController : NSViewController <FavoritesPickerCellViewAccessibilityDelegate, NSScrubberDataSource, NSScrubberDelegate, NSScrubberFlowLayoutDelegate>
{
    NSMapTable *_cellViewsToTokens;
    NSPointerArray *_cellViews;
    BOOL _ignoreSelectionChange;
    id <FavoritesPickerViewControllerDataSource> _dataSource;
    id <FavoritesPickerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FavoritesPickerViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_goBack;
- (BOOL)_shouldShowBackButton;
- (int)_styleForFavoriteAtIndex:(unsigned long long)arg1;
- (unsigned long long)_favoriteIndexForScrubberIndex:(unsigned long long)arg1;
- (BOOL)_isBackButtonAtIndex:(unsigned long long)arg1;
- (id)_enqueuedSiteMetadataRequestForCellView:(id)arg1 favorite:(id)arg2;
- (id)_scrubber;
- (struct CGSize)scrubber:(id)arg1 layout:(id)arg2 sizeForItemAtIndex:(long long)arg3;
- (void)didFinishInteractingWithScrubber:(id)arg1;
- (void)scrubber:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (void)viewDidReceiveAccessibilityInteraction:(id)arg1;
- (void)reloadData;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/UICollectionViewDataSource-Protocol.h>

@class NSString, UICollectionView;
@protocol NUFeedDataProvider, NUFeedTriggerProvider;

@interface NUFeedViewController : UIViewController <UICollectionViewDataSource>
{
    _Bool _viewHasAppearedOnce;
    id <NUFeedDataProvider> _feedDataProvider;
    id <NUFeedTriggerProvider> _feedTriggerProvider;
    UICollectionView *_collectionView;
    struct CGRect _laidOutBounds;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect laidOutBounds; // @synthesize laidOutBounds=_laidOutBounds;
@property(nonatomic) _Bool viewHasAppearedOnce; // @synthesize viewHasAppearedOnce=_viewHasAppearedOnce;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) id <NUFeedTriggerProvider> feedTriggerProvider; // @synthesize feedTriggerProvider=_feedTriggerProvider;
@property(readonly, nonatomic) id <NUFeedDataProvider> feedDataProvider; // @synthesize feedDataProvider=_feedDataProvider;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFeedDataProvider:(id)arg1 feedTriggerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


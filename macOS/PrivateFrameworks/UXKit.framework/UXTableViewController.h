//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXCollectionViewController.h>

@class UXTableView;
@protocol UXTableViewDelegate;

@interface UXTableViewController : UXCollectionViewController
{
    id <UXTableViewDelegate> _tableViewDelegate;
}

+ (Class)collectionViewClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <UXTableViewDelegate> tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
- (void)_updateContentInsetFromLayoutGuides;
- (id)preferredFirstResponder;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)didUpdateLayoutGuides;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) UXTableView *tableView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithStyle:(long long)arg1;

@end


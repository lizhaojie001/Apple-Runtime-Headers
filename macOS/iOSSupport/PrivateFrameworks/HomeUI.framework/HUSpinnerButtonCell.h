//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUButtonCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, NSString, UIActivityIndicatorView;
@protocol HUResizableCellDelegate;

@interface HUSpinnerButtonCell : HUButtonCell <HUCellProtocol>
{
    BOOL _showSpinner;
    BOOL _useFullWidthSeparator;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) BOOL useFullWidthSeparator; // @synthesize useFullWidthSeparator=_useFullWidthSeparator;
@property(nonatomic) BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
- (void)createSpinner;
- (struct CGRect)_separatorFrame;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HFItem *item;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end


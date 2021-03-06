//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VUIButton, VUIUpNextStateView;
@protocol VUIUpNextButtonProtocol;

__attribute__((visibility("hidden")))
@interface VUIUpNextButtonProperties : NSObject
{
    _Bool _dismissOnSelect;
    _Bool _isWatchListed;
    VUIUpNextStateView *_addedStateView;
    VUIUpNextStateView *_removedStateView;
    VUIButton<VUIUpNextButtonProtocol> *_delegate;
    NSString *_canonicalID;
}

+ (id)configureWithElement:(id)arg1 existingButton:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(nonatomic) _Bool isWatchListed; // @synthesize isWatchListed=_isWatchListed;
@property(nonatomic) _Bool dismissOnSelect; // @synthesize dismissOnSelect=_dismissOnSelect;
@property(nonatomic) __weak VUIButton<VUIUpNextButtonProtocol> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VUIUpNextStateView *removedStateView; // @synthesize removedStateView=_removedStateView;
@property(readonly, nonatomic) VUIUpNextStateView *addedStateView; // @synthesize addedStateView=_addedStateView;
- (void)_errorInUpdatingState:(id)arg1;
- (void)dealloc;
- (void)updateButtonContentView;
- (void)callAPIAndToggleUpNextState;
- (void)_toggleUpNextState;
- (id)init;

@end


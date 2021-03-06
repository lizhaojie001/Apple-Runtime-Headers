//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVMovie.h>

#import <AVFoundation/AVFragmentMinding-Protocol.h>

@class NSArray;

@interface AVFragmentedMovie : AVMovie <AVFragmentMinding>
{
}

+ (_Bool)expectsPropertyRevisedNotifications;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;
@property(readonly, nonatomic, getter=isAssociatedWithFragmentMinder) _Bool associatedWithFragmentMinder;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
@property(readonly, nonatomic) NSArray *tracks;
- (Class)_classForMovieTracks;
- (_Bool)_needsLegacyChangeNotifications;
- (_Bool)_mindsFragments;
- (id)initWithURL:(id)arg1 options:(id)arg2;

@end


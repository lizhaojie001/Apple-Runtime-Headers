//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/WKInterfaceObject.h>

#import <WatchKit/WKInterfaceObjectDynamicCreatable-Protocol.h>

@class NSString;

@interface WKInterfaceInlineMovie : WKInterfaceObject <WKInterfaceObjectDynamicCreatable>
{
}

- (id)interfaceDescriptionForDynamicCreation;
- (void)pause;
- (void)playFromBeginning;
- (void)play;
- (void)setPosterImage:(id)arg1;
- (void)setAutoplays:(_Bool)arg1;
- (void)setLoops:(_Bool)arg1;
- (void)setVideoGravity:(int)arg1;
- (void)setMovieURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameController/GCExtendedGamepad.h>

#import <GameController/_GCACHomeButtonDelegate-Protocol.h>

@class NSString, _GCACHomeButton;

@interface _GCSonyDualShock4ControllerProfile : GCExtendedGamepad <_GCACHomeButtonDelegate>
{
    _GCACHomeButton *_acHome;
}

- (void).cxx_destruct;
- (_Bool)isBluetoothAndUSBMirrored;
- (void)setEnableTimeForHaptics:(_Bool)arg1;
- (void)triggerHapticsForDuration:(float)arg1;
- (void)triggerHaptics;
- (void)setHapticMotor:(int)arg1 frequency:(float)arg2;
- (void)setLightbarColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)productCategory;
- (id)menuButton;
- (void)toggleSuspendResume;
- (void)setPlayerIndex:(long long)arg1;
- (id)name;
- (id)initWithController:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


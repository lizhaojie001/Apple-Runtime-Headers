//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AVB17221ACMPInterface, AVB17221ACMPMessage;

@protocol AVB17221ACMPClient
- (BOOL)ACMPDidReceiveResponse:(AVB17221ACMPMessage *)arg1 onInterface:(AVB17221ACMPInterface *)arg2;
- (BOOL)ACMPDidReceiveCommand:(AVB17221ACMPMessage *)arg1 onInterface:(AVB17221ACMPInterface *)arg2;
@end


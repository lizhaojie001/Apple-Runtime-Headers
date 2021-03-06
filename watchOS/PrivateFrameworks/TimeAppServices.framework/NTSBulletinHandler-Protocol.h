//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeAppServices/NSObject-Protocol.h>

@class BBBulletin, NSSet;
@protocol CUISBulletinAlternativeAlertProvider, NTSBulletinHandlerDelegate;

@protocol NTSBulletinHandler <NSObject>
- (void)alertProvider:(id <CUISBulletinAlternativeAlertProvider>)arg1 invalidateBulletinIDs:(NSSet *)arg2;
- (void)alertProvider:(id <CUISBulletinAlternativeAlertProvider>)arg1 removeBulletin:(BBBulletin *)arg2;
- (void)alertProvider:(id <CUISBulletinAlternativeAlertProvider>)arg1 modifyBulletin:(BBBulletin *)arg2;
- (void)alertProvider:(id <CUISBulletinAlternativeAlertProvider>)arg1 addBulletin:(BBBulletin *)arg2 replaceBulletin:(BBBulletin *)arg3;
- (void)alertProvider:(id <CUISBulletinAlternativeAlertProvider>)arg1 addBulletin:(BBBulletin *)arg2;
- (_Bool)alertProvider:(id <CUISBulletinAlternativeAlertProvider>)arg1 wantsAlertForBulletin:(BBBulletin *)arg2;

@optional
@property(nonatomic) __weak id <NTSBulletinHandlerDelegate> delegate;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCFileWrapper.h>

@interface MCFileWrapper (MailAdditions)
- (void)setPreferredFilename:(id)arg1;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (id)sharedKeySetForQuarantineProperties;
- (void)configureWithMessage:(id)arg1 headers:(id)arg2;
@property(nonatomic) long long attachmentMailboxType;
@end


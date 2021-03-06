//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeMachine/TMMonoStructure.h>

#import <TimeMachine/TMWritableBackupProvider-Protocol.h>

@class NSMutableArray, NSString;

@interface TMInProgressContainer : TMMonoStructure <TMWritableBackupProvider>
{
    NSMutableArray *_eventTreeFileNames;
    NSString *_backupLogFileName;
}

+ (id)annotatedStateAtURL:(id)arg1;
+ (id)URLForBuildUnderURL:(id)arg1 error:(id *)arg2;
+ (id)_containerNameWithDate:(id)arg1;
+ (id)structureType;
- (id)description;
- (id)latestWritableBackupWithState:(unsigned long long)arg1;
- (id)sortedWritableBackupsWithState:(unsigned long long)arg1;
- (id)deleteFromDiskWithCancelBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (long long)refreshFromDisk;
- (BOOL)_updateContainerTimestamp:(id *)arg1;
- (BOOL)updateContainerWithDate:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForReuse:(id *)arg1;
- (void)dealloc;
- (BOOL)buildAtURL:(id)arg1 parentURL:(id)arg2 error:(id *)arg3;

@end


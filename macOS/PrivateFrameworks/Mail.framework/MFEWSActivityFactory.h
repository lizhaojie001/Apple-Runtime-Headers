//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFEWSActivityFactory : NSObject
{
}

+ (id)newRetrievePersistedFolderDataTaskWithMailboxDataCache:(id)arg1 accountName:(id)arg2;
+ (id)newFolderHierarchyReconcileTaskWithInitialSyncState:(id)arg1 accountName:(id)arg2;
+ (id)newMailboxSyncTaskForMailbox:(id)arg1;
+ (id)newVisibleBodyFetchTaskWithAccountName:(id)arg1;
+ (id)newBackgroundBodyFetchTaskWithAccountName:(id)arg1;

@end


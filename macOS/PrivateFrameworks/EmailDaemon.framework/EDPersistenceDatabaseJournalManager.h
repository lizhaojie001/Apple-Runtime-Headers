//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDPersistenceDatabaseJournal, NSMapTable, NSMutableIndexSet, NSString;
@protocol OS_dispatch_queue;

@interface EDPersistenceDatabaseJournalManager : NSObject <EFLoggable>
{
    struct os_unfair_lock_s _journalLock;
    EDPersistenceDatabaseJournal *_currentJournal;
    BOOL _shouldDeleteCurrentJournal;
    NSMutableIndexSet *_journalNumbers;
    NSMutableIndexSet *_pendingDeleteJournalNumbers;
    NSMapTable *_journalsByIndexes;
    NSString *_journalDirectoryPath;
    NSObject<OS_dispatch_queue> *_checkExistingQueue;
    NSObject<OS_dispatch_queue> *_deleteQueue;
}

+ (id)log;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *deleteQueue; // @synthesize deleteQueue=_deleteQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *checkExistingQueue; // @synthesize checkExistingQueue=_checkExistingQueue;
@property(readonly, copy, nonatomic) NSString *journalDirectoryPath; // @synthesize journalDirectoryPath=_journalDirectoryPath;
- (void)waitForDeletes;
- (id)_getJournalWithBlock:(CDUnknownBlockType)arg1;
- (void)_deleteJournalNumber:(unsigned long long)arg1;
- (void)mergedJournal:(id)arg1;
@property(readonly, nonatomic) EDPersistenceDatabaseJournal *oldestJournal;
- (void)_journalNoLongerReferenced:(id)arg1;
- (id)currentJournalCreateIfNeeded:(BOOL)arg1;
- (id)initWithBasePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


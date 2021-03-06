//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCCommand.h>

@class NSArray;

@interface FCRemoveRecordsCommand : FCCommand
{
    NSArray *_recordIDs;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void)coalesceWithCommand:(id)arg1;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)handleBatchOfRecordIDs:(id)arg1 internalPrivateDataContext:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleRecordIDsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3 qualityOfService:(long long)arg4;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (id)init;

@end


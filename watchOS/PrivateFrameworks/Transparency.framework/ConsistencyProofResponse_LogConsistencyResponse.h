//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class NSMutableArray, NSNumber, SignedLogHead, TransparencyConsistencyProofVerifier, TransparencyManagedDataStore;

@interface ConsistencyProofResponse_LogConsistencyResponse : GPBMessage <TransparencyVerifiable>
{
}

+ (id)descriptor;
- (_Bool)verifyWithError:(id *)arg1;
- (void)setResult:(_Bool)arg1 treeHead:(id)arg2 error:(id)arg3;
@property(retain) NSNumber *startRevision;
@property(retain) TransparencyManagedDataStore *dataStore;
@property(retain) TransparencyConsistencyProofVerifier *verifier;

// Remaining properties
@property(nonatomic) int application; // @dynamic application;
@property(retain, nonatomic) SignedLogHead *endSlh; // @dynamic endSlh;
@property(nonatomic) _Bool hasEndSlh; // @dynamic hasEndSlh;
@property(nonatomic) _Bool hasStartSlh; // @dynamic hasStartSlh;
@property(nonatomic) int logType; // @dynamic logType;
@property(retain, nonatomic) NSMutableArray *proofHashesArray; // @dynamic proofHashesArray;
@property(readonly, nonatomic) unsigned int proofHashesArray_Count; // @dynamic proofHashesArray_Count;
@property(retain, nonatomic) SignedLogHead *startSlh; // @dynamic startSlh;

@end


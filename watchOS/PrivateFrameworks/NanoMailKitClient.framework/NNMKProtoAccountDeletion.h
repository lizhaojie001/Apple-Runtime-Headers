//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitClient/NSCopying-Protocol.h>

@class NSString;

@interface NNMKProtoAccountDeletion : PBCodable <NSCopying>
{
    NSString *_accountId;
    unsigned int _fullSyncVersion;
    CDStruct_a125a100 _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFullSyncVersion;
@property(readonly, nonatomic) _Bool hasAccountId;

@end


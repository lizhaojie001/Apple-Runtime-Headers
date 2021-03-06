//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBUrlMappingMiss : PBCodable <NSCopying>
{
    NSString *_host;
    NSMutableArray *_paths;
    NSString *_url;
}

+ (Class)pathsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)pathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (void)addPaths:(id)arg1;
- (void)clearPaths;
@property(readonly, nonatomic) BOOL hasHost;
@property(readonly, nonatomic) BOOL hasUrl;

@end


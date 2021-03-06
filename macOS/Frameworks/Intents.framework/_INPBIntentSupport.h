//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentSupport-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSupport : PBCodable <_INPBIntentSupport, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSArray *_intentsRestrictedWhileLockeds;
    NSArray *_intentsSupporteds;
    NSArray *_supportedMediaCategories;
}

+ (BOOL)supportsSecureCoding;
+ (Class)intentsSupportedType;
+ (Class)intentsRestrictedWhileLockedType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *supportedMediaCategories; // @synthesize supportedMediaCategories=_supportedMediaCategories;
@property(copy, nonatomic) NSArray *intentsSupporteds; // @synthesize intentsSupporteds=_intentsSupporteds;
@property(copy, nonatomic) NSArray *intentsRestrictedWhileLockeds; // @synthesize intentsRestrictedWhileLockeds=_intentsRestrictedWhileLockeds;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)supportedMediaCategoriesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long supportedMediaCategoriesCount;
- (void)addSupportedMediaCategories:(id)arg1;
- (void)clearSupportedMediaCategories;
- (id)intentsSupportedAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentsSupportedsCount;
- (void)addIntentsSupported:(id)arg1;
- (void)clearIntentsSupporteds;
- (id)intentsRestrictedWhileLockedAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentsRestrictedWhileLockedsCount;
- (void)addIntentsRestrictedWhileLocked:(id)arg1;
- (void)clearIntentsRestrictedWhileLockeds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


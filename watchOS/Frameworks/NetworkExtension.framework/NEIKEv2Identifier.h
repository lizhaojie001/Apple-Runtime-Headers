//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NEIKEv2Identifier : NSObject <NSCopying>
{
    NSData *_identifierData;
}

+ (id)createIdentifierWithType:(unsigned int)arg1 data:(id)arg2;
+ (id)createIdentifierWithType:(unsigned int)arg1 data:(id)arg2 zone:(struct _NSZone *)arg3;
+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(retain) NSData *identifierData; // @synthesize identifierData=_identifierData;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly) NSString *stringValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
@property(readonly) unsigned int identifierType;

@end


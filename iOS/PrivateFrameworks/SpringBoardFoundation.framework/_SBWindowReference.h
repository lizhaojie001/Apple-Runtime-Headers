//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/NSCopying-Protocol.h>

@interface _SBWindowReference : NSObject <NSCopying>
{
    id _object;
}

+ (id)referenceForObject:(id)arg1;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long pointer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;

@end


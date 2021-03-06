//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSQLitePropertyPredicate.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDSQLiteNullPredicate : HDSQLitePropertyPredicate <NSCopying>
{
    _Bool _matchesNull;
}

+ (id)isNullPredicateWithProperty:(id)arg1;
+ (id)isNotNullPredicateWithProperty:(id)arg1;
@property(readonly, nonatomic) _Bool matchesNull; // @synthesize matchesNull=_matchesNull;
- (_Bool)isCompatibleWithPredicate:(id)arg1;
- (id)description;
- (id)SQLForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


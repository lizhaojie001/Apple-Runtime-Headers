//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableCharacterSet.h>

__attribute__((visibility("hidden")))
@interface NSCFCharacterSet : NSMutableCharacterSet
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (Class)classForArchiver;
- (void)makeCharacterSetFast;
- (void)makeCharacterSetCompact;
- (void)invert;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)addCharactersInString:(id)arg1;
- (void)removeCharactersInRange:(struct _NSRange)arg1;
- (void)addCharactersInRange:(struct _NSRange)arg1;
- (id)invertedSet;
- (id)bitmapRepresentation;
- (_Bool)hasMemberInPlane:(unsigned char)arg1;
- (_Bool)isSupersetOfSet:(id)arg1;
- (_Bool)longCharacterIsMember:(unsigned long)arg1;
- (_Bool)characterIsMember:(unsigned short)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)retainCount;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;

@end


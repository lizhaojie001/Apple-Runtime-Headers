//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface VUIiTunesKeyValueStoreSyncItem : NSObject
{
    NSString *_key;
    NSData *_value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end


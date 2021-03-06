//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDQueryServer, NSString;

@interface _HDQueryDatabaseAccessBlock : NSObject
{
    CDUnknownBlockType _block;
    HDQueryServer *_queryServer;
    NSString *_processBundleIdentifier;
    int _qualityOfService;
    double _creationTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) int qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, copy, nonatomic) NSString *processBundleIdentifier; // @synthesize processBundleIdentifier=_processBundleIdentifier;
@property(readonly, nonatomic) __weak HDQueryServer *queryServer; // @synthesize queryServer=_queryServer;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (id)description;
@property(readonly, nonatomic) _Bool shouldThrottle;
- (_Bool)shouldRunAfterBlock:(id)arg1 foregroundBundleIdentifiers:(id)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1 queryServer:(id)arg2;

@end


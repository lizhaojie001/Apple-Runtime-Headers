//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

@interface PPContactQueryResultGuardedData : NSObject
{
    BOOL _joined;
    NSArray *_cnContacts;
    NSArray *_fiaContacts;
    NSError *_latestError;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL joined; // @synthesize joined=_joined;
@property(retain, nonatomic) NSError *latestError; // @synthesize latestError=_latestError;
@property(retain, nonatomic) NSArray *fiaContacts; // @synthesize fiaContacts=_fiaContacts;
@property(retain, nonatomic) NSArray *cnContacts; // @synthesize cnContacts=_cnContacts;

@end


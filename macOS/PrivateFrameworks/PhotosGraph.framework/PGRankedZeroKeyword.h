//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PGRankedZeroKeyword : NSObject
{
    NSDictionary *_zeroKeyword;
    double _score;
}

- (void).cxx_destruct;
@property(readonly) double score; // @synthesize score=_score;
@property(readonly) NSDictionary *zeroKeyword; // @synthesize zeroKeyword=_zeroKeyword;
- (BOOL)isEqual:(id)arg1;
- (id)initWithKeyword:(id)arg1 score:(double)arg2;

@end


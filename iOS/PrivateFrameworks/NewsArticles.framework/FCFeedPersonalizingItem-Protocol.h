//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsArticles/NSObject-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSArray, NSDate, NSString;

@protocol FCFeedPersonalizingItem <NSObject>
- (void)enumerateTopicCohortsWithBlock:(void (^)(NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *))arg1;
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
- (_Bool)isHiddenFromAutoFavorites;
@property(nonatomic, readonly) _Bool hasVideo;
- (_Bool)isPaid;
- (_Bool)isANF;
@property(nonatomic, readonly) _Bool hasGlobalUserFeedback;
@property(nonatomic, readonly) double globalUserFeedback;
@property(nonatomic, readonly) NSArray *topicIDs;
@property(nonatomic, readonly) NSString *publisherID;
@property(nonatomic, readonly) unsigned long long halfLife;
@property(nonatomic, readonly) NSDate *publishDate;
@property(nonatomic, readonly) NSString *itemID;
@property(nonatomic, readonly) NSString *sourceFeedID;

@optional
@property(nonatomic, readonly) _Bool isFeatured;
@property(nonatomic, readonly) long long bodyTextLength;
- (_Bool)isBundlePaid;

// Remaining properties
@property(nonatomic, readonly) _Bool anf;
@property(nonatomic, readonly) _Bool bundlePaid;
@property(nonatomic, readonly) _Bool hiddenFromAutoFavorites;
@property(nonatomic, readonly) _Bool paid;
@end


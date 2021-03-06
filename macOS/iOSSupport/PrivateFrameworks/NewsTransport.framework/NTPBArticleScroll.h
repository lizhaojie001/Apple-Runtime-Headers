//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBAlternateHeadline, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBArticleScroll : PBCodable <NSCopying>
{
    NTPBAlternateHeadline *_alternateHeadline;
    NSString *_articleId;
    NSData *_articleSessionId;
    NSData *_articleViewingSessionId;
    NSData *_feedViewExposureId;
    NSMutableArray *_fractionalCohortMemberships;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_referencedArticleId;
    int _scrollHostViewType;
    NSString *_scrollVelocity;
    float _scrollingVelocity;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_verticalScrollPositionEnd;
    float _verticalScrollPositionEnding;
    NSString *_verticalScrollPositionStart;
    float _verticalScrollPositionStarting;
    BOOL _adSupportedChannel;
    struct {
        unsigned int scrollHostViewType:1;
        unsigned int scrollingVelocity:1;
        unsigned int verticalScrollPositionEnding:1;
        unsigned int verticalScrollPositionStarting:1;
        unsigned int adSupportedChannel:1;
    } _has;
}

+ (Class)fractionalCohortMembershipType;
- (void).cxx_destruct;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(retain, nonatomic) NTPBAlternateHeadline *alternateHeadline; // @synthesize alternateHeadline=_alternateHeadline;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(nonatomic) float scrollingVelocity; // @synthesize scrollingVelocity=_scrollingVelocity;
@property(nonatomic) float verticalScrollPositionEnding; // @synthesize verticalScrollPositionEnding=_verticalScrollPositionEnding;
@property(nonatomic) float verticalScrollPositionStarting; // @synthesize verticalScrollPositionStarting=_verticalScrollPositionStarting;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(nonatomic) BOOL adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *scrollVelocity; // @synthesize scrollVelocity=_scrollVelocity;
@property(retain, nonatomic) NSString *verticalScrollPositionEnd; // @synthesize verticalScrollPositionEnd=_verticalScrollPositionEnd;
@property(retain, nonatomic) NSString *verticalScrollPositionStart; // @synthesize verticalScrollPositionStart=_verticalScrollPositionStart;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasIssueExposureData;
@property(readonly, nonatomic) BOOL hasIssueViewData;
@property(readonly, nonatomic) BOOL hasIssueData;
@property(readonly, nonatomic) BOOL hasAlternateHeadline;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
@property(nonatomic) BOOL hasScrollingVelocity;
@property(nonatomic) BOOL hasVerticalScrollPositionEnding;
@property(nonatomic) BOOL hasVerticalScrollPositionStarting;
@property(readonly, nonatomic) BOOL hasSectionHeadlineId;
@property(nonatomic) BOOL hasAdSupportedChannel;
@property(readonly, nonatomic) BOOL hasFeedViewExposureId;
@property(readonly, nonatomic) BOOL hasScrollVelocity;
@property(readonly, nonatomic) BOOL hasVerticalScrollPositionEnd;
@property(readonly, nonatomic) BOOL hasVerticalScrollPositionStart;
@property(nonatomic) BOOL hasScrollHostViewType;
@property(nonatomic) int scrollHostViewType; // @synthesize scrollHostViewType=_scrollHostViewType;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property(readonly, nonatomic) BOOL hasArticleSessionId;
@property(readonly, nonatomic) BOOL hasReferencedArticleId;
@property(readonly, nonatomic) BOOL hasArticleId;

@end


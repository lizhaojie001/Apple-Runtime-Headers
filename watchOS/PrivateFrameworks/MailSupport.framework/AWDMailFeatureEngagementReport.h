//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MailSupport/NSCopying-Protocol.h>

@interface AWDMailFeatureEngagementReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _feature;
    int _filterStatus;
    int _inView;
    int _interactionGesture;
    int _sourceType;
    _Bool _fromSwipeMenu;
    _Bool _includeAttachments;
    _Bool _usedPrediction;
    struct {
        unsigned int timestamp:1;
        unsigned int feature:1;
        unsigned int filterStatus:1;
        unsigned int inView:1;
        unsigned int interactionGesture:1;
        unsigned int sourceType:1;
        unsigned int fromSwipeMenu:1;
        unsigned int includeAttachments:1;
        unsigned int usedPrediction:1;
    } _has;
}

@property(nonatomic) _Bool fromSwipeMenu; // @synthesize fromSwipeMenu=_fromSwipeMenu;
@property(nonatomic) _Bool usedPrediction; // @synthesize usedPrediction=_usedPrediction;
@property(nonatomic) _Bool includeAttachments; // @synthesize includeAttachments=_includeAttachments;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsInView:(id)arg1;
- (id)inViewAsString:(int)arg1;
@property(nonatomic) _Bool hasInView;
@property(nonatomic) int inView; // @synthesize inView=_inView;
@property(nonatomic) _Bool hasFromSwipeMenu;
@property(nonatomic) _Bool hasUsedPrediction;
@property(nonatomic) _Bool hasIncludeAttachments;
- (int)StringAsFilterStatus:(id)arg1;
- (id)filterStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasFilterStatus;
@property(nonatomic) int filterStatus; // @synthesize filterStatus=_filterStatus;
- (int)StringAsInteractionGesture:(id)arg1;
- (id)interactionGestureAsString:(int)arg1;
@property(nonatomic) _Bool hasInteractionGesture;
@property(nonatomic) int interactionGesture; // @synthesize interactionGesture=_interactionGesture;
- (int)StringAsSourceType:(id)arg1;
- (id)sourceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSourceType;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
- (int)StringAsFeature:(id)arg1;
- (id)featureAsString:(int)arg1;
@property(nonatomic) _Bool hasFeature;
@property(nonatomic) int feature; // @synthesize feature=_feature;
@property(nonatomic) _Bool hasTimestamp;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzFilters/NSCopying-Protocol.h>

@class NSNumber, NSString, QRectObject, QSizeObject;

@interface QFilterPDFX3Info : NSObject <NSCopying>
{
    BOOL _addTrimBox;
    BOOL _addBleedBox;
    BOOL _trapped;
    BOOL _flattenTransparency;
    QRectObject *_trimBox;
    QRectObject *_bleedBox;
    QSizeObject *_transparencyResolution;
    NSString *_outConditionID;
    NSString *_outCondition;
    NSString *_outConditionInfo;
    NSString *_registryName;
    NSNumber *_destProfile;
}

@property(copy) NSNumber *destProfile; // @synthesize destProfile=_destProfile;
@property(copy) NSString *registryName; // @synthesize registryName=_registryName;
@property(copy) NSString *outConditionInfo; // @synthesize outConditionInfo=_outConditionInfo;
@property(copy) NSString *outCondition; // @synthesize outCondition=_outCondition;
@property(copy) NSString *outConditionID; // @synthesize outConditionID=_outConditionID;
@property(retain) QSizeObject *transparencyResolution; // @synthesize transparencyResolution=_transparencyResolution;
@property(retain) QRectObject *bleedBox; // @synthesize bleedBox=_bleedBox;
@property(retain) QRectObject *trimBox; // @synthesize trimBox=_trimBox;
@property BOOL flattenTransparency; // @synthesize flattenTransparency=_flattenTransparency;
@property(getter=isTrapped) BOOL trapped; // @synthesize trapped=_trapped;
@property BOOL addBleedBox; // @synthesize addBleedBox=_addBleedBox;
@property BOOL addTrimBox; // @synthesize addTrimBox=_addTrimBox;
- (void)reset;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


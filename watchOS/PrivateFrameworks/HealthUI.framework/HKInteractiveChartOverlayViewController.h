//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKInteractiveChartViewController.h>

#import <HealthUI/HKInteractiveChartViewObserver-Protocol.h>

@class HKDisplayType, HKUIMetricColors, HKValueRange, NSMutableArray, NSMutableDictionary, NSString, UIColor;

@interface HKInteractiveChartOverlayViewController : HKInteractiveChartViewController <HKInteractiveChartViewObserver>
{
    HKDisplayType *_primaryDisplayType;
    int _displayMode;
    HKValueRange *_initialVisibleDateRange;
    HKUIMetricColors *_annotationDataSourceMetricColors;
    HKDisplayType *_overlayDisplayType;
    UIColor *_currentOverlayColor;
    NSMutableDictionary *_overlayChartCaches;
    NSMutableDictionary *_customNamedCaches;
    NSMutableArray *_cachedDataControllersWaitingForData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cachedDataControllersWaitingForData; // @synthesize cachedDataControllersWaitingForData=_cachedDataControllersWaitingForData;
@property(retain, nonatomic) NSMutableDictionary *customNamedCaches; // @synthesize customNamedCaches=_customNamedCaches;
@property(retain, nonatomic) NSMutableDictionary *overlayChartCaches; // @synthesize overlayChartCaches=_overlayChartCaches;
@property(retain, nonatomic) UIColor *currentOverlayColor; // @synthesize currentOverlayColor=_currentOverlayColor;
@property(retain, nonatomic) HKDisplayType *overlayDisplayType; // @synthesize overlayDisplayType=_overlayDisplayType;
@property(retain, nonatomic) HKUIMetricColors *annotationDataSourceMetricColors; // @synthesize annotationDataSourceMetricColors=_annotationDataSourceMetricColors;
@property(retain, nonatomic) HKValueRange *initialVisibleDateRange; // @synthesize initialVisibleDateRange=_initialVisibleDateRange;
@property(nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) HKDisplayType *primaryDisplayType; // @synthesize primaryDisplayType=_primaryDisplayType;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (id)lollipopExtensionColor;
- (id)lollipopAnnotationColor;
- (_Bool)_deliverCachedDataFromSource:(id)arg1 timeScope:(int)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_dataSourceForQuantityType:(id)arg1 timeScope:(int)arg2 customDataSource:(id)arg3;
- (id)_dataSourceForDistributionStyle:(int)arg1 timeScope:(int)arg2 namedPredicate:(id)arg3;
- (id)_overlayChartCacheForDataSource:(id)arg1 timeScope:(int)arg2;
- (_Bool)_displayTypeRequiresAverageAndDuration:(id)arg1;
- (id)_overlayChartCacheForDistributionStyle:(int)arg1 timeScope:(int)arg2 namedPredicate:(id)arg3;
- (void)_removeControllerWaitingForData:(id)arg1;
- (void)configureDisplayTypes:(id)arg1 timeScope:(int)arg2 stackOffset:(int)arg3;
- (id)visibleRangeForTimeScope:(int)arg1 proposedRange:(id)arg2;
- (id)makeAnnotationDataSource;
- (float)minimumHeightForChart;
- (void)_deliverOrWaitForDataSource:(id)arg1 timeScope:(int)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cachedDataForQuantityIdentifier:(id)arg1 timeScope:(int)arg2 startDate:(id)arg3 endDate:(id)arg4 cacheDataSource:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cachedDataForQuantityDistributionStyle:(int)arg1 timeScope:(int)arg2 startDate:(id)arg3 endDate:(id)arg4 namedPredicate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)displayTypeForQuantityIdentifier:(id)arg1 timeScope:(int)arg2 displayTypeController:(id)arg3 overlayColor:(id)arg4 cacheDataSource:(id)arg5 alternateLineSeries:(id)arg6 alternateFormatter:(id)arg7 seriesOptions:(int)arg8;
- (void)_modifyFormatter:(id)arg1 forTitleOptions:(int)arg2;
- (id)displayTypeForQuantityDistributionStyle:(int)arg1 timeScope:(int)arg2 overlayColor:(id)arg3 options:(int)arg4 namedPredicate:(id)arg5;
- (void)clearOverlayDisplayType;
- (void)installOverlayDisplayType:(id)arg1;
- (void)_commonInitializationWithDisplayType:(id)arg1;
- (id)initWithFixedRange:(id)arg1 healthStore:(id)arg2 primaryDisplayType:(id)arg3 unitPreferenceController:(id)arg4 dateCache:(id)arg5 chartDataCacheController:(id)arg6 selectedTimeScopeController:(id)arg7 initialXValue:(id)arg8;
- (id)initWithHealthStore:(id)arg1 primaryDisplayType:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 initialXValue:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


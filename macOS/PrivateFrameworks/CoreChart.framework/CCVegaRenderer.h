//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, CCVegaCARenderer, CCVegaCGCanvas, CCVegaHTMLElement, CCVegaWorker, CCViewRendererDelegate, JSValue, NSArray, NSMutableArray, NSString;
@protocol CCVegaRendererDelegate;

@interface CCVegaRenderer : NSObject
{
    NSArray *_data;
    double _width;
    double _height;
    CALayer *_caLayer;
    unsigned int rendererType;
    CCVegaWorker *worker;
    NSString *spec;
    NSString *config;
    CCVegaCGCanvas *vegaCanvas;
    CCVegaHTMLElement *container;
    double scaleFactor;
    CCVegaCARenderer *CARenderer;
    CCViewRendererDelegate *viewDelegate;
    NSMutableArray *eventQueue;
    JSValue *renderer;
    struct CGImage *currentCGImage;
    NSObject<CCVegaRendererDelegate> *delegate;
}

- (void).cxx_destruct;
@property __weak NSObject<CCVegaRendererDelegate> *delegate; // @synthesize delegate;
@property struct CGImage *currentCGImage; // @synthesize currentCGImage;
@property(retain, nonatomic) JSValue *renderer; // @synthesize renderer;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue;
@property(retain) CCViewRendererDelegate *viewDelegate; // @synthesize viewDelegate;
@property(retain) CCVegaCARenderer *CARenderer; // @synthesize CARenderer;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor;
@property(retain, nonatomic) CCVegaHTMLElement *container; // @synthesize container;
@property(retain, nonatomic) CCVegaCGCanvas *vegaCanvas; // @synthesize vegaCanvas;
@property(retain, nonatomic) NSString *config; // @synthesize config;
@property(retain, nonatomic) NSString *spec; // @synthesize spec;
@property(retain) CCVegaWorker *worker; // @synthesize worker;
@property unsigned int rendererType; // @synthesize rendererType;
- (struct CGColor *)newColorFromCSSString:(id)arg1 alpha:(double)arg2;
- (struct CGColor *)newColorFromCSSString:(id)arg1;
- (void)loadState:(id)arg1;
- (id)saveStateWithNamedDatasets:(id)arg1;
- (void)removeListener:(id)arg1 fromSignalWithName:(id)arg2;
- (id)addListener:(CDUnknownBlockType)arg1 toSignalWithName:(id)arg2;
- (void)setSignalWithName:(id)arg1 toValue:(id)arg2;
- (id)getSignalWithName:(id)arg1;
- (void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingIDs:(id)arg3;
- (void)changeDefaultDatasetByInserting:(id)arg1 removingIDs:(id)arg2;
- (void)setNamedDataset:(id)arg1 rows:(id)arg2;
- (void)setDefaultDataset:(id)arg1;
@property(retain, nonatomic) NSArray *data;
- (void)processEventsInQueue;
- (void)waitForRenderingThread;
- (void)rerenderEntireChart;
- (void)triggerEventWithType:(id)arg1 event:(id)arg2;
- (struct CGImage *)CGImage;
- (struct CGImage *)currentBitmap;
- (id)cursor;
- (double)height;
- (double)width;
- (id)vegaContext;
- (void)setSize:(struct CGSize)arg1;
- (void)waitForRunAsync;
- (void)runAsyncWithCallback:(CDUnknownBlockType)arg1;
- (void)runAsync;
- (void)fireUpdateEvent;
- (void)prepareWorker;
@property(retain) CALayer *caLayer;
- (void)dealloc;
- (id)initWithSpec:(id)arg1 config:(id)arg2 options:(id)arg3;
- (id)initWithSpec:(id)arg1 config:(id)arg2;
- (id)init;

@end


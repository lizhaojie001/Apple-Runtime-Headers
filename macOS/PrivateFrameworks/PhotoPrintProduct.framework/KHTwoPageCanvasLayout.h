//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoPrintProduct/KHCanvasLayout.h>

@class NSMapTable;

@interface KHTwoPageCanvasLayout : KHCanvasLayout
{
    NSMapTable *_sizeConstraintsByLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *sizeConstraintsByLayout; // @synthesize sizeConstraintsByLayout=_sizeConstraintsByLayout;
- (void)cleanupConstraints;
- (id)constraintsForCanvasView:(id)arg1;
- (void)setLayouts:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithLayouts:(id)arg1;

@end


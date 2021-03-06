//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class IKComposer;

__attribute__((visibility("hidden")))
@interface IKSelectionLayer : CALayer
{
    IKComposer *_composer;
}

+ (double)fadeDuration;
+ (id)addSelectionLayer:(id)arg1;
+ (BOOL)registerLayerWithView:(id)arg1;
- (struct CGImage *)createNewMaskedImage:(struct CGImage *)arg1;
- (void)addCursorRects;
- (struct CGRect)selectionRect;
- (void)toolmodeWillChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)setSelectionRect:(struct CGRect)arg1;
- (void)selectAll;
- (void)ikMouseDown:(id)arg1;
- (void)mouseDownOutsideSelection:(id)arg1;
- (BOOL)ikKeyDown:(id)arg1;
- (void)willBeRemovedFromSuperlayer;
- (void)clearSelection;
- (void)dealloc;
- (void)selectLayer:(id)arg1 extendSelection:(BOOL)arg2;
- (void)createSelectionWithEvent:(id)arg1;
- (void)doRemoveSelection:(id)arg1;
- (void)doAddSelection:(id)arg1 select:(BOOL)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1 drawSelection:(BOOL)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)setup:(id)arg1;

@end


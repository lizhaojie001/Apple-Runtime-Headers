//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKImageCell;

@interface IKImageFlowCell : NSObject
{
    IKImageCell *_imageCell;
    float _position[3];
    float _rotation;
    double _aspectRatio;
    float _fog;
    float _importFactor;
    unsigned int _highlightTested:1;
    unsigned int _hasHighlight:1;
    unsigned int _sourceRespondsToDimmed:1;
    unsigned int _inlinePreview:1;
}

- (unsigned long long)indexOfRepresentedItem;
- (id)representedItem;
- (BOOL)draw;
- (int)_sizeToDraw;
- (void)drawCenteredIcon:(id)arg1 inRect:(struct CGRect)arg2 reflection:(BOOL)arg3;
- (void)drawPlaceHolder:(BOOL)arg1 inRect:(struct CGRect)arg2 reflection:(BOOL)arg3;
- (void)drawHighlight:(BOOL)arg1 inRect:(struct CGRect)arg2;
- (void)drawImage:(id)arg1 inRect:(struct CGRect)arg2 forAA:(BOOL)arg3 reflection:(BOOL)arg4 alpha:(float)arg5 fog:(float)arg6 baseline:(float)arg7;
- (void)drawImage:(id)arg1 inRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3 alpha:(float)arg4 fog:(float)arg5 premultiplied:(BOOL)arg6 gradient:(BOOL)arg7 interpolate:(BOOL)arg8;
- (float)toplineForImage:(id)arg1 renderSize:(struct CGSize)arg2 context:(id)arg3;
- (float)baselineForImage:(id)arg1 renderSize:(struct CGSize)arg2 context:(id)arg3;
- (BOOL)inlinePreviewMode;
- (void)setInlinePreviewMode:(BOOL)arg1;
- (void)setImportFactor:(float)arg1;
- (float)importFactor;
- (void)setFog:(float)arg1;
- (float)fog;
- (void)setRotation:(float)arg1;
- (float)rotation;
- (float *)position;
- (void)setPositionX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (struct CGRect)placeHolderFrame;
- (struct CGRect)imageFrame;
- (struct CGRect)_imageFrame:(BOOL)arg1;
- (double)aspectRatio;
- (void)didRecoverImageFromCache;
- (void)imageDidChange;
- (void)datasourceItemDidChange;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end


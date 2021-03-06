//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSColor;

@interface PXViewSpec : NSObject <NSCopying>
{
    BOOL _hidden;
    NSColor *_backgroundColor;
    NSColor *_selectionHighlightColor;
    NSColor *_borderColor;
    double _borderWidth;
    double _cornerRadius;
    double _displayScale;
    long long _compositingFilterType;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long compositingFilterType; // @synthesize compositingFilterType=_compositingFilterType;
@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) NSColor *selectionHighlightColor; // @synthesize selectionHighlightColor=_selectionHighlightColor;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end


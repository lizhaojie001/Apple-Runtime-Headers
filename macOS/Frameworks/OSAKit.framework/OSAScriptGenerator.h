//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, OSAScriptElement;

@interface OSAScriptGenerator : NSObject
{
    OSAScriptElement *_element;
    NSMutableString *_text;
    BOOL _needsGeneration;
}

+ (id)generatorWithElement:(id)arg1;
- (id)text;
- (BOOL)generate;
- (void)setNeedsGeneration:(BOOL)arg1;
- (BOOL)needsGeneration;
- (void)setElement:(id)arg1;
- (id)element;
- (void)dealloc;
- (id)initWithElement:(id)arg1;
- (id)init;

@end


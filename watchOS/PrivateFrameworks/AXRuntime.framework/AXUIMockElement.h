//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXRuntime/AXUIElement.h>

#import <AXRuntime/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface AXUIMockElement : AXUIElement <NSCopying>
{
    NSMutableDictionary *_writableAttributes;
    NSMutableDictionary *_performActionLog;
    _Bool _usesCarriageReturnAsLinesSeparator;
    NSMutableDictionary *_attributes;
    CDUnknownBlockType _handleActionBlock;
    CDUnknownBlockType _cacheUpdatedCallback;
}

+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (void)applyElementAttributeCacheScheme:(unsigned int)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cacheUpdatedCallback; // @synthesize cacheUpdatedCallback=_cacheUpdatedCallback;
@property(copy, nonatomic) CDUnknownBlockType handleActionBlock; // @synthesize handleActionBlock=_handleActionBlock;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) _Bool usesCarriageReturnAsLinesSeparator; // @synthesize usesCarriageReturnAsLinesSeparator=_usesCarriageReturnAsLinesSeparator;
- (unsigned int)hash;
- (unsigned int)_lineNumberForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForLineNumber:(unsigned int)arg1;
- (void)setAXAttribute:(long)arg1 withObject:(id)arg2 synchronous:(_Bool)arg3;
- (void)setAXAttribute:(long)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(long)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(long)arg1 withUIElementArray:(id)arg2;
- (void)setAXAttribute:(long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(long)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(long)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(long)arg1 withNumber:(id)arg2;
- (void)setAXAttribute:(long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long)arg1 withLong:(long)arg2;
- (void)setAXAttribute:(long)arg1 withString:(id)arg2;
- (void)setAXAttribute:(long)arg1 withBOOL:(_Bool)arg2;
- (void)updateCache:(long)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (int)pid;
- (_Bool)isValidForApplication:(id)arg1;
- (_Bool)isValid;
- (id)uiElementsWithAttribute:(long)arg1 parameter:(void *)arg2 fetchAttributes:(_Bool)arg3;
- (id)nextElementsWithCount:(unsigned int)arg1;
- (id)previousElementsWithCount:(unsigned int)arg1;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2;
- (_Bool)performAXAction:(int)arg1;
- (id)uiElementsWithAttribute:(long)arg1 parameter:(void *)arg2;
- (id)uiElementsWithAttribute:(long)arg1;
- (id)cachedAttributes;
- (id)objectWithAXAttribute:(long)arg1 parameter:(void *)arg2;
- (void)fillStaticCache;
- (unsigned int)arrayCountWithAXAttribute:(long)arg1;
- (id)uiElementArrayForAXAttribute:(long)arg1;
- (id)urlWithAXAttribute:(long)arg1;
- (struct CGRect)rectWithAXAttribute:(long)arg1;
- (struct CGPath *)pathWithAXAttribute:(long)arg1;
- (struct _NSRange)rangeWithAXAttribute:(long)arg1;
- (struct CGSize)sizeWithAXAttribute:(long)arg1;
- (struct CGPoint)pointWithAXAttribute:(long)arg1;
- (id)numberWithAXAttribute:(long)arg1;
- (long)longWithAXAttribute:(long)arg1;
- (float)floatWithAXAttribute:(long)arg1;
- (_Bool)boolWithAXAttribute:(long)arg1;
- (id)objectWithAXAttribute:(long)arg1;
- (id)stringWithAXAttribute:(long)arg1;
- (id)arrayWithAXAttribute:(long)arg1;
- (void)setValue:(id)arg1 forAXParameterizedAttribute:(long)arg2;
- (void)setValue:(id)arg1 forAXAttribute:(long)arg2;
- (_Bool)canPerformAXAction:(int)arg1;
- (id)uiElementWithAXAttribute:(long)arg1;
- (_Bool)canSetAXAttribute:(long)arg1;
- (void)setWritable:(_Bool)arg1 forAXAttribute:(long)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)disableCache;
- (void)enableCache:(_Bool)arg1;
- (id)_valueForAttribute:(long)arg1;
- (id)description;
- (id)performBlockWhileLoggingPerformedActions:(CDUnknownBlockType)arg1;
- (id)endLoggingActions;
- (void)startLoggingActions;
- (id)visibleElements;
- (struct __AXUIElement *)axElement;
- (_Bool)isMockElement;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


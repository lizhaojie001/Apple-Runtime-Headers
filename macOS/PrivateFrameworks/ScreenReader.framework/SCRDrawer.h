//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

__attribute__((visibility("hidden")))
@interface SCRDrawer : SCRMapElement
{
    long long _windowEdge;
}

- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)isContainerElement;
- (struct CGRect)bounds;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end


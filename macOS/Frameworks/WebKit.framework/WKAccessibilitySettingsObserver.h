//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKAccessibilitySettingsObserver : NSObject
{
    struct WebViewImpl *_impl;
}

- (void)_settingsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithImpl:(struct WebViewImpl *)arg1;

@end


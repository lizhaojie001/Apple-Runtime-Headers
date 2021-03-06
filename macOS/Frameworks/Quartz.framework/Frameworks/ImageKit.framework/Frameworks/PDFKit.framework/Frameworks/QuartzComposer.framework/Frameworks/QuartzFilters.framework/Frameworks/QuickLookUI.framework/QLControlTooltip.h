//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface QLControlTooltip : NSWindow
{
    NSWindow *_parentWindow;
    NSTextField *_textField;
    struct CGRect _anchorRect;
    BOOL _verticallyPositioned;
}

+ (id)tooltipWindow;
@property BOOL verticallyPositioned; // @synthesize verticallyPositioned=_verticallyPositioned;
@property NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (BOOL)accessibilityIsIgnored;
@property struct CGRect anchorRect;
@property(copy) NSString *string;
- (void)_updateWindowFrame;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end


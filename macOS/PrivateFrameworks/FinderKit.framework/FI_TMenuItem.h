//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenuItem.h>

__attribute__((visibility("hidden")))
@interface FI_TMenuItem : NSMenuItem
{
    function_b1fce659 _actionToInvoke;
    function_29255342 _validator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) function_29255342 validator; // @synthesize validator=_validator;
@property(nonatomic) function_b1fce659 actionToInvoke; // @synthesize actionToInvoke=_actionToInvoke;
- (void)invokeGlue:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)initWithTitle:(id)arg1 keyEquivalent:(id)arg2 actionToInvoke:(const function_b1fce659 *)arg3 validator:(const function_29255342 *)arg4;
- (id)initWithTitle:(id)arg1 keyEquivalent:(id)arg2 actionToInvoke:(const function_b1fce659 *)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PUICTableViewNotch : NSObject
{
    _Bool _added;
    unsigned int _behavior;
    CDStruct_b31d0695 _notch;
}

@property _Bool added; // @synthesize added=_added;
@property unsigned int behavior; // @synthesize behavior=_behavior;
@property CDStruct_b31d0695 notch; // @synthesize notch=_notch;
- (id)description;
- (_Bool)isBehaviorAndNotchEqual:(id)arg1;
- (id)initWithNotch:(CDStruct_b31d0695)arg1 behavior:(unsigned int)arg2;

@end


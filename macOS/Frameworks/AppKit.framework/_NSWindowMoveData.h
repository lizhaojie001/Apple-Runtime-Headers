//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSWindowMoveData : NSObject
{
    struct CGPoint startingOrigin;
    struct CGPoint startingEventLocation;
    struct CGPoint lastEventLocation;
    struct CGPoint newEventLocation;
    struct CGSize offset;
    struct CGSize catchupSize;
}

@property struct CGSize catchupSize; // @synthesize catchupSize;
@property struct CGPoint newEventLocation; // @synthesize newEventLocation;
@property struct CGSize offset; // @synthesize offset;
@property struct CGPoint lastEventLocation; // @synthesize lastEventLocation;
@property struct CGPoint startingEventLocation; // @synthesize startingEventLocation;
@property struct CGPoint startingOrigin; // @synthesize startingOrigin;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIViewControllerTransitionCoordinatorContextDescription : NSObject <NSSecureCoding>
{
    BOOL _animated;
    BOOL _interactive;
    BOOL _cancelled;
    double _transitionDuration;
    double _percentComplete;
    double _completionVelocity;
    long long _completionCurve;
    long long _toOrientation;
    long long _fromOrientation;
    struct CGAffineTransform _targetTransform;
}

+ (BOOL)supportsSecureCoding;
+ (id)descriptionForTransitionCoordinatorContext:(id)arg1;
@property(nonatomic) long long fromOrientation; // @synthesize fromOrientation=_fromOrientation;
@property(nonatomic) long long toOrientation; // @synthesize toOrientation=_toOrientation;
@property(nonatomic) struct CGAffineTransform targetTransform; // @synthesize targetTransform=_targetTransform;
@property(nonatomic) long long completionCurve; // @synthesize completionCurve=_completionCurve;
@property(nonatomic) double completionVelocity; // @synthesize completionVelocity=_completionVelocity;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isInteractive) BOOL interactive; // @synthesize interactive=_interactive;
@property(nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


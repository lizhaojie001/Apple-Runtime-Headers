//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPerspectiveRotate : CIFilter
{
    // Error parsing type: {float3x3="columns"[3]}, name: K
    // Error parsing type: {float3x3="columns"[3]}, name: invK
    CIImage *inputImage;
    NSNumber *inputFocalLength;
    NSNumber *inputPitch;
    NSNumber *inputYaw;
    NSNumber *inputRoll;
}

+ (id)customAttributes;
- (id).cxx_construct;
@property(copy, nonatomic) NSNumber *inputRoll; // @synthesize inputRoll;
@property(copy, nonatomic) NSNumber *inputYaw; // @synthesize inputYaw;
@property(copy, nonatomic) NSNumber *inputPitch; // @synthesize inputPitch;
@property(copy, nonatomic) NSNumber *inputFocalLength; // @synthesize inputFocalLength;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
// Error parsing type for property outputTransform:
// Property attributes: T{?=[3]},R,N

- (void)computeCameraIntrinsics;

@end


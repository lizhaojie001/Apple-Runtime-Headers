//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@interface MTLRenderPipelineColorAttachmentDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long alphaBlendOperation; // @dynamic alphaBlendOperation;
@property(nonatomic, getter=isBlendingEnabled) _Bool blendingEnabled; // @dynamic blendingEnabled;
@property(nonatomic) unsigned long long destinationAlphaBlendFactor; // @dynamic destinationAlphaBlendFactor;
@property(nonatomic) unsigned long long destinationRGBBlendFactor; // @dynamic destinationRGBBlendFactor;
@property(nonatomic) unsigned long long pixelFormat; // @dynamic pixelFormat;
@property(nonatomic) unsigned long long rgbBlendOperation; // @dynamic rgbBlendOperation;
@property(nonatomic) unsigned long long sourceAlphaBlendFactor; // @dynamic sourceAlphaBlendFactor;
@property(nonatomic) unsigned long long sourceRGBBlendFactor; // @dynamic sourceRGBBlendFactor;
@property(nonatomic) unsigned long long writeMask; // @dynamic writeMask;

@end


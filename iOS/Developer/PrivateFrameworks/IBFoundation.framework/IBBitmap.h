//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSData, NSString;

@interface IBBitmap : NSObject <IBBinaryArchiving>
{
    NSData *_data;
    unsigned int _bitmapInfo;
    long long _pixelWidth;
    long long _pixelHeight;
    long long _bytesPerRow;
    long long _componentsPerPixel;
    long long _bitsPerComponent;
}

+ (id)bitmapWith2BitARGBPDFData:(id)arg1 pixelSize:(struct CGSize)arg2 scale:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)bitmapWith32BitARGBPixelWidth:(long long)arg1 pixelHeight:(long long)arg2 colorSpace:(struct CGColorSpace *)arg3 byDrawingIntoContext:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(readonly) unsigned int bitmapInfo; // @synthesize bitmapInfo=_bitmapInfo;
@property(readonly) long long bitsPerComponent; // @synthesize bitsPerComponent=_bitsPerComponent;
@property(readonly) long long componentsPerPixel; // @synthesize componentsPerPixel=_componentsPerPixel;
@property(readonly) long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly) long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly) long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
- (struct CGImage *)imageRefWithColorSpace:(struct CGColorSpace *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithPixelWidth:(long long)arg1 pixelHeight:(long long)arg2 bitsPerComponent:(long long)arg3 componentsPerPixel:(long long)arg4 bytesPerRow:(long long)arg5 bitmapInfo:(unsigned int)arg6 data:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


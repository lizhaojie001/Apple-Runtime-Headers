//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSAffineTransform, NSArray, NSDictionary, QCImageBuffer, QCImageManager, QCImagePixelBuffer, QCImageTextureBuffer, QCPixelFormat;

@protocol QCImageBufferConverter
+ (id)converterForImageManager:(QCImageManager *)arg1;
- (QCImageTextureBuffer *)createTextureBufferFromImageBuffer:(QCImageBuffer *)arg1 withFormat:(QCPixelFormat *)arg2 target:(unsigned int)arg3 transformation:(NSAffineTransform *)arg4 bounds:(struct CGRect)arg5 colorSpace:(struct CGColorSpace *)arg6 options:(NSDictionary *)arg7;
- (NSArray *)supportedTextureBufferFormatsForFormat:(QCPixelFormat *)arg1;
- (QCImagePixelBuffer *)createPixelBufferFromImageBuffer:(QCImageBuffer *)arg1 withFormat:(QCPixelFormat *)arg2 transformation:(NSAffineTransform *)arg3 bounds:(struct CGRect)arg4 colorSpace:(struct CGColorSpace *)arg5 options:(NSDictionary *)arg6;
- (NSArray *)supportedPixelBufferFormatsForFormat:(QCPixelFormat *)arg1;
- (BOOL)supportsColorMatching;
- (BOOL)supportsTransformation;
- (BOOL)supportsCropping;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (PRLikenessView)
+ (id)pr_imageWithCGImage:(struct CGImage *)arg1 cropRect:(struct CGRect)arg2;
+ (id)pr_imageWithCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
+ (id)pr_imageWithCGImage:(struct CGImage *)arg1;
- (struct CGImage *)pr_imageRef;
@end


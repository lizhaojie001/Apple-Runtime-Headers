//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/FI_TImageView.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface FI_TTagCircleImageView : FI_TImageView
{
    struct TNSRef<NSNumber, void> _colorNumber;
    struct TKeyValueBinder _colorNumberBinder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (void)updateImage;
- (void)setBackgroundStyle:(long long)arg1;
- (long long)backgroundStyle;
@property(nonatomic) NSNumber *colorNumber; // @dynamic colorNumber;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end


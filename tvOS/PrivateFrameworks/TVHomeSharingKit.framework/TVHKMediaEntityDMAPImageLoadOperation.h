//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVHomeSharingKit/TVHKImageLoadParamsOperation.h>

@class TVHKMediaServerRequestOperation;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntityDMAPImageLoadOperation : TVHKImageLoadParamsOperation
{
    _Bool _imageWillBeCropped;
    unsigned long long _DAAPDatabaseID;
    unsigned long long _DPAPDatabaseID;
    TVHKMediaServerRequestOperation *_imageRequestOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TVHKMediaServerRequestOperation *imageRequestOperation; // @synthesize imageRequestOperation=_imageRequestOperation;
@property(nonatomic) _Bool imageWillBeCropped; // @synthesize imageWillBeCropped=_imageWillBeCropped;
@property(nonatomic) unsigned long long DPAPDatabaseID; // @synthesize DPAPDatabaseID=_DPAPDatabaseID;
@property(nonatomic) unsigned long long DAAPDatabaseID; // @synthesize DAAPDatabaseID=_DAAPDatabaseID;
- (void)_handleResponse:(id)arg1;
- (id)_mediaEntityImageLoadParams;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 DAAPDatabaseID:(unsigned long long)arg4 DPAPDatabaseID:(unsigned long long)arg5;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;

@end


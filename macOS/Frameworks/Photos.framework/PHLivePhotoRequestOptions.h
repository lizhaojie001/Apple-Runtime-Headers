//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@interface PHLivePhotoRequestOptions : NSObject <NSCopying>
{
    BOOL _networkAccessAllowed;
    long long _version;
    long long _deliveryMode;
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(nonatomic) long long deliveryMode; // @synthesize deliveryMode=_deliveryMode;
@property(nonatomic) long long version; // @synthesize version=_version;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


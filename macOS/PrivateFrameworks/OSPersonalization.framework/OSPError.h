//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OSPError : NSObject
{
}

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 underlyingPOSIXErrorCode:(long long)arg2;
+ (id)errorWithCode:(long long)arg1 underlyingRestoreErrorCode:(long long)arg2 userInfo:(id)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3;
+ (id)localizedInternalRecoverySuggestionForErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)localizedDescriptionForErrorCode:(long long)arg1;

@end


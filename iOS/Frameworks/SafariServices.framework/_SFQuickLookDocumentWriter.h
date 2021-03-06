//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _SFQuickLookDocument;
@protocol OS_dispatch_queue;

@interface _SFQuickLookDocumentWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_filePathAccessedOnDispatchQueue;
    _Bool _hasFinishedWriting;
    _SFQuickLookDocument *_quickLookDocument;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasFinishedWriting; // @synthesize hasFinishedWriting=_hasFinishedWriting;
@property(readonly, nonatomic) _SFQuickLookDocument *quickLookDocument; // @synthesize quickLookDocument=_quickLookDocument;
- (void)writeDataAndClose:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFileName:(id)arg1 uti:(id)arg2;
@property(copy, nonatomic) NSString *filePathAccessedOnDispatchQueue;

@end


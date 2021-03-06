//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding>
{
    ObjectIdentifier_b2f7915a _pageProxyID;
    ObjectIdentifier_8136369e _webPageID;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
@property(readonly, nonatomic, getter=_webPageID) ObjectIdentifier_8136369e webPageID; // @synthesize webPageID=_webPageID;
@property(readonly, nonatomic, getter=_pageProxyID) ObjectIdentifier_b2f7915a pageProxyID; // @synthesize pageProxyID=_pageProxyID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithPageProxyID:(ObjectIdentifier_b2f7915a)arg1 andWebPageID:(ObjectIdentifier_8136369e)arg2;
- (id)_initWithPage:(struct WebPage *)arg1;
- (id)_initWithPageProxy:(struct WebPageProxy *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSString, SKUIURL, SKUIURLResolver, UIViewController;

@protocol SKUIURLResolverDelegate <NSObject>
- (void)URLResolver:(SKUIURLResolver *)arg1 showURL:(SKUIURL *)arg2 withTabIdentifier:(NSString *)arg3;
- (void)URLResolver:(SKUIURLResolver *)arg1 showTransientViewController:(UIViewController *)arg2;
- (UIViewController *)presentationViewControllerForURLResolver:(SKUIURLResolver *)arg1;

@optional
- (_Bool)URLResolver:(SKUIURLResolver *)arg1 shouldPerformDefaultActionForURL:(SKUIURL *)arg2;
- (void)URLResolver:(SKUIURLResolver *)arg1 didFinishWithResult:(_Bool)arg2;
@end


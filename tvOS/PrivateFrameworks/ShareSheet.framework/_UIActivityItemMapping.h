//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _UIActivityItemMapping : NSObject
{
}

+ (id)_openURLAnnotationForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_attachmentNameForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_thumbnailImageDataForActivityItem:(id)arg1 thumbnailSize:(struct CGSize)arg2 activityType:(id)arg3;
+ (id)_thumbnailImageForActivityItem:(id)arg1 thumbnailSize:(struct CGSize)arg2 activityType:(id)arg3;
+ (id)_dataTypeIdentifierForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_subjectForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_itemProviderForActivityItem:(id)arg1 typeIdentifier:(id)arg2 thumbnailSize:(struct CGSize)arg3 activityType:(id)arg4;
+ (id)_activityViewControllerForActivityItem:(id)arg1;
+ (void)_clearActivityItems:(id)arg1;
+ (void)_addActivityItem:(id)arg1 activityViewController:(id)arg2 originalActivityItem:(id)arg3;
+ (id)_activeActivityViewControllers;
+ (void)_removeFromActiveActivityViewControllers:(id)arg1;
+ (void)_addToActiveActivityViewControllers:(id)arg1;

@end


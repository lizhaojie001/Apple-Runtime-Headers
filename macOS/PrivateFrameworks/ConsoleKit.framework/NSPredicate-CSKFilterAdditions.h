//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (CSKFilterAdditions)
+ (void)_csk_composeFormatsAndArgumentsForFilters:(id)arg1 mapping:(Class)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_csk_joinFormatsAndArgumentsForBundledFormats:(id)arg1 bundledArguments:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_csk_bundleFormatsAndArgumentsForFilters:(id)arg1 mapping:(Class)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_csk_associatedFiltersForFilterTypeAny:(id)arg1;
+ (id)_csk_bundleKeyForFilter:(id)arg1;
+ (long long)_csk_comparisonTypeFromBundleKey:(id)arg1;
+ (BOOL)_csk_needExclusionForComparisonType:(long long)arg1;
+ (id)_csk_exclusionPrefixTermForComparisonType:(long long)arg1;
+ (id)_csk_comparisonTermForEmptyValueAndComparisonType:(long long)arg1;
+ (id)_csk_comparisonTermForComparisonType:(long long)arg1;
+ (id)_csk_joinFormats:(id)arg1 usingLogicalAND:(BOOL)arg2;
+ (id)csk_predicateFromFilters:(id)arg1 mapping:(Class)arg2;
@end


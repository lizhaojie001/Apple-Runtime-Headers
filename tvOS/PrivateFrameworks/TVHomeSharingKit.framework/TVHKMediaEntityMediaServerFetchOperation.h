//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVHomeSharingKit/TVHKMediaEntityFetchOperation.h>

@class NSSet, NSString, TVHKMediaEntityKind, TVHKMediaServerRequestOperation, TVHSMediaServerRequest;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntityMediaServerFetchOperation : TVHKMediaEntityFetchOperation
{
    _Bool _requestSortAscendingArgument;
    NSString *_requestSortArgument;
    NSSet *_requestSortDMAPCodeNames;
    NSString *_requestQueryArgument;
    TVHSMediaServerRequest *_mediaServerRequest;
    TVHKMediaEntityKind *_mediaEntityKind;
    TVHKMediaServerRequestOperation *_mediaServerRequestOperation;
}

+ (id)_stringQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 stringValue:(id)arg3;
+ (id)_numericQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 numberValue:(id)arg3;
+ (id)_stringQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3;
+ (id)_dateQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3;
+ (id)_numericQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3;
+ (id)_booleanQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3;
+ (id)_sortHeadersFromDMAPEntities:(id)arg1;
+ (unsigned long long)_responseTypeFromEntityResponseType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TVHKMediaServerRequestOperation *mediaServerRequestOperation; // @synthesize mediaServerRequestOperation=_mediaServerRequestOperation;
@property(retain, nonatomic) TVHKMediaEntityKind *mediaEntityKind; // @synthesize mediaEntityKind=_mediaEntityKind;
@property(retain, nonatomic) TVHSMediaServerRequest *mediaServerRequest; // @synthesize mediaServerRequest=_mediaServerRequest;
@property(copy, nonatomic) NSString *requestQueryArgument; // @synthesize requestQueryArgument=_requestQueryArgument;
@property(copy, nonatomic) NSSet *requestSortDMAPCodeNames; // @synthesize requestSortDMAPCodeNames=_requestSortDMAPCodeNames;
@property(nonatomic) _Bool requestSortAscendingArgument; // @synthesize requestSortAscendingArgument=_requestSortAscendingArgument;
@property(copy, nonatomic) NSString *requestSortArgument; // @synthesize requestSortArgument=_requestSortArgument;
- (id)_requestMetatdaArgument;
- (id)_DMAPCodeNamesForAttribute:(id)arg1;
- (id)_requestIndexArgument;
- (id)_queryTermForComparisonPredicate:(id)arg1;
- (id)_queryTermForCompoundPredicate:(id)arg1 unhandledPredicate:(id *)arg2;
- (id)_queryTermForPredicate:(id)arg1 unhandledPredicate:(id *)arg2;
- (void)_processPredicate;
- (id)_requestSortArgumentForSortDescriptor:(id)arg1;
- (void)_processSortDescriptors;
- (id)_mediaEntityFetchResponseWithResponseType:(unsigned long long)arg1 mediaEntities:(id)arg2 sortHeaders:(id)arg3 deletedMediaEntityIdentifiers:(id)arg4;
- (id)_deletedEntityIdentifiersFromDeletedEntityNonPersistentIDs:(id)arg1;
- (void)_handleMediaServerResponse:(id)arg1 forRequest:(id)arg2;
- (void)_fetchMediaEntities;
- (id)_mediaEntitiesFromDMAPEntities:(id)arg1 mediaEntityServer:(id)arg2;
- (id)_mediaServerRequest;
- (id)_mediaEntityKind;
- (void)cancel;
- (void)executionDidBegin;

@end


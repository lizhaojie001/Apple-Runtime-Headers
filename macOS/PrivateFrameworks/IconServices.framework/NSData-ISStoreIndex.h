//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (ISStoreIndex)
+ (id)_ISStoreIndex_mappedDataWithURL:(id)arg1;
+ (id)_ISMutableStoreIndex_mappedDataWithURL:(id)arg1;
+ (id)_ISMutableStoreIndex_mappedDataWithCapacity:(unsigned long long)arg1;
+ (id)_ISMutableStoreIndex_mappedDataWithSize:(unsigned long long)arg1;
+ (id)__is__dataWithContentsOfURL:(id)arg1;
+ (id)__is__bookmarkDataWithContentsOfURL:(id)arg1;
- (BOOL)_ISMutableStoreIndex_makeBackedByFileAtURL:(id)arg1;
- (BOOL)_ISStoreIndex_enumerateValuesForKey:(unsigned long long)arg1 bock:(CDUnknownBlockType)arg2;
- (void)_ISStoreIndex_enumerateValuesWithBock:(CDUnknownBlockType)arg1;
- (unsigned int)_ISStoreIndex_nodeIndexForKey:(unsigned long long)arg1;
- (CDStruct_155cdb8f *)_ISStoreIndex_nodeAtIndex:(unsigned int)arg1;
- (CDStruct_155cdb8f *)_ISStoreIndex_nodes;
- (unsigned int *)_ISStoreIndex_hashTable;
- (BOOL)_ISStoreIndex_isValid;
- (CDStruct_00287ae1 *)_ISStoreIndex_hashTableHeader;
- (BOOL)_ISMutableStoreIndex_addBlob:(CDUnion_698d0922)arg1 forKey:(unsigned long long)arg2;
- (BOOL)_ISMutableStoreIndex_addValue:(CDStruct_be136439 *)arg1 forKey:(unsigned long long)arg2;
- (BOOL)_ISStoreIndex_setNodeIndex:(unsigned int)arg1 forKey:(unsigned long long)arg2;
- (void)_ISStoreIndex_enumerateBlobsWithBock:(CDUnknownBlockType)arg1;
- (id)_ISStoreIndex_blobDataForID:(CDUnion_698d0922)arg1;
- (CDStruct_31b2f3f3 *)_ISStoreIndex_blobForID:(CDUnion_698d0922)arg1;
- (BOOL)_ISStoreIndex_isValid;
- (CDStruct_7956d949 *)_ISStoreIndex_blobTableHeader;
- (void)_ISMutableStoreIndex_removeBlobForID:(CDUnion_698d0922)arg1;
- (CDUnion_698d0922)_ISMutableStoreIndex_addBlobData:(id)arg1;
- (CDUnion_698d0922)_ISMutableStoreIndex_addBlobBuffer:(const void *)arg1 size:(unsigned long long)arg2;
- (id)__is__bookmarkResourcePropertyForKey:(id)arg1;
- (struct CGImageBlockSet *)__IS_copyCGImageBlockSetWithProvider:(struct CGImageProvider *)arg1;
- (void)__IS_getImageBuffer:(void **)arg1 size:(unsigned long long *)arg2;
- (CDStruct_601877e8 *)__IS_imageHeader;
@end


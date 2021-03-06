//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLDevice;

@interface MPSMatrix : NSObject
{
    // Error parsing type: ^{MPSDevice=^^?^{MPSDevice}@^{MPSDeviceFreeList}{atomic<MTLLibraryNode *>={__cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> >=A^{MTLLibraryNode}}}[2[2[2{atomic<void *>={__cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> >=A^v}}]]][563{MPSPixelCapabilities=b1b1b1b1b1b2b1b8}]{atomic<void *>={__cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> >=A^v}}Ii{MPSGPUInfo=b8b8b8b16b4b20}[107{atomic<MPSLibrary *>={__cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> >=A^{MPSLibrary}}}]}, name: _device
    unsigned long long _rows;
    unsigned long long _columns;
    unsigned long long _matrices;
    unsigned long long _rowBytes;
    unsigned long long _matrixBytes;
    unsigned long long _offset;
    unsigned int _dataType;
    // Error parsing type: {MPSAutoBuffer="_buffer"{atomic<void *>="__a_"{__cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> >="__a_value"A^v}}"_requestedSize"Q"_device"@"<MTLDevice>""_cache"@"MPSCommandBufferImageCache""_resourceSize"{?="size"Q"align"Q}}, name: _buffer
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned long long matrixBytes; // @synthesize matrixBytes=_matrixBytes;
@property(readonly, nonatomic) unsigned long long rowBytes; // @synthesize rowBytes=_rowBytes;
@property(readonly, nonatomic) unsigned long long matrices; // @synthesize matrices=_matrices;
@property(readonly, nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) unsigned long long rows; // @synthesize rows=_rows;
- (id)ndArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3;
- (_Bool)doesAliasWithNDArray:(id)arg1;
- (_Bool)canAliasWithNDArrayDescriptor:(id)arg1;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) id <MTLBuffer> data;
- (unsigned long long)resourceSize;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 descriptor:(id)arg3;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2;
-     // Error parsing type: @32@0:8@16^{MPSDevice=^^?^{MPSDevice}@^{MPSDeviceFreeList}{atomic<MTLLibraryNode *>={__cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> >=A^{MTLLibraryNode}}}[2[2[2{atomic<void *>={__cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> >=A^v}}]]][563{MPSPixelCapabilities=b1b1b1b1b1b2b1b8}]{atomic<void *>={__cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> >=A^v}}Ii{MPSGPUInfo=b8b8b8b16b4b20}[107{atomic<MPSLibrary *>={__cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> >=A^{MPSLibrary}}}]}24, name: initPrivateWithDescriptor:device:
- (id)init;
@property(readonly, retain, nonatomic) id <MTLDevice> device;

@end


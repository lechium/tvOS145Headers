/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOGPU/IOGPU-Structs.h>
#import <Metal/_MTLHeap.h>

@protocol MTLDevice;
@class IOGPUMetalResource, IOGPUMetalDevice, NSString;

@interface IOGPUMetalHeap : _MTLHeap {

	IOGPUMetalResource* _resource;
	IOGPUMetalDevice*<MTLDevice> _device;
	MTLRangeAllocator* _allocator;
	opaque_pthread_mutex_t _mutex;
	unsigned long long _size;

}

@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long usedSize; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long currentAllocatedSize; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (readonly) long long type; 
-(void)dealloc;
-(unsigned long long)size;
-(id<MTLDevice>)device;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)deallocHeapSubResource;
-(unsigned long long)currentAllocatedSize;
-(void)unpinMemoryAtOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2 ;
-(unsigned long long)usedSize;
-(id)initWithDevice:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 args:(IOGPUNewResourceArgs*)arg4 argsSize:(unsigned)arg5 desc:(id)arg6 ;
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 args:(IOGPUNewResourceArgs*)arg4 argsSize:(unsigned)arg5 ;
-(id)newSubResourceWithLength:(unsigned long long)arg1 alignment:(unsigned long long)arg2 options:(unsigned long long)arg3 offset:(unsigned long long*)arg4 ;
-(id)newSubResourceAtOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2 alignment:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
@end


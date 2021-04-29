/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/MPSImageAllocator.h>

@protocol MTLHeap;
@class NSString;

@interface MLCDeviceGPUHeapAllocator : NSObject <MPSImageAllocator> {

	BOOL _isDebuggingEnabled;
	id<MTLHeap> _heap;
	unsigned long long _heapSize;
	unsigned long long _resourceSize;
	unsigned long long _resourceOffset;
	unsigned long long _numResources;

}

@property (assign,nonatomic) BOOL isDebuggingEnabled;                        //@synthesize isDebuggingEnabled=_isDebuggingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long resourceOffset;              //@synthesize resourceOffset=_resourceOffset - In the implementation block
@property (nonatomic,readonly) id<MTLHeap> heap;                             //@synthesize heap=_heap - In the implementation block
@property (nonatomic,readonly) unsigned long long heapSize;                  //@synthesize heapSize=_heapSize - In the implementation block
@property (nonatomic,readonly) unsigned long long resourceSize;              //@synthesize resourceSize=_resourceSize - In the implementation block
@property (nonatomic,readonly) unsigned long long numResources;              //@synthesize numResources=_numResources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<MTLHeap>)heap;
-(unsigned long long)resourceSize;
-(id)imageForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3 ;
-(id)imageBatchForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3 count:(unsigned long long)arg4 ;
-(BOOL)isDebuggingEnabled;
-(void)setIsDebuggingEnabled:(BOOL)arg1 ;
-(unsigned long long)heapSize;
-(id)initWithDevice:(id)arg1 heapSize:(unsigned long long)arg2 resourceSize:(unsigned long long)arg3 numResources:(unsigned long long)arg4 ;
-(id)allocateBuffer:(unsigned long long)arg1 ;
-(unsigned long long)resourceOffset;
-(unsigned long long)numResources;
-(void)setResourceOffset:(unsigned long long)arg1 ;
@end

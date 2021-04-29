/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePassDescriptor.h>

@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor {

	MTLComputePassDescriptorPrivate _private;
	unsigned _substreamCount;

}

@property (assign,nonatomic) unsigned substreamCount;              //@synthesize substreamCount=_substreamCount - In the implementation block
+(id)computePassDescriptor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(const MTLComputePassDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)dispatchType;
-(id)sampleBufferAttachments;
-(void)setDispatchType:(unsigned long long)arg1 ;
-(unsigned)substreamCount;
-(void)setSubstreamCount:(unsigned)arg1 ;
@end

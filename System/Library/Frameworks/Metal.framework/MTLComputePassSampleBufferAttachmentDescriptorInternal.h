/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePassSampleBufferAttachmentDescriptor.h>

@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor {

	MTLComputePassSampleBufferAttachmentDescriptorPrivate _private;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(const MTLComputePassSampleBufferAttachmentDescriptorPrivate*)_descriptorPrivate;
-(id)sampleBuffer;
-(unsigned long long)startOfEncoderSampleIndex;
-(unsigned long long)endOfEncoderSampleIndex;
-(void)setSampleBuffer:(id)arg1 ;
-(void)setStartOfEncoderSampleIndex:(unsigned long long)arg1 ;
-(void)setEndOfEncoderSampleIndex:(unsigned long long)arg1 ;
@end


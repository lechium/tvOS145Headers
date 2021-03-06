/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLAttributeDescriptor.h>

@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor {

	unsigned long long _vertexFormat;
	unsigned long long _offset;
	unsigned long long _bufferIndex;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)format;
-(unsigned long long)offset;
-(unsigned long long)bufferIndex;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)setBufferIndex:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
@end


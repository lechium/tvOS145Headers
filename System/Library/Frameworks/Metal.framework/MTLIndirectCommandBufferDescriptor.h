/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLIndirectCommandBufferDescriptor : NSObject <NSCopying> {

	MTLIndirectCommandBufferDescriptorState _state;

}

@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (assign,nonatomic) unsigned long long commandTypes; 
@property (assign,nonatomic) BOOL inheritPipelineState; 
@property (assign,nonatomic) BOOL inheritBuffers; 
@property (assign,nonatomic) unsigned long long maxVertexBufferBindCount; 
@property (assign,nonatomic) unsigned long long maxFragmentBufferBindCount; 
@property (assign,nonatomic) unsigned long long maxKernelBufferBindCount; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)commandTypes;
-(BOOL)inheritBuffers;
-(BOOL)inheritPipelineState;
-(unsigned long long)maxFragmentBufferBindCount;
-(unsigned long long)maxVertexBufferBindCount;
-(unsigned long long)maxKernelBufferBindCount;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)setCommandTypes:(unsigned long long)arg1 ;
-(void)setInheritPipelineState:(BOOL)arg1 ;
-(void)setInheritBuffers:(BOOL)arg1 ;
-(void)setMaxVertexBufferBindCount:(unsigned long long)arg1 ;
-(void)setMaxFragmentBufferBindCount:(unsigned long long)arg1 ;
-(void)setMaxKernelBufferBindCount:(unsigned long long)arg1 ;
@end


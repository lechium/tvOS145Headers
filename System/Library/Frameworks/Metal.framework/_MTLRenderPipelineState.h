/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLRenderPipelineState.h>

@protocol MTLDevice;
@class NSString, MTLIndirectArgumentBufferEmulationData, MTLDebugInstrumentationData;

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {

	NSString* _label;
	id<MTLDevice> _device;
	BOOL _threadgroupSizeMatchesTileSize;
	MTLIndirectArgumentBufferEmulationData* _vertexIABEmulationData;
	MTLIndirectArgumentBufferEmulationData* _fragmentIABEmulationData;
	MTLDebugInstrumentationData* _vertexDebugInstrumentationData;
	MTLDebugInstrumentationData* _fragmentDebugInstrumentationData;
	MTLDebugInstrumentationData* _tileDebugInstrumentationData;
	BOOL _supportIndirectCommandBuffers;
	long long _textureWriteRoundingMode;
	unsigned long long _resourceIndex;
	unsigned long long _gpuAddress;
	unsigned long long _imageBlockSampleLength;

}

@property (readonly) NSString * label;                                                                       //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                                                                   //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * vertexIABEmulationData;                //@synthesize vertexIABEmulationData=_vertexIABEmulationData - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * fragmentIABEmulationData;              //@synthesize fragmentIABEmulationData=_fragmentIABEmulationData - In the implementation block
@property (nonatomic,retain) MTLDebugInstrumentationData * vertexDebugInstrumentationData;                   //@synthesize vertexDebugInstrumentationData=_vertexDebugInstrumentationData - In the implementation block
@property (nonatomic,retain) MTLDebugInstrumentationData * fragmentDebugInstrumentationData;                 //@synthesize fragmentDebugInstrumentationData=_fragmentDebugInstrumentationData - In the implementation block
@property (nonatomic,retain) MTLDebugInstrumentationData * tileDebugInstrumentationData;                     //@synthesize tileDebugInstrumentationData=_tileDebugInstrumentationData - In the implementation block
@property (readonly) long long textureWriteRoundingMode; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) unsigned long long resourceIndex;                                             //@synthesize resourceIndex=_resourceIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long gpuAddress;                                                //@synthesize gpuAddress=_gpuAddress - In the implementation block
@property (readonly) unsigned long long imageBlockSampleLength;                                              //@synthesize imageBlockSampleLength=_imageBlockSampleLength - In the implementation block
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) BOOL threadgroupSizeMatchesTileSize;                                                    //@synthesize threadgroupSizeMatchesTileSize=_threadgroupSizeMatchesTileSize - In the implementation block
@property (readonly) unsigned long long imageblockSampleLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)uniqueIdentifier;
-(NSString *)label;
-(id<MTLDevice>)device;
-(BOOL)threadgroupSizeMatchesTileSize;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(long long)textureWriteRoundingMode;
-(long long)textureWriteFPRoundingMode;
-(unsigned long long)gpuAddress;
-(unsigned long long)resourceIndex;
-(MTLIndirectArgumentBufferEmulationData *)vertexIABEmulationData;
-(MTLIndirectArgumentBufferEmulationData *)fragmentIABEmulationData;
-(unsigned long long)imageblockSampleLength;
-(BOOL)supportIndirectCommandBuffers;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT19)arg1 ;
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
-(id)initWithDeviceAndTileDesc:(id)arg1 tilePipelineStateDescriptor:(id)arg2 ;
-(void)setVertexIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
-(void)setFragmentIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
-(MTLDebugInstrumentationData *)vertexDebugInstrumentationData;
-(void)setVertexDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1 ;
-(MTLDebugInstrumentationData *)fragmentDebugInstrumentationData;
-(void)setFragmentDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1 ;
-(MTLDebugInstrumentationData *)tileDebugInstrumentationData;
-(void)setTileDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1 ;
-(unsigned long long)imageBlockSampleLength;
@end


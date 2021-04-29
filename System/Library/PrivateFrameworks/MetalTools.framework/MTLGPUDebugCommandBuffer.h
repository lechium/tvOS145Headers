/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandBuffer.h>
#import <libobjc.A.dylib/MTLGPUDebugBufferEncoder.h>

@protocol MTLArgumentEncoder, MTLBuffer;
@class MTLGPUDebugDevice;

@interface MTLGPUDebugCommandBuffer : MTLToolsCommandBuffer <MTLGPUDebugBufferEncoder> {

	Options* _options;
	id<MTLArgumentEncoder> _stageArgumentEncoder;
	id<MTLBuffer> _vertexComputeReportBuffer;
	unsigned long long _vertexComputeReportOffset;
	id<MTLBuffer> _fragmentReportBuffer;
	unsigned long long _fragmentReportOffset;
	vector<MetalBuffer, std::__1::allocator<MetalBuffer>>* _usedBuffers;
	MetalBuffer* _currentPooledBuffer;
	unsigned long long _currentPooledBufferOffset;
	unsigned _currentEncoderID;
	unsigned _currentReportID;
	vector<id<MTLBuffer>, std::__1::allocator<id<MTLBuffer>>>* _reportBufferList;
	vector<ReportBufferEntry, std::__1::allocator<ReportBufferEntry>>* _reportEntryList;
	vector<NSString *, std::__1::allocator<NSString *>>* _encoderLabels;
	mutex _allocationLock;
	os_unfair_lock_s _tempBufLock;
	BOOL _supportsTileStage;

}

@property (readonly) MTLGPUDebugDevice * device; 
-(void)dealloc;
-(id)blitCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)computeCommandEncoderWithDescriptor:(id)arg1 ;
-(id)blitCommandEncoderWithDescriptor:(id)arg1 ;
-(id)computeCommandEncoder;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)temporaryBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)endingEncoder:(id)arg1 type:(unsigned long long)arg2 ;
-(id)encodeBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 resultOffset:(unsigned long long*)arg4 ;
-(void)preCompletionHandlers;
-(id)_newReportBuffer;
-(pair<id<MTLBuffer>, unsigned long>)_temporaryBufferWithLength:(unsigned long long)arg1 ;
-(id)temporaryBufferWithLength:(unsigned long long)arg1 ;
-(id)_encoderIdentifierForEncoderIndex:(unsigned)arg1 ;
-(void)_encodeReportBuffer:(id)arg1 type:(unsigned long long)arg2 ;
-(ReportBufferEntry)_allocReportEntryStorageForType:(unsigned long long)arg1 ;
-(void)beginingEncoder:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_checkReportBuffers;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLIndirectComputeCommandSPI.h>

@class NSString;

@interface MTLToolsIndirectComputeCommand : MTLToolsObject <MTLIndirectComputeCommandSPI>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(unsigned long long)getCommandType;
-(unsigned long long)getOptimizedStatus;
-(unsigned long long)getPipelineStateUniqueIdentifier;
-(void)setComputePipelineState:(id)arg1 ;
-(void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)concurrentDispatchThreadgroups:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(void)concurrentDispatchThreads:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(void)setBarrier;
-(void)clearBarrier;
-(void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setStageInRegion:(SCD_Struct_MT17)arg1 ;
-(void*)getKernelBufferAtIndex:(unsigned long long)arg1 ;
-(id)dispatchThreadgroupsArguments;
-(id)dispatchThreadsArguments;
-(unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_MT17)getStageInRegion;
-(BOOL)hasBarrier;
-(id)getImageBlockSize;
@end


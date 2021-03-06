/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSKernel.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPSImageAllocator;
@class NSArray;

@interface MPSNNGraph : MPSKernel <NSCopying, NSSecureCoding> {

	Graph* _graph;
	id<MPSImageAllocator> _destinationImageAllocator;
	unsigned long long _format;
	BOOL _resultIsNeeded;
	BOOL _outputStateIsTemporary;

}

@property (nonatomic,copy,readonly) NSArray * sourceImageHandles; 
@property (nonatomic,copy,readonly) NSArray * sourceStateHandles; 
@property (nonatomic,copy,readonly) NSArray * intermediateImageHandles; 
@property (nonatomic,copy,readonly) NSArray * resultStateHandles; 
@property (nonatomic,readonly) id<MPSHandle> resultHandle; 
@property (assign,nonatomic) BOOL outputStateIsTemporary;                                  //@synthesize outputStateIsTemporary=_outputStateIsTemporary - In the implementation block
@property (nonatomic,retain) id<MPSImageAllocator> destinationImageAllocator;              //@synthesize destinationImageAllocator=_destinationImageAllocator - In the implementation block
@property (assign,nonatomic) unsigned long long format;                                    //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL resultImageIsNeeded; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
+(id)graphWithDevice:(id)arg1 resultImage:(id)arg2 resultImageIsNeeded:(BOOL)arg3 ;
+(id)graphWithDevice:(id)arg1 resultImage:(id)arg2 ;
+(id)graphWithDevice:(id)arg1 resultImages:(id)arg2 resultsAreNeeded:(BOOL*)arg3 ;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)format;
-(void)setFormat:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setDestinationImageAllocator:(id<MPSImageAllocator>)arg1 ;
-(id<MPSImageAllocator>)destinationImageAllocator;
-(id)initWithDevice:(id)arg1 resultImage:(id)arg2 resultImageIsNeeded:(BOOL)arg3 ;
-(id)initWithDevice:(id)arg1 resultImage:(id)arg2 ;
-(id)initWithDevice:(id)arg1 resultImages:(id)arg2 resultsAreNeeded:(BOOL*)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 intermediateImages:(id)arg4 destinationStates:(id)arg5 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 intermediateImages:(id)arg4 destinationStates:(id)arg5 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 ;
-(BOOL)resultImageIsNeeded;
-(NSArray *)sourceImageHandles;
-(NSArray *)sourceStateHandles;
-(NSArray *)intermediateImageHandles;
-(NSArray *)resultStateHandles;
-(id<MPSHandle>)resultHandle;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 ;
-(id)executeAsyncWithSourceImages:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reloadFromDataSources;
-(unsigned long long)readCountForSourceImageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)readCountForSourceStateAtIndex:(unsigned long long)arg1 ;
-(BOOL)outputStateIsTemporary;
-(void)setOutputStateIsTemporary:(BOOL)arg1 ;
@end


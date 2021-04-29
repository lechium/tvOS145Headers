/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MLCDeviceProperties, MLComputeEngineControlMLCLayerOperationsMLCEngineDispatchMLComputeEngineOptimizerUpdateMLCDeviceProperties;
@class NSArray;

@interface MLCDevice : NSObject <NSCopying> {

	int _type;
	id<MLCDeviceProperties> _engine;
	id<MLComputeEngineControl><MLCLayerOperations><MLCEngineDispatch><MLComputeEngineOptimizerUpdate><MLCDeviceProperties> _computeEngine;

}

@property (assign,nonatomic) int type;                                                                                                                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id<MLCDeviceProperties> engine;                                                                                                                    //@synthesize engine=_engine - In the implementation block
@property (nonatomic,retain) id<MLComputeEngineControl><MLCLayerOperations><MLCEngineDispatch><MLComputeEngineOptimizerUpdate><MLCDeviceProperties> computeEngine;              //@synthesize computeEngine=_computeEngine - In the implementation block
@property (nonatomic,readonly) NSArray * gpuDevices; 
+(id)deviceWithType:(int)arg1 ;
+(id)cpuDevice;
+(id)gpuDevice;
+(id)aneDevice;
+(id)deviceWithType:(int)arg1 selectsMultipleComputeDevices:(BOOL)arg2 ;
+(id)deviceWithGPUDevices:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(id<MLCDeviceProperties>)engine;
-(void)setEngine:(id<MLCDeviceProperties>)arg1 ;
-(id<MLComputeEngineControl><MLCLayerOperations><MLCEngineDispatch><MLComputeEngineOptimizerUpdate><MLCDeviceProperties>)computeEngine;
-(id)initWithType:(int)arg1 selectsMultipleComputeDevices:(BOOL)arg2 ;
-(id)initWithType:(int)arg1 engine:(id)arg2 ;
-(void)setComputeEngine:(id<MLComputeEngineControl><MLCLayerOperations><MLCEngineDispatch><MLComputeEngineOptimizerUpdate><MLCDeviceProperties>)arg1 ;
-(id)initWithGPUs:(id)arg1 ;
-(void)switchToCPUDevice;
-(NSArray *)gpuDevices;
@end

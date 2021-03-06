/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class VNProcessingDevice;

@interface BWVisionInferenceAdapter : NSObject {

	VNProcessingDevice* _applicationProcessingDevice;
	VNProcessingDevice* _graphicsProcessingDevice;
	VNProcessingDevice* _neuralProcessingDevice;

}

@property (nonatomic,readonly) VNProcessingDevice * applicationProcessingDevice;                       //@synthesize applicationProcessingDevice=_applicationProcessingDevice - In the implementation block
@property (nonatomic,readonly) VNProcessingDevice * graphicsProcessingDevice;                          //@synthesize graphicsProcessingDevice=_graphicsProcessingDevice - In the implementation block
@property (nonatomic,readonly) VNProcessingDevice * neuralProcessingDevice;                            //@synthesize neuralProcessingDevice=_neuralProcessingDevice - In the implementation block
@property (nonatomic,readonly) VNProcessingDevice * espressoBasedRequestProcessingDevice; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(VNProcessingDevice *)graphicsProcessingDevice;
-(VNProcessingDevice *)neuralProcessingDevice;
-(VNProcessingDevice *)espressoBasedRequestProcessingDevice;
-(VNProcessingDevice *)applicationProcessingDevice;
-(int)_executionTargetForProcessingDevice:(id)arg1 ;
-(id)inferenceProviderForType:(int)arg1 version:(SCD_Struct_BW4)arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int*)arg5 ;
@end


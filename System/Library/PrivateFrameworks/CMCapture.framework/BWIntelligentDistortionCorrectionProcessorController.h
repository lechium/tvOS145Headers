/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWIntelligentDistortionCorrectionProcessorInputDelegate.h>

@protocol FigIntelligentDistortionCorrectionProcessor;
@class BWIntelligentDistortionCorrectionProcessorControllerConfiguration, FigStateMachine, NSMutableArray, BWIntelligentDistortionCorrectionProcessorRequest, NSString;

@interface BWIntelligentDistortionCorrectionProcessorController : BWStillImageProcessorController <BWIntelligentDistortionCorrectionProcessorInputDelegate> {

	BWIntelligentDistortionCorrectionProcessorControllerConfiguration* _configuration;
	id<FigIntelligentDistortionCorrectionProcessor> _processor;
	opaqueCMFormatDescriptionRef _outputImageFormatDescription;
	opaqueCMFormatDescriptionRef _outputImageGainMapFormatDescription;
	FigStateMachine* _stateMachine;
	NSMutableArray* _requestQueue;
	BWIntelligentDistortionCorrectionProcessorRequest* _currentRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)portTypesWithIntelligentDistortionCorrectionSupportWithSensorConfigurations:(id)arg1 intelligentDistortionCorrectionVersion:(int)arg2 ;
+(id)captureTypesWithIntelligentDistortionCorrectionSupport;
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_process;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(void)_resetProcessor;
-(void)inputReceivedNewInputData:(id)arg1 ;
-(int)_loadSetupAndPrepareProcessor;
-(int)_figErrorFromIntelligentDistortionCorrectionStatus:(int)arg1 ;
-(CGRect)_smallerOrEqualRectWithValuesMultipleOfTwo:(CGRect)arg1 ;
-(void)_getAndAttachGDCInformationToDemosaicedRawSampleBuffer:(opaqueCMSampleBufferRef)arg1 inputWidth:(unsigned long long)arg2 inputHeight:(unsigned long long)arg3 finalImageDimensions:(SCD_Struct_BW2)arg4 settingsID:(long long)arg5 ;
-(int)_customPrepareProcessor:(id)arg1 ;
@end


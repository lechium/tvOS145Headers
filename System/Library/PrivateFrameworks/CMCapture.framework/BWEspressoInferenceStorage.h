/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceProviderStorage.h>

@class NSDictionary, NSMapTable, NSMutableSet;

@interface BWEspressoInferenceStorage : BWInferenceProviderStorage {

	NSDictionary* _bindingNameByRequirement;
	NSMapTable* _tensorByRequirement;
	NSMutableSet* _requirementsUsingTensors;
	NSMutableSet* _requirementsUsingPixelBuffers;

}
+(void)initialize;
-(void)dealloc;
-(void)clear;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
-(SCD_Struct_BW30*)tensorForRequirement:(id)arg1 ;
-(id)initWithBindingNameByRequirement:(id)arg1 requirementsNeedingPixelBuffers:(id)arg2 requirementsNeedingPixelBufferPools:(id)arg3 requirementsNeedingTensors:(id)arg4 ;
-(id)bindingNameForRequirement:(id)arg1 ;
-(void)addTensorInUseRequirement:(id)arg1 ;
-(void)addPixelBufferInUseRequirement:(id)arg1 ;
@end


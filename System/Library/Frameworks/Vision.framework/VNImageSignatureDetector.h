/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNImageSignatureDetector : VNDetector {

	unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>, std::__1::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>>>* _hyperplaneLSHProcessor;
	unsigned long long _imageSignatureprintType;
	unsigned long long _imageSignatureHashType;

}

@property (nonatomic,readonly) unsigned long long imageSignatureprintType;              //@synthesize imageSignatureprintType=_imageSignatureprintType - In the implementation block
@property (nonatomic,readonly) unsigned long long imageSignatureHashType;               //@synthesize imageSignatureHashType=_imageSignatureHashType - In the implementation block
+(id)configurationOptionKeysForDetectorKey;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)imageSignatureprintType;
-(unsigned long long)imageSignatureHashType;
-(BOOL)needsMetalContext;
-(shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)_calculateImageSignatureprintDescriptorFromOptions:(id)arg1 error:(id*)arg2 ;
-(shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)_calculateImageSignatureHashDescriptorFrom:(const shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)arg1 options:(id)arg2 error:(id*)arg3 ;
@end


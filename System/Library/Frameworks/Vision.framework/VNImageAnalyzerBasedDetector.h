/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@class NSArray;

@interface VNImageAnalyzerBasedDetector : VNDetector {

	unique_ptr<vision::mod::ImageAnalyzer, std::__1::default_delete<vision::mod::ImageAnalyzer>>* _imageAnalyzer;
	Geometry2D_size2D_ _networkRequiredInputImageSize;
	BOOL _networkUsesAnisotropicScaling;
	NSArray* _cachedSupportedClassificationIdentifiers;

}
+(id)configurationOptionKeysForDetectorKey;
-(CGSize)inputImageSize;
-(id)modelName;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(id)supportedImageSizeSetForProcessingOptions:(id)arg1 ;
-(id)sceneLabelsFileName;
-(id)segmentationLabelsFileName;
-(BOOL)configureImageAnalyzerOptions:(ImageAnalyzer_Options*)arg1 error:(id*)arg2 ;
-(unsigned)analysisPixelFormatType;
-(unsigned)analysisTypesForProcessOptions:(id)arg1 ;
-(id)observationsForLastAnalysisOfImageAnalyzer:(ImageAnalyzer*)arg1 processOptions:(id)arg2 requestRevision:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_classificationLabelsNotProvidedError;
-(BOOL)_getImageCropAndScaleOption:(unsigned long long*)arg1 fromOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)_createImageAnalyzerAndReturnError:(id*)arg1 ;
-(BOOL)_performAnalysis:(unsigned)arg1 onPixelBuffer:(CVBufferRef)arg2 error:(id*)arg3 ;
-(id)modelPathAndReturnError:(id*)arg1 ;
-(int)analysisImageProcessingImageType;
-(BOOL)providesSceneLabels;
-(id)sceneLabelsPathAndReturnError:(id*)arg1 ;
-(id)supportedClassificationIdentifiersAcceptedByBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)observationsForSceneLabelsFromLastAnalysisOfImageAnalyzer:(ImageAnalyzer*)arg1 identifierAcceptingBlock:(/*^block*/id)arg2 operationPointsProvider:(id)arg3 requestRevision:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)providesSegmentationLabels;
-(id)segmentationLabelsPathAndReturnError:(id*)arg1 ;
@end


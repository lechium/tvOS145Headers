/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIFaceClassifier.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMIFaceprinter, HMIFaceQualityFilterSVM, NSString;

@interface HMIFaceClassifierVIP : HMFObject <HMIFaceClassifier, HMFLogging> {

	HMIFaceprinter* _faceprinter;
	HMIFaceQualityFilterSVM* _faceRecognizabilityFilter;
	HMIFaceQualityFilterSVM* _faceAestheticQualityFilter;
	double _classificationThresholdKnown;
	double _classificationThresholdUnknown;

}

@property (readonly) HMIFaceprinter * faceprinter;                                      //@synthesize faceprinter=_faceprinter - In the implementation block
@property (readonly) HMIFaceQualityFilterSVM * faceRecognizabilityFilter;               //@synthesize faceRecognizabilityFilter=_faceRecognizabilityFilter - In the implementation block
@property (readonly) HMIFaceQualityFilterSVM * faceAestheticQualityFilter;              //@synthesize faceAestheticQualityFilter=_faceAestheticQualityFilter - In the implementation block
@property (readonly) double classificationThresholdKnown;                               //@synthesize classificationThresholdKnown=_classificationThresholdKnown - In the implementation block
@property (readonly) double classificationThresholdUnknown;                             //@synthesize classificationThresholdUnknown=_classificationThresholdUnknown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithError:(id*)arg1 ;
-(HMIFaceprinter *)faceprinter;
-(id)qualityPredictionFromSVMUsingFaceQualityFilterSVM:(id)arg1 detectorConfidence:(double)arg2 laplacian:(double)arg3 yaw:(double)arg4 boxSize:(double)arg5 error:(id*)arg6 ;
-(double)classificationThresholdKnown;
-(double)classificationThresholdUnknown;
-(id)classifyFaceEvent:(id)arg1 pixelBuffer:(CVBufferRef)arg2 fastMode:(BOOL)arg3 homeUUID:(id)arg4 error:(id*)arg5 ;
-(HMIFaceQualityFilterSVM *)faceRecognizabilityFilter;
-(HMIFaceQualityFilterSVM *)faceAestheticQualityFilter;
@end


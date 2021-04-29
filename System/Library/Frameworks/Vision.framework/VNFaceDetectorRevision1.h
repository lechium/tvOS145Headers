/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceDetector.h>

@class VNFaceBBoxAligner;

@interface VNFaceDetectorRevision1 : VNFaceDetector {

	shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector>* _faceDetector;
	VNFaceBBoxAligner* _faceBBoxAligner;

}
+(id)configurationOptionKeysForDetectorKey;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(void)purgeIntermediates;
@end


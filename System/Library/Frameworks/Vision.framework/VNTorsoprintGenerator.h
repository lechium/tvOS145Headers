/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNTorsoprintGenerator : VNEspressoModelFileBasedDetector
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
+(CGSize)_torsoprintInputImageSizeForFaceOrientation:(int)arg1 ;
+(CGSize)_torsoprintDescriptorSize;
+(float)_minimumTorsoInsideInputImageThreshold;
+(float)_magnifiedBBoxScaleFactor;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)_runTorsoprintModelOnImageBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)_calculateTorsoBBoxFromFaceBBox:(CGRect)arg1 insideImageWithSize:(CGSize)arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(CGRect*)arg4 error:(id*)arg5 ;
@end


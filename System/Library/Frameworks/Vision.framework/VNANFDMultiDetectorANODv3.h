/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNANFDMultiDetector.h>

@interface VNANFDMultiDetectorANODv3 : VNANFDMultiDetector
+(Class)detectorClass;
+(id)detectedObjectClassToRequestClass;
+(id)detectedObjectRequestClassToRequestInfo;
+(id)recognizedFoodAndDrinkObjectClassToFoodAndDrinkCategoryName;
+(id)knownFoodAndDrinkIdentifiers;
-(BOOL)processDetectedObject:(id)arg1 requestRevision:(unsigned long long)arg2 objectBoundingBox:(CGRect)arg3 imageBuffer:(id)arg4 warningRecorder:(id)arg5 detectedObjectResults:(id)arg6 error:(id*)arg7 ;
@end


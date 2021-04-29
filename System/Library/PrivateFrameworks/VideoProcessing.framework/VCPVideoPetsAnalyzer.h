/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray, VCPImagePetsAnalyzer, NSArray;

@interface VCPVideoPetsAnalyzer : VCPVideoAnalyzer {

	NSMutableArray* _petsDetections;
	NSMutableArray* _petsFaceDetections;
	SCD_Struct_VC6 _timeLastProcess;
	SCD_Struct_VC6 _petsStart;
	SCD_Struct_VC6 _petsFaceStart;
	VCPImagePetsAnalyzer* _petsAnalyer;
	NSArray* _petsActiveRegions;
	NSArray* _petsFaceActiveRegions;

}
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(id)results;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC17)arg1 ;
-(id)parseResults:(id)arg1 toDetections:(id)arg2 atTime:(SCD_Struct_VC6)arg3 fromTime:(SCD_Struct_VC6*)arg4 addActiveRegions:(id)arg5 ;
-(void)addDetectionToDict:(SCD_Struct_VC17)arg1 withActiveRegions:(id)arg2 forPetsDetections:(id)arg3 fromTime:(SCD_Struct_VC6)arg4 ;
@end


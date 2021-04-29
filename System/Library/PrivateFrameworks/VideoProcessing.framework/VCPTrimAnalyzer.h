/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPActionAnalyzer, NSMutableArray, VCPSegment;

@interface VCPTrimAnalyzer : NSObject {

	VCPActionAnalyzer* _actionAnalyzer;
	NSMutableArray* _internalResults;
	SCD_Struct_VC17 _bestTrimTimeRange;
	float _curationThreshold;
	BOOL _verbose;
	SCD_Struct_VC6 _inTrimStart;
	SCD_Struct_VC6 _inTrimEnd;
	BOOL _firstFrame;
	VCPSegment* _activeSegment;
	SCD_Struct_VC6 _captureTime;
	BOOL _ready;

}
-(id)init;
-(BOOL)isReady;
-(void)printSegments:(id)arg1 ;
-(int)prepareTrimmingWithTrimStart:(SCD_Struct_VC6)arg1 andTrimEnd:(SCD_Struct_VC6)arg2 ;
-(int)analyzeFrameWithTimeRange:(SCD_Struct_VC17)arg1 analysisData:(id)arg2 ;
-(BOOL)shouldCutAt:(SCD_Struct_VC6)arg1 stillPTS:(SCD_Struct_VC6)arg2 withCut:(BOOL)arg3 ;
-(void)generateCurationSegment;
-(int)generateInterestingTrimBasedOnCaptureTime:(SCD_Struct_VC6)arg1 ;
-(void)updateCurationThreshold;
-(float)calculateCandidateScoreWithRangeAdjust:(int)arg1 endIdx:(int)arg2 candidateTimeRange:(SCD_Struct_VC17*)arg3 captureTime:(SCD_Struct_VC6)arg4 ;
-(BOOL)isCurated:(float)arg1 ;
-(BOOL)isTimestampSkipable:(SCD_Struct_VC6)arg1 ;
-(BOOL)checkTrimAt:(SCD_Struct_VC6)arg1 captureTime:(SCD_Struct_VC6)arg2 ;
-(int)finalizeWithDestructiveTrimStart:(SCD_Struct_VC6)arg1 trimEnd:(SCD_Struct_VC6)arg2 andCaptureTime:(SCD_Struct_VC6)arg3 ;
-(SCD_Struct_VC17)bestTrimTimeRange;
@end


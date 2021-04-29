/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VCPCNNHandsDetector.h>

@class NSArray, VCPCNNModelEspresso;

@interface VCPCNNHandsDetectorEspresso : VCPCNNHandsDetector {

	int _maxNumRegions;
	float* _inputData;
	NSArray* _outputNames;
	VCPCNNModelEspresso* _modelEspresso;

}
-(void)dealloc;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)createModelWithResConfig:(id)arg1 ;
-(int)updateModelWithResConfig:(id)arg1 ;
-(id)initWithMaxNumRegions:(int)arg1 forceCPU:(BOOL)arg2 sharedModel:(BOOL)arg3 inputConfig:(id)arg4 ;
-(int)generateHandsBoxes:(id)arg1 ;
@end


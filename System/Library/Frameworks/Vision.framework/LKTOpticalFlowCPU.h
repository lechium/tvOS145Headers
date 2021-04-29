/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/LKTOpticalFlow.h>

@interface LKTOpticalFlowCPU : LKTOpticalFlow {

	unique_ptr<apple::vision::OpticalFlow::LKTCPU, std::__1::default_delete<apple::vision::OpticalFlow::LKTCPU>>* _opticalFlow;
	CVBufferRef _uv_user_ref;

}
-(BOOL)setOutputUV:(CVBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)estimateFlowFromReference:(CVBufferRef)arg1 target:(CVBufferRef)arg2 error:(id*)arg3 ;
-(BOOL)estimateFlowStream:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 numScales:(int)arg3 ;
@end

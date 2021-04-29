/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FxTimingAPI
@required
-(double)startTimeOfInputToFilter:(id)arg1;
-(double)startTimeOfInputAToTransition:(id)arg1;
-(double)startTimeOfInputBToTransition:(id)arg1;
-(double)startTimeOfImageParm:(unsigned)arg1 forEffect:(id)arg2;
-(double)durationOfInputToFilter:(id)arg1;
-(double)durationOfInputAToTransition:(id)arg1;
-(double)durationOfInputBToTransition:(id)arg1;
-(double)durationOfImageParm:(unsigned)arg1 forEffect:(id)arg2;
-(unsigned long long)fieldOrderForInputToFilter:(id)arg1;
-(unsigned long long)fieldOrderForInputAToTransition:(id)arg1;
-(unsigned long long)fieldOrderForInputBToTransition:(id)arg1;
-(unsigned long long)fieldOrderForImageParm:(unsigned)arg1 forEffect:(id)arg2;
-(unsigned long long)timelineFpsNumeratorForEffect:(id)arg1;
-(unsigned long long)timelineFpsDenominatorForEffect:(id)arg1;
-(double)inPointOfTimelineForEffect:(id)arg1;
-(double)outPointOfTimelineForEffect:(id)arg1;
-(double)startTimeForEffect:(id)arg1;
-(double)durationForEffect:(id)arg1;
-(double)timelineTimeFromInputTime:(double)arg1 forFilter:(id)arg2;
-(double)timelineTimeFromInputATime:(double)arg1 forTransition:(id)arg2;
-(double)timelineTimeFromInputBTime:(double)arg1 forTransition:(id)arg2;
-(double)timelineTimeFromImageTime:(double)arg1 forParmId:(unsigned)arg2 forEffect:(id)arg3;
-(double)inputTimeForFilter:(id)arg1 fromTimelineTime:(double)arg2;
-(double)inputATimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
-(double)inputBTimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
-(double)imageTimeForParmId:(unsigned)arg1 forEffect:(id)arg2 fromTimelineTime:(double)arg3;

@end


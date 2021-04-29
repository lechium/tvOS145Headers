/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface RTStateTransitionMotionActivityHistogram : NSObject {

	NSMutableArray* _histogramBins;
	long long _activityChangeCount;
	double _cumulativeInterval;

}

@property (nonatomic,retain) NSMutableArray * histogramBins;              //@synthesize histogramBins=_histogramBins - In the implementation block
@property (assign,nonatomic) long long activityChangeCount;               //@synthesize activityChangeCount=_activityChangeCount - In the implementation block
@property (assign,nonatomic) double cumulativeInterval;                   //@synthesize cumulativeInterval=_cumulativeInterval - In the implementation block
-(void)show;
-(unsigned long long)getDominantMotionActivityType;
-(void)addActivity:(id)arg1 withInterval:(double)arg2 ;
-(NSMutableArray *)histogramBins;
-(double)cumulativeInterval;
-(void)setCumulativeInterval:(double)arg1 ;
-(long long)activityChangeCount;
-(void)setActivityChangeCount:(long long)arg1 ;
-(id)initWithMotionActivities:(id)arg1 fromStartDate:(id)arg2 toEndDate:(id)arg3 ;
-(void)setHistogramBins:(NSMutableArray *)arg1 ;
-(id)populateTransitionMotionActivityHistogram;
@end


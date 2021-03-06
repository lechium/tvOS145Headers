/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface PXTimelineSchedulerOptions : NSObject {

	double _timelineEntryDuration;
	double _bestContentEntryDuration;
	NSArray* _bestContentStartTimeHours;

}

@property (assign,nonatomic) double timelineEntryDuration;                     //@synthesize timelineEntryDuration=_timelineEntryDuration - In the implementation block
@property (assign,nonatomic) double bestContentEntryDuration;                  //@synthesize bestContentEntryDuration=_bestContentEntryDuration - In the implementation block
@property (nonatomic,retain) NSArray * bestContentStartTimeHours;              //@synthesize bestContentStartTimeHours=_bestContentStartTimeHours - In the implementation block
-(id)init;
-(double)timelineEntryDuration;
-(NSArray *)bestContentStartTimeHours;
-(double)bestContentEntryDuration;
-(void)setTimelineEntryDuration:(double)arg1 ;
-(void)setBestContentEntryDuration:(double)arg1 ;
-(void)setBestContentStartTimeHours:(NSArray *)arg1 ;
@end


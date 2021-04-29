/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVPlayback/TVPlayback-Structs.h>
@interface TVPTimeRange : NSObject {

	double _startTime;
	double _duration;

}

@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double endTime; 
+(SCD_Struct_TV9)forwardmostCMTimeRangeInCMTimeRanges:(id)arg1 ;
-(id)description;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)endTime;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 ;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 ;
-(id)initWithCMTimeRange:(SCD_Struct_TV9)arg1 ;
-(BOOL)containsTime:(double)arg1 ;
-(id)intersectTimeRange:(id)arg1 ;
@end


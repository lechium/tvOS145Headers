/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BSMonotonicReferenceTime : NSObject {

	double _startTimeStamp;

}

@property (nonatomic,readonly) double timeIntervalSinceNow; 
@property (nonatomic,readonly) double timeIntervalToNow; 
+(id)distantFuture;
+(id)distantPast;
+(id)now;
+(id)referenceTimeWithTimeIntervalSinceNow:(double)arg1 ;
+(id)referenceTimeForDate:(id)arg1 ;
-(id)date;
-(double)timeIntervalSinceNow;
-(double)timeIntervalToNow;
-(double)timeIntervalSinceReferenceTime:(id)arg1 ;
@end


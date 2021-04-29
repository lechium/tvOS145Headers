/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSArray;

@interface _DKEventIntersection : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _events;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (readonly) NSArray * events;                //@synthesize events=_events - In the implementation block
+(id)eventIntersectionWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSArray *)events;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface VCIDRSchedulerPeriodGroup : NSObject {

	unsigned _basePeriodCount;
	unsigned _framesPerBasePeriod;
	NSMutableArray* _streams;
	NSMutableArray* _schedulerItems;

}

@property (nonatomic,readonly) unsigned basePeriodCount;              //@synthesize basePeriodCount=_basePeriodCount - In the implementation block
-(id)description;
-(void)dealloc;
-(void)addStream:(id)arg1 ;
-(void)computeStreamsIDRPosition;
-(id)initWithPeriodCount:(unsigned)arg1 framesPerBasePeriod:(unsigned)arg2 ;
-(id)computeScheduleItemList;
-(unsigned)basePeriodCount;
@end


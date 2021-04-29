/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface VCIDRScheduler : NSObject {

	NSMutableDictionary* _schedulerGroups;
	NSMutableArray* _schedulerItems;
	NSArray* _streams;
	unsigned _basePeriodMs;
	unsigned _framesPerBasePeriod;
	unsigned _captureFramerate;

}

@property (nonatomic,readonly) unsigned basePeriodMs;                  //@synthesize basePeriodMs=_basePeriodMs - In the implementation block
@property (nonatomic,readonly) unsigned captureFramerate;              //@synthesize captureFramerate=_captureFramerate - In the implementation block
+(unsigned)computeGcdForX:(unsigned)arg1 y:(unsigned)arg2 ;
-(id)description;
-(void)dealloc;
-(id)initWithStreams:(id)arg1 captureFramerate:(unsigned)arg2 ;
-(void)computeBasePeriod;
-(BOOL)computeCaptureFramerate;
-(void)computeGroupList;
-(void)computeSchedulerItemList;
-(void)computeSchedulerItemsBudget;
-(void)computeSchedulerItemsPosition;
-(void)computeStreamsIDRPosition;
-(void)realignStreams;
-(void)placeRemainingItems:(id)arg1 placedItems:(id)arg2 leftItem:(id)arg3 rightItem:(id)arg4 ;
-(unsigned)basePeriodMs;
-(unsigned)captureFramerate;
@end


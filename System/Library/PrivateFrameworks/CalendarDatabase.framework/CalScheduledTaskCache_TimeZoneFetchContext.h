/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTimeZone, NSMutableDictionary;

@interface CalScheduledTaskCache_TimeZoneFetchContext : NSObject {

	NSTimeZone* _previousTimeZone;
	NSTimeZone* _nextTimeZone;
	NSMutableDictionary* _dict;

}

@property (nonatomic,retain) NSTimeZone * previousTimeZone;              //@synthesize previousTimeZone=_previousTimeZone - In the implementation block
@property (nonatomic,retain) NSTimeZone * nextTimeZone;                  //@synthesize nextTimeZone=_nextTimeZone - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dict;                 //@synthesize dict=_dict - In the implementation block
-(NSMutableDictionary *)dict;
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(NSTimeZone *)previousTimeZone;
-(void)setPreviousTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)nextTimeZone;
-(void)setNextTimeZone:(NSTimeZone *)arg1 ;
@end


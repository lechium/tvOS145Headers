/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDateInterval, NSNumber;

@interface RTStoredSettledStateTransitionEnumerationOptions : NSObject {

	BOOL _ascending;
	NSDateInterval* _dateInterval;
	NSNumber* _limit;
	unsigned long long _batchSize;

}

@property (nonatomic,readonly) BOOL ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;                 //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) NSNumber * limit;                          //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) unsigned long long batchSize;              //@synthesize batchSize=_batchSize - In the implementation block
-(id)description;
-(BOOL)ascending;
-(unsigned long long)batchSize;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSNumber *)limit;
-(id)initWithAscending:(BOOL)arg1 dateInterval:(id)arg2 limit:(id)arg3 batchSize:(unsigned long long)arg4 ;
@end


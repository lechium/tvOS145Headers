/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/_CDRateLimiter.h>

@interface _CDRateAndTotalLimiter : _CDRateLimiter {

	long long _totalCount;
	long long _currentTotal;

}

@property (assign) long long currentTotal;              //@synthesize currentTotal=_currentTotal - In the implementation block
@property (readonly) long long totalCount;              //@synthesize totalCount=_totalCount - In the implementation block
-(id)description;
-(long long)totalCount;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3 ;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 ;
-(BOOL)credit;
-(BOOL)debited;
-(long long)currentTotal;
-(void)setCurrentTotal:(long long)arg1 ;
@end


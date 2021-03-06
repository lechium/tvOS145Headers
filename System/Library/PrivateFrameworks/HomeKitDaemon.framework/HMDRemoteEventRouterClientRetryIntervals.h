/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMETimerIntervalProvider.h>

@class NSArray;

@interface HMDRemoteEventRouterClientRetryIntervals : NSObject <HMETimerIntervalProvider> {

	NSArray* _intervals;
	long long _currentIndex;

}

@property (readonly) NSArray * intervals;               //@synthesize intervals=_intervals - In the implementation block
@property (assign) long long currentIndex;              //@synthesize currentIndex=_currentIndex - In the implementation block
-(id)init;
-(void)reset;
-(void)setCurrentIndex:(long long)arg1 ;
-(long long)currentIndex;
-(NSArray *)intervals;
-(double)nextInterval;
@end


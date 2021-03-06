/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDate, NSMutableDictionary;

@interface AWEventStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _timerResumed;
	unsigned long long _lastLogTime;
	NSDate* _lastLogDate;
	NSMutableDictionary* _stats;

}
+(id)sharedStatistics;
-(id)init;
-(void)logEvent:(unsigned long long)arg1 ;
@end


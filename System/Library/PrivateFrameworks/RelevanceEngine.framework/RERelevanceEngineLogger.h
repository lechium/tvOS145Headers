/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class REObserverStore, NSObject;

@interface RERelevanceEngineLogger : NSObject {

	REObserverStore* _loggables;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)addLoggable:(id)arg1 ;
-(void)removeLoggable:(id)arg1 ;
-(void)collectLogs:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateLoggables:(/*^block*/id)arg1 ;
@end

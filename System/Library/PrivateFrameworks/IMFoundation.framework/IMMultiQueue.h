/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IMMultiQueue : NSObject {

	NSMutableDictionary* _queueMap;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2 ;
-(BOOL)_addBlock:(/*^block*/id)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(id)loggableOverviewForKey:(id)arg1 ;
-(BOOL)addBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(BOOL)addBlock:(/*^block*/id)arg1 forKey:(id)arg2 description:(id)arg3 ;
-(id)loggableOverview;
@end


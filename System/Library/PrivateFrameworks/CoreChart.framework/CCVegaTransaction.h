/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface CCVegaTransaction : NSObject {

	int _status;
	NSHashTable* _scheduledRenderers;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)singleton;
-(id)init;
-(void)begin;
-(void)commit;
-(void)_commitTransactionForRenderers:(id)arg1 ;
-(void)scheduleDisplay:(id)arg1 ;
@end

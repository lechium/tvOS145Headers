/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface CCVegaTransactionMainThreadOperation : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	/*^block*/id _block;

}
-(id)init;
-(void)cancel;
-(void)waitForBlockReady;
-(void)runBlock;
-(void)provideBlock:(/*^block*/id)arg1 ;
@end


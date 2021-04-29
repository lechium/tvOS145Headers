/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface OspreyDeferredObject : NSObject {

	id _promised;
	NSObject*<OS_dispatch_queue> _deferralQueue;
	NSObject*<OS_dispatch_queue> _fulfillmentQueue;
	NSObject*<OS_dispatch_group> _fulfillmentGroup;

}
-(void)fulfill:(id)arg1 ;
-(id)initWithFulfillmentQueue:(id)arg1 ;
-(void)fulfilledWithCompletion:(/*^block*/id)arg1 ;
@end


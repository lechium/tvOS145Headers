/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICMusicSubscriptionFairPlayController : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _fairPlaySerialQueue;
	NSMutableDictionary* _subscriptionKeyBagStatusCache;

}
+(id)sharedController;
-(id)_init;
-(void)getKeyStatusForAccountUniqueIdentifier:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getKeyStatusListWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)importSubscriptionKeyBagData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned)arg2 machineIDData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stopSubscriptionLeaseWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchSubscriptionsOperationCallbacks.h>

@class NSArray, NSMutableDictionary, CKFetchSubscriptionsOperationInfo;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation <CKFetchSubscriptionsOperationCallbacks> {

	BOOL _isFetchAllSubscriptionsOperation;
	/*^block*/id _fetchSubscriptionCompletionBlock;
	NSArray* _subscriptionIDs;
	NSArray* _subscriptions;
	NSMutableDictionary* _subscriptionsBySubscriptionID;
	NSMutableDictionary* _subscriptionErrors;

}

@property (nonatomic,readonly) id<CKFetchSubscriptionsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchSubscriptionsOperationInfo * operationInfo; 
@property (nonatomic,retain) NSArray * subscriptions;                                                                //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsBySubscriptionID;                                    //@synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionErrors;                                               //@synthesize subscriptionErrors=_subscriptionErrors - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSubscriptionsOperation;                                                  //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionIDs;                                                                //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (nonatomic,copy) id fetchSubscriptionCompletionBlock;                                                      //@synthesize fetchSubscriptionCompletionBlock=_fetchSubscriptionCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(id)fetchAllSubscriptionsOperation;
-(id)init;
-(NSArray *)subscriptions;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(id)initWithSubscriptionIDs:(id)arg1 ;
-(void)setFetchSubscriptionCompletionBlock:(id)arg1 ;
-(NSMutableDictionary *)subscriptionErrors;
-(void)setSubscriptionErrors:(NSMutableDictionary *)arg1 ;
-(void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1 ;
-(NSArray *)subscriptionIDs;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(BOOL)isFetchAllSubscriptionsOperation;
-(id)fetchSubscriptionCompletionBlock;
-(NSMutableDictionary *)subscriptionsBySubscriptionID;
-(void)handleSubscriptionFetchForSubscriptionID:(id)arg1 subscription:(id)arg2 error:(id)arg3 ;
-(void)setSubscriptionsBySubscriptionID:(NSMutableDictionary *)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>
#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class BPSSubscription, NSString;

@interface BPSFilterProducer : BPSSubscription <BPSSubscriber> {

	os_unfair_lock_s _lock;
	id<BPSSubscriber> _downstream;
	long long _state;
	BPSSubscription* _subscription;

}

@property (assign,nonatomic) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) BPSSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) id<BPSSubscriber> downstream;                //@synthesize downstream=_downstream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)setSubscription:(BPSSubscription *)arg1 ;
-(BPSSubscription *)subscription;
-(id)initWithDownstream:(id)arg1 ;
-(id)receiveNewValue:(id)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(void)receiveSubscription:(id)arg1 ;
@end


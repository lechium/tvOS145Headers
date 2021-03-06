/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class BPSPassThroughSubject;

@interface _BPSInnerConduit : BPSSubscription {

	os_unfair_lock_s _lock;
	os_unfair_recursive_lock_s _downstreamLock;
	BOOL _released;
	BPSPassThroughSubject* _parent;
	id<BPSSubscriber> _downstream;
	long long _demand;
	long long _identity;

}

@property (nonatomic,retain) BPSPassThroughSubject * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) id<BPSSubscriber> downstream;                //@synthesize downstream=_downstream - In the implementation block
@property (assign,nonatomic) BOOL released;                               //@synthesize released=_released - In the implementation block
@property (assign,nonatomic) long long demand;                            //@synthesize demand=_demand - In the implementation block
@property (assign,nonatomic) long long identity;                          //@synthesize identity=_identity - In the implementation block
-(void)cancel;
-(long long)identity;
-(BPSPassThroughSubject *)parent;
-(void)setIdentity:(long long)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)setParent:(BPSPassThroughSubject *)arg1 ;
-(void)finishWithCompletion:(id)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(long long)demand;
-(void)setDemand:(long long)arg1 ;
-(BOOL)released;
-(void)setReleased:(BOOL)arg1 ;
-(id)initWithParent:(id)arg1 downstream:(id)arg2 ;
-(void)assignIdentity:(long long)arg1 ;
-(void)offerInput:(id)arg1 ;
@end


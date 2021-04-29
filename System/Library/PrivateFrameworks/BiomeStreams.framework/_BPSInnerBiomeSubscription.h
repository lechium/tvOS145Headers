/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class BMStoreEnumerator, NSString;

@interface _BPSInnerBiomeSubscription : BPSSubscription {

	BMStoreEnumerator* _enumerator;
	os_unfair_lock_s _lock;
	id<BPSSubscriber> _downstream;
	long long _pendingDemand;
	BOOL _recursion;
	NSString* _streamId;

}
-(void)cancel;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(id)initWithStreamEnumerator:(id)arg1 downstream:(id)arg2 streamId:(id)arg3 ;
-(id)initWithStreamDatastoreReader:(id)arg1 startTime:(double)arg2 downstream:(id)arg3 streamId:(id)arg4 ;
-(id)initWithStreamDatastoreReader:(id)arg1 bookmark:(id)arg2 downstream:(id)arg3 streamId:(id)arg4 ;
-(id)newBookmark;
@end


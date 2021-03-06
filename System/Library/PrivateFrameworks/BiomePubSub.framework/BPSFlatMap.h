/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSFlatMap : BPSPublisher {

	long long _maxPublishers;
	/*^block*/id _transform;
	BPSPublisher* _upstream;

}

@property (nonatomic,readonly) long long maxPublishers;              //@synthesize maxPublishers=_maxPublishers - In the implementation block
@property (nonatomic,readonly) id transform;                         //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)transform;
-(void)subscribe:(id)arg1 ;
-(BPSPublisher *)upstream;
-(long long)maxPublishers;
-(id)initWithUpstream:(id)arg1 maxPublishers:(long long)arg2 transform:(/*^block*/id)arg3 ;
@end


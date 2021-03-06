/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, MNTimeballCache, MNTimeballNetworkRequester;

@interface MNTimeballRoutingProvider : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	MNTimeballCache* _cache;
	MNTimeballNetworkRequester* _networkRequester;

}
-(void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 fromOrigin:(id)arg4 auditToken:(id)arg5 callbackBlock:(/*^block*/id)arg6 callbackQueue:(id)arg7 ;
-(void)_gotoNetworkForOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(void)_checkCacheForOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 fromOrigin:(id)arg4 callbackBlock:(/*^block*/id)arg5 callbackQueue:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)initWithCache:(id)arg1 ;
-(void)setNetworkRequester:(id)arg1 ;
@end


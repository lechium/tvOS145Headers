/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TBCacheProvider <NSObject>
@required
-(void)removeAllWithCompletionHandler:(/*^block*/id)arg1;
-(void)cacheFetchResponse:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeWithFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

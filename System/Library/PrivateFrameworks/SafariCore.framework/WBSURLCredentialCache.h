/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface WBSURLCredentialCache : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSDictionary* _credentialCache;
	/*^block*/id _credentialFetchBlock;

}

@property (copy,readonly) NSDictionary * credentials; 
-(void)invalidate;
-(id)initWithCredentialFetchBlock:(/*^block*/id)arg1 ;
-(id)initWithCachingMode:(long long)arg1 credentialFetchBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)credentials;
-(void)getCredentialsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableArray;

@interface ACDPairedDeviceAccountCache : NSObject {

	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	BOOL _accountsIsValid;
	NSArray* _accounts;
	NSMutableArray* _completions;

}
+(id)sharedInstance;
-(id)init;
-(void)invalidate;
-(void)accountsFromRemoteDeviceProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didFetchAccounts:(id)arg1 error:(id)arg2 ;
@end


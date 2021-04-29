/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface ICStorageManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,readonly) unsigned long long storageSpaceAvailable; 
@property (nonatomic,readonly) BOOL cachingEnabled; 
+(id)sharedManager;
-(id)init;
-(unsigned long long)storageSpaceAvailable;
-(BOOL)cachingEnabled;
-(void)ensureStorageIsAvailable:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end


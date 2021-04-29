/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface IMDCKRecordSaltManager : NSObject {

	NSString* _cachedSalt;
	NSObject*<OS_dispatch_queue> _ckQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ckQueue;              //@synthesize ckQueue=_ckQueue - In the implementation block
@property (retain) NSString * cachedSalt;                                         //@synthesize cachedSalt=_cachedSalt - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_container;
-(void)_scheduleOperation:(id)arg1 ;
-(void)clearLocalSyncState;
-(NSString *)cachedSalt;
-(NSObject*<OS_dispatch_queue>)ckQueue;
-(void)setCachedSalt:(NSString *)arg1 ;
-(void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(/*^block*/id)arg1 forceFetch:(BOOL)arg2 ;
-(id)_CKUtilitiesSharedInstance;
-(void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteDeDupeRecordZone;
@end


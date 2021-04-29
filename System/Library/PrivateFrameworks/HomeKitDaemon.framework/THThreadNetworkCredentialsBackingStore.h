/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol THThreadNetworkCredentialsBackingStore <NSObject>
@required
-(void)retrieveRecordWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)storeRecord:(id)arg1 waitForSync:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)retrieveAllRecordsForNetwork:(id)arg1 completion:(/*^block*/id)arg2;
-(void)retrieveAllRecordsWithCompletion:(/*^block*/id)arg1;
-(void)storeRecord:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteRecordWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end

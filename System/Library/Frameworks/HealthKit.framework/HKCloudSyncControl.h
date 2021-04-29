/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, NSString;

@interface HKCloudSyncControl : NSObject <_HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(void)forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceCloudSyncDataUploadForProfileWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCloudSyncRequiredWithCompletion:(/*^block*/id)arg1 ;
-(void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCloudSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCloudSyncProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceCloudSyncWithOptions:(unsigned long long)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)forceCloudResetWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCloudDescriptionWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableCloudSyncAndDeleteAllCloudDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)enableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)accountConfigurationDidChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)oldestSampleStartDateInHealthDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)requestDataRefreshWithCompletion:(/*^block*/id)arg1 ;
@end


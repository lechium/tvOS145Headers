/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSDownload.h>

@class ASDJob;

@interface SSSoftwareDownload : SSDownload {

	ASDJob* _job;

}

@property (nonatomic,readonly) ASDJob * job;              //@synthesize job=_job - In the implementation block
-(void)resume;
-(id)initWithPersistentIdentifier:(long long)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)assetsForType:(id)arg1 ;
-(id)failureError;
-(long long)bytesTotal;
-(long long)bytesDownloaded;
-(id)downloadPhaseIdentifier;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(void)pause;
-(id)status;
-(id)metadata;
-(double)percentComplete;
-(void)setMetadata:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(id)downloadPolicy;
-(long long)downloadSizeLimit;
-(void)setDownloadPolicy:(id)arg1 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(id)backgroundNetworkingJobGroupName;
-(double)estimatedSecondsRemaining;
-(BOOL)isCancelable;
-(id)networkConstraints;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)removeAsset:(id)arg1 ;
-(void)restart;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg1 ;
-(id)initWithJob:(id)arg1 ;
-(ASDJob *)job;
@end


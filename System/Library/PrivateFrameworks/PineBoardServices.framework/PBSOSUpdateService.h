/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PBSOSUpdateService : NSObject
+(id)sharedInstance;
-(void)setDelegate:(id)arg1 ;
-(void)startDownload:(/*^block*/id)arg1 ;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(void)cancelUpdate;
-(void)restore;
-(void)obliterateDataPreservingPaths:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)checkForUpdateViaMDM;
-(void)setManagerClientDelegate:(id)arg1 ;
-(void)isCheckingForUpdates:(/*^block*/id)arg1 ;
-(void)isDownloading:(/*^block*/id)arg1 ;
-(void)isUpdateRunningWithCompletion:(/*^block*/id)arg1 ;
-(void)isUpdate:(id)arg1 readyForInstallation:(/*^block*/id)arg2 ;
-(void)currentDownload:(/*^block*/id)arg1 ;
-(void)setAssetDownloadIsDiscretionary:(BOOL)arg1 ;
-(void)checkForUpdate;
-(void)checkForUpdatesWithOptions:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)purgeDownload:(/*^block*/id)arg1 ;
-(void)installUpdate:(id)arg1 withOptions:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)purgeableAssetSpaceWithCompletion:(/*^block*/id)arg1 ;
-(void)purgeAssetsWithCompletion:(/*^block*/id)arg1 ;
@end


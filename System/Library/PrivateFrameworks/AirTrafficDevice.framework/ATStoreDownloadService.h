/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSMutableDictionary, NSMutableSet, NSObject, ICUnfairLock;

@interface ATStoreDownloadService : NSObject {

	NSOperationQueue* _prepareOperationQueue;
	NSOperationQueue* _downloadOperationQueue;
	NSOperationQueue* _processAssetsOperationQueue;
	NSMutableDictionary* _downloadOperations;
	NSMutableDictionary* _progressForAsset;
	NSMutableSet* _observers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	ICUnfairLock* _lock;

}
+(id)sharedService;
+(id)downloadDirectoryPath;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)prioritizeAsset:(id)arg1 ;
-(id)_newPrepareOperationForAsset:(id)arg1 ;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 cancelPendingDownloads:(BOOL)arg3 ;
-(void)_updateStateForAsset:(id)arg1 oldState:(long long)arg2 newState:(long long)arg3 ;
-(id)_newAssetOperationForAsset:(id)arg1 prepareOperationResult:(id)arg2 ;
-(id)_newProcessAssetOperationForasset:(id)arg1 assetsOperationResult:(id)arg2 ;
-(void)_updateProgressForAsset:(id)arg1 progress:(float)arg2 ;
-(void)enqueueAsset:(id)arg1 ;
-(void)cancelAsset:(id)arg1 ;
-(void)addDownloadObserver:(id)arg1 ;
-(void)removeDownloadObserver:(id)arg1 ;
@end


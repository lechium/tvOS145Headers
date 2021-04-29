/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMDCKAbstractSyncControllerDelegate;
@class IMDCKSyncState;

@interface IMDCKAbstractSyncController : NSObject {

	BOOL _isSyncing;
	id<IMDCKAbstractSyncControllerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isSyncing;                                      //@synthesize isSyncing=_isSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isUsingStingRay; 
@property (nonatomic,readonly) IMDCKSyncState * syncState; 
@property (__weak) id<IMDCKAbstractSyncControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IMDCKAbstractSyncControllerDelegate>)delegate;
-(void)setDelegate:(id<IMDCKAbstractSyncControllerDelegate>)arg1 ;
-(IMDCKSyncState *)syncState;
-(BOOL)isSyncing;
-(void)setIsSyncing:(BOOL)arg1 ;
-(long long)syncControllerRecordType;
-(id)ckUtilities;
-(void)clearLocalSyncState:(unsigned long long)arg1 ;
-(void)setBroadcastedSyncStateToUploading;
-(BOOL)isUsingStingRay;
-(BOOL)_fetchedAllChangesFromCloudKit;
-(void)setBroadcastedSyncStateToDownloading;
-(void)syncBatchCompleted:(unsigned long long)arg1 ;
-(void)setBroadcastedSyncStateToDeleting;
-(void)setBroadcastedSyncStateStateToStarting;
-(void)setBroadcastedSyncStateStateToFinished;
-(void)addSyncDebuggingInfoToDictionary:(id)arg1 ;
-(void)setBroadcastedSyncStateToStartingPeriodicSync;
-(void)setBroadcastedSyncStateToStartingInitialSync;
-(id)syncStateDebuggingInfo:(id)arg1 ;
@end


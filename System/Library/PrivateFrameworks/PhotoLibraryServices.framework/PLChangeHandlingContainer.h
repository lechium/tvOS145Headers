/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLChangePublisher;
@class PLChangeNode, PLCoreDataChangeMerger, PLPersistentHistoryChangeDistributor, NSURL, NSDictionary;

@interface PLChangeHandlingContainer : NSObject {

	PLChangeNode* _changeNode;
	PLCoreDataChangeMerger* _changeMerger;
	id<PLChangePublisher> _changePublisher;
	PLPersistentHistoryChangeDistributor* _persistentHistoryChangeDistributor;
	NSURL* _libraryURL;

}

@property (copy,readonly) NSURL * libraryURL;                                                //@synthesize libraryURL=_libraryURL - In the implementation block
@property (nonatomic,readonly) BOOL isMergingCoalescedSaveNotification; 
@property (nonatomic,copy,readonly) NSDictionary * allDidSaveObjectIDsUserInfo; 
-(void)dealloc;
-(void)start;
-(void)stop;
-(NSURL *)libraryURL;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)pauseLaunchEventNotifications;
-(void)unpauseLaunchEventNotifications;
-(NSDictionary *)allDidSaveObjectIDsUserInfo;
-(BOOL)isMergingCoalescedSaveNotification;
-(void)disconnectManagedObjectContext:(id)arg1 ;
-(void)connectManagedObjectContext:(id)arg1 ;
-(void)registerToReceiveCoreDataChanges:(id)arg1 ;
-(void)handleUnknownMergeEvent;
-(void)distributeChangesSinceLastCheckpoint;
-(id)initWithLibraryURL:(id)arg1 changePublisher:(id)arg2 libraryServicesManager:(id)arg3 persistentStoreCoordinator:(id)arg4 ;
@end


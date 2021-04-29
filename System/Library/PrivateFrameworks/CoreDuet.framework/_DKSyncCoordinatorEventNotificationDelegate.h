/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKSyncCoordinatorEventNotificationDelegate
@optional
-(void)syncCoordinator:(id)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(id)arg2;
-(void)syncCoordinator:(id)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2;
-(void)syncCoordinator:(id)arg1 didCreateAdditionChangeSet:(id)arg2;
-(void)syncCoordinator:(id)arg1 didCreateDeletionChangeSet:(id)arg2;
-(void)syncCoordinator:(id)arg1 didAddRemoteEventsWithStreamNameCounts:(id)arg2 events:(id)arg3;
-(void)syncCoordinator:(id)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2;
-(void)syncCoordinator:(id)arg1 didApplyRemoteAdditionChangeSet:(id)arg2;
-(void)syncCoordinator:(id)arg1 didApplyRemoteDeletionChangeSet:(id)arg2;

@end


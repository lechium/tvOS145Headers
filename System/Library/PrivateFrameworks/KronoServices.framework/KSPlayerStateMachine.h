/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KronoServices.framework/KronoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/KSDataSourceDelegate.h>
#import <libobjc.A.dylib/KSMonitorDelegate.h>

@protocol OS_dispatch_queue, KSPlayerStateMachineDelegate, KSScheduledItem;
@class NSObject, HHEndpoint, KSDataSource, KSMonitor, NSMutableArray, NSString;

@interface KSPlayerStateMachine : NSObject <KSDataSourceDelegate, KSMonitorDelegate> {

	BOOL _isLeader;
	NSObject*<OS_dispatch_queue> _queue;
	HHEndpoint* _endpoint;
	id<KSPlayerStateMachineDelegate> _delegate;
	KSDataSource* _dataSource;
	KSMonitor* _monitor;
	NSMutableArray* _items;
	unsigned long long _currentPlayerMode;
	unsigned long long _currentPlayerReason;
	id<KSScheduledItem> _currentMusicAlarm;

}

@property (assign) BOOL isLeader;                                                             //@synthesize isLeader=_isLeader - In the implementation block
@property (nonatomic,retain) id<KSScheduledItem> currentMusicAlarm;                           //@synthesize currentMusicAlarm=_currentMusicAlarm - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HHEndpoint * endpoint;                                         //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,__weak,readonly) id<KSPlayerStateMachineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) KSDataSource * dataSource;                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) KSMonitor * monitor;                                           //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,readonly) NSMutableArray * items;                                        //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long currentPlayerMode;                                    //@synthesize currentPlayerMode=_currentPlayerMode - In the implementation block
@property (readonly) unsigned long long currentPlayerReason;                                  //@synthesize currentPlayerReason=_currentPlayerReason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<KSPlayerStateMachineDelegate>)delegate;
-(HHEndpoint *)endpoint;
-(NSObject*<OS_dispatch_queue>)queue;
-(KSMonitor *)monitor;
-(NSMutableArray *)items;
-(void)dismiss;
-(KSDataSource *)dataSource;
-(BOOL)isLeader;
-(id)initWithEndpoint:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)musicAlarmShouldFallback:(id)arg1 ;
-(void)setIsLeader:(BOOL)arg1 ;
-(void)itemFired:(id)arg1 ;
-(void)itemDismissed:(id)arg1 ;
-(void)itemRemoved:(id)arg1 ;
-(void)itemChanged:(id)arg1 ;
-(void)leaderRoleChanged:(BOOL)arg1 ;
-(void)cleanupInactiveTimers:(id)arg1 ;
-(void)cleanupStoppedTimers:(id)arg1 ;
-(void)playbackTimeout:(id)arg1 ;
-(void)dismissCurrentMusicAlarm:(id)arg1 ;
-(void)currentMusicAlarmShouldFallbackToTone:(id)arg1 ;
-(void)toneItemFired:(id)arg1 ;
-(void)informDelegateNewPlayerState;
-(void)updateCurrentPlayerState;
-(void)informDelegateNeedToFade;
-(id<KSScheduledItem>)currentMusicAlarm;
-(void)setCurrentMusicAlarm:(id<KSScheduledItem>)arg1 ;
-(void)informDelegeteMusicAlarmFired:(id)arg1 ;
-(void)handleItemDismissedOrRemoved:(id)arg1 ;
-(void)informDelegateMusicAlarmShouldPause:(id)arg1 ;
-(void)dismissOnQueue;
-(unsigned long long)currentPlayerMode;
-(unsigned long long)currentPlayerReason;
@end


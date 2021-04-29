/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPCPlaybackEngineEventConsumer.h>

@protocol MPCPlaybackEngineEventStreamSubscription;
@class NSMutableArray, ICPlayActivityController, NSString;

@interface MPCPlayActivityFeedEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {

	id<MPCPlaybackEngineEventStreamSubscription> _subscription;
	NSMutableArray* _radioPlayActivityEvents;
	ICPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) id<MPCPlaybackEngineEventStreamSubscription> subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,readonly) NSMutableArray * radioPlayActivityEvents;                               //@synthesize radioPlayActivityEvents=_radioPlayActivityEvents - In the implementation block
@property (nonatomic,readonly) ICPlayActivityController * playActivityController;                      //@synthesize playActivityController=_playActivityController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(id)init;
-(id<MPCPlaybackEngineEventStreamSubscription>)subscription;
-(ICPlayActivityController *)playActivityController;
-(void)subscribeToEventStream:(id)arg1 ;
-(void)unsubscribeFromEventStream:(id)arg1 ;
-(BOOL)_handleItemResumeEvent:(id)arg1 cursor:(id)arg2 ;
-(BOOL)_handleItemPositionJumpEvent:(id)arg1 cursor:(id)arg2 ;
-(BOOL)_handleItemPauseEvent:(id)arg1 cursor:(id)arg2 ;
-(BOOL)_handleItemEndEvent:(id)arg1 cursor:(id)arg2 ;
-(BOOL)_handleApplicationTerminationEvent:(id)arg1 cursor:(id)arg2 ;
-(void)_updatePAFEvent:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginPayload:(id)arg3 cursor:(id)arg4 forEventType:(id)arg5 ;
-(void)_updatePAFEvent:(id)arg1 withQueueAddEvent:(id)arg2 queueSectionIdentifier:(id)arg3 cursor:(id)arg4 ;
-(void)_updatePAFEvent:(id)arg1 withDeviceInfoFromCursor:(id)arg2 ;
-(double)_getStartTimeForMostRecentPlaybackStart:(id)arg1 withItemBeginEvent:(id)arg2 cursor:(id)arg3 ;
-(void)_clampTimeValuesForPAFEvent:(id)arg1 withDuration:(double)arg2 ;
-(BOOL)_finalizePAFEvents:(id)arg1 ;
-(id)_findRecentPlaybackStartFromTypes:(id)arg1 matchingPayload:(id)arg2 cursor:(id)arg3 ;
-(void)_updatePAFEvent:(id)arg1 withAudioChangeEvent:(id)arg2 ;
-(id)_generateAggregateNoncatalogEndEventForCursor:(id)arg1 ;
-(double)_getPlaybackDurationForHLSStreamFromStartEvent:(id)arg1 toEndEvent:(id)arg2 withLimitedCursor:(id)arg3 ;
-(id)_generatePlaybackEndEventFromEvent:(id)arg1 withQueueSectionIdentifier:(id)arg2 itemIdentifier:(id)arg3 cursor:(id)arg4 ;
-(void)_updatePAFEvent:(id)arg1 withAccountIdentifier:(id)arg2 cursor:(id)arg3 ;
-(void)_updatePAFEvent:(id)arg1 withEnqueuerAccountIdentifier:(id)arg2 queueAddEvent:(id)arg3 cursor:(id)arg4 ;
-(NSMutableArray *)radioPlayActivityEvents;
@end

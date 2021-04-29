/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IAMImpressionManagerDelegate.h>
#import <libobjc.A.dylib/IAMStorageCoordinatorDelegate.h>
#import <libobjc.A.dylib/IAMEventReceiver.h>

@protocol OS_dispatch_queue, IAMApplicationContextProvider, IAMMessageMetricsDelegate;
@class NSObject, NSMutableDictionary, IAMImpressionManager, NSMutableArray, IAMStorageCoordinator, NSDictionary, NSDate, IAMMessageEntryManager, NSString, IAMModalTarget;

@interface IAMMessageCoordinator : NSObject <IAMImpressionManagerDelegate, IAMStorageCoordinatorDelegate, IAMEventReceiver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	id<IAMApplicationContextProvider> _applicationContext;
	NSMutableDictionary* _messageTargetsByTargetIdentifier;
	NSMutableDictionary* _messageTargetsRequiringNilPriorityMessageNotificationAfterRegistrationByTargetIdentifier;
	NSMutableDictionary* _priorityMessageEntryByTargetIdentifier;
	IAMImpressionManager* _impressionManager;
	NSMutableArray* _pendingTriggerContexts;
	IAMStorageCoordinator* _storageCoordinator;
	NSDictionary* _metadataEntryByMessageIdentifier;
	NSDate* _lastDisplayTimeGlobalPresentationPolicyGroupNormal;
	NSDate* _lastDisplayTimeGlobalPresentationPolicyGroupRestricted;
	IAMMessageEntryManager* _messageEntryManager;
	BOOL _isReadyToEvaluateMessages;
	NSString* _modalTargetIdentifier;
	IAMModalTarget* _modalTarget;
	NSDictionary* _messageGroupsByGroupIdentifier;
	id<IAMMessageMetricsDelegate> _metricsDelegate;

}

@property (assign,nonatomic,__weak) id<IAMMessageMetricsDelegate> metricsDelegate;                     //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IAMApplicationContextProvider> applicationContext;              //@synthesize applicationContext=_applicationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_createMessageFromMessageEntry:(id)arg1 replacingResourcePathsWithCachedResourceLocations:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(void)start;
-(id<IAMApplicationContextProvider>)applicationContext;
-(void)setApplicationContext:(id<IAMApplicationContextProvider>)arg1 ;
-(void)setMetricsDelegate:(id<IAMMessageMetricsDelegate>)arg1 ;
-(id<IAMMessageMetricsDelegate>)metricsDelegate;
-(void)registerMessageTarget:(id)arg1 ;
-(void)unregisterMessageTarget:(id)arg1 ;
-(void)startWithApplicationContext:(id)arg1 ;
-(void)startWithApplicationContext:(id)arg1 messageGroups:(id)arg2 ;
-(void)startWithApplicationContext:(id)arg1 messageGroups:(id)arg2 messageEntryProvider:(id)arg3 messageMetadataStorage:(id)arg4 propertyStorage:(id)arg5 ;
-(void)_setMessageGroups:(id)arg1 ;
-(void)_startStorageCoordinatorWithMessageEntryProvider:(id)arg1 messageMetadataStorage:(id)arg2 propertyStorage:(id)arg3 ;
-(void)_reevaluateTargetsWithIdentifiers:(id)arg1 forTriggerContext:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)arg3 ;
-(void)_updateLastDisplayTime:(id)arg1 forMessageEntry:(id)arg2 ;
-(void)_removeUserNotificationRemovalForMessageWithIdentifier:(id)arg1 ;
-(void)_incrementNumberOfDisplaysForMessageEntry:(id)arg1 ;
-(void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 fromTargetWithIdentifier:(id)arg3 ;
-(void)_reportMessageAction:(id)arg1 wasPerformedInMessageEntry:(id)arg2 fromTargetWithIdentifier:(id)arg3 ;
-(void)reportChangedContextPropertiesContext:(id)arg1 ;
-(void)_enqueuePendingTriggerContext:(id)arg1 ;
-(id)_filterActiveTargetIdentifiers:(id)arg1 ;
-(void)_updateMetadataOfMessageEntriesByTrigger:(id)arg1 forReceivedEvent:(id)arg2 ;
-(void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)arg1 ;
-(void)receiveTriggerEventContext:(id)arg1 ;
-(void)_handleUpdatedMessageEntries:(id)arg1 andMetadata:(id)arg2 ;
-(void)reportMetricsEvent:(id)arg1 ;
-(id)_messageBundleIdentifiers;
-(void)_fetchMessagesAndMetadataFromStorageCoordinator:(/*^block*/id)arg1 ;
-(id)_metadataEntryForMessageIdentifier:(id)arg1 ;
-(void)_evaluateMessagesForAllActiveTargets;
-(id)_dequeuePendingTriggerContexts;
-(void)_updatePriorityMessageEntry:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfNonNil:(BOOL)arg3 ;
-(void)_reevaluateMessageEntries:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)arg3 ;
-(void)_reportHoldoutMessageWouldAppear:(id)arg1 ;
-(void)_notifyMessageTargets:(id)arg1 withTargetIdentifier:(id)arg2 didUpdatePriorityMessageFromEntry:(id)arg3 ;
-(void)_updateMetadata:(id)arg1 forMessageEntry:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleMessageReachedMaximumDisplayCount:(id)arg1 ;
-(void)impressionManager:(id)arg1 shouldReportImpressionEventWithDictionary:(id)arg2 ;
-(void)impressionManager:(id)arg1 impressionDidEndForMessageEntry:(id)arg2 ;
-(void)storageCoordinatorMessageEntriesChanged:(id)arg1 ;
-(void)receiveEvent:(id)arg1 ;
-(void)reportMessageDidAppearWithIdentifier:(id)arg1 ;
-(void)reportMessageDidAppearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(void)reportMessageDidDisappearWithIdentifier:(id)arg1 ;
-(void)reportMessageDidDisappearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 ;
-(void)reportApplicationContextPropertiesDidChange:(id)arg1 ;
@end


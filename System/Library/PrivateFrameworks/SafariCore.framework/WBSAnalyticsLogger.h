/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, AWDServerConnection;

@interface WBSAnalyticsLogger : NSObject {

	NSObject*<OS_dispatch_queue> _analyticsSynchronizationQueue;
	NSMutableDictionary* _pageLoadStartTimes;
	AWDServerConnection* _awdServer;

}

@property (nonatomic,readonly) AWDServerConnection * awdServer;              //@synthesize awdServer=_awdServer - In the implementation block
+(id)sharedLogger;
-(id)initWithQueue:(id)arg1 ;
-(void)registerQueriableMetric:(unsigned)arg1 callback:(/*^block*/id)arg2 ;
-(void)pageLoadCompleted:(unsigned long long)arg1 withErrorCode:(long long)arg2 ;
-(void)_didSelectFavoritesGridItemOfSection:(int)arg1 type:(int)arg2 atIndex:(unsigned long long)arg3 itemsPerRow:(unsigned long long)arg4 isNewTabPage:(BOOL)arg5 ;
-(void)performOnAnalyticsQueueWithDelay:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)pageLoadCompleted:(unsigned long long)arg1 ;
-(void)pageLoadStarted:(unsigned long long)arg1 ;
-(void)didReceiveInvalidMessageFromWebProcess:(id)arg1 ;
-(void)didAutoFillCustomContactSetShowingMeCard:(BOOL)arg1 ;
-(void)didShowContactAutoFillSetsWithMeCardSets:(BOOL)arg1 showingPreviouslyCustomizedSet:(BOOL)arg2 ;
-(void)didSelectContactAutoFillSet:(int)arg1 hasPreviouslyCustomizedSet:(BOOL)arg2 ;
-(void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2 ;
-(void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2 ;
-(void)userDidParticipateInPasswordAutoFillWithInteraction:(int)arg1 ;
-(void)userInteractedWithGeneratedPasswordWithInteractionType:(int)arg1 ;
-(void)didSelectFavoritesGridItemOfType:(int)arg1 atIndex:(unsigned long long)arg2 itemsPerRow:(unsigned long long)arg3 isNewTabPage:(BOOL)arg4 ;
-(void)didSelectFavoritesGridFrequentlyVisitedItemAtIndex:(unsigned long long)arg1 itemsPerRow:(unsigned long long)arg2 isNewTabPage:(BOOL)arg3 ;
-(void)didToggleGloballyUseAutomaticReader:(BOOL)arg1 ;
-(void)didToggleDomainSpecificAutomaticReader:(BOOL)arg1 ;
-(void)submitAutomaticReaderActivation:(int)arg1 ;
-(void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2 ;
-(void)userDidSharePasswordWithOutcome:(int)arg1 ;
-(void)userDidReceiveSharedPasswordWithOutcome:(int)arg1 ;
-(AWDServerConnection *)awdServer;
@end


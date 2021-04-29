/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTDerivedPropertyChangeNotifying.h>
#import <libobjc.A.dylib/MTLibraryChangeNotifier.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSSet, NSPersistentHistoryToken, NSString;

@interface MTPodcastDerivedPropertyObserver : NSObject <MTDerivedPropertyChangeNotifying, MTLibraryChangeNotifier> {

	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	BOOL _isObserving;
	NSMutableDictionary* _cache;
	NSMutableDictionary* _handlers;
	NSMutableDictionary* _podcastCache;
	NSSet* _episodePropertiesToFetch;
	NSSet* _podcastPropertiesToFetch;
	NSSet* _podcastStatsProperties;
	NSPersistentHistoryToken* _latestPersistentHistoryToken;
	/*^block*/id _didFinishProcessingContextSaveHandlerForTests;

}

@property (nonatomic,retain) NSMutableDictionary * cache;                                          //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handlers;                                       //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * podcastCache;                                   //@synthesize podcastCache=_podcastCache - In the implementation block
@property (nonatomic,retain) NSSet * episodePropertiesToFetch;                                     //@synthesize episodePropertiesToFetch=_episodePropertiesToFetch - In the implementation block
@property (nonatomic,retain) NSSet * podcastPropertiesToFetch;                                     //@synthesize podcastPropertiesToFetch=_podcastPropertiesToFetch - In the implementation block
@property (nonatomic,retain) NSSet * podcastStatsProperties;                                       //@synthesize podcastStatsProperties=_podcastStatsProperties - In the implementation block
@property (nonatomic,retain) NSPersistentHistoryToken * latestPersistentHistoryToken;              //@synthesize latestPersistentHistoryToken=_latestPersistentHistoryToken - In the implementation block
@property (assign,nonatomic) BOOL isObserving;                                                     //@synthesize isObserving=_isObserving - In the implementation block
@property (nonatomic,copy) id didFinishProcessingContextSaveHandlerForTests;                       //@synthesize didFinishProcessingContextSaveHandlerForTests=_didFinishProcessingContextSaveHandlerForTests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSMutableDictionary *)cache;
-(void)stopObserving;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(void)setIsObserving:(BOOL)arg1 ;
-(BOOL)isObserving;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)handlers;
-(void)startObserving;
-(void)libraryDidChange:(id)arg1 ;
-(void)_fetchLatestProcessedPersistentHistoryToken;
-(void)processLatestPersistentHistoryTransactions;
-(void)_seedCache;
-(void)_updateEpisodeCountsForPodcastUuid:(id)arg1 shouldUpdateFlags:(BOOL)arg2 ;
-(void)episodeResultsChangedForPodcastUuid:(id)arg1 ;
-(id)_historyTransactionsSinceLatestPersistentHistoryToken;
-(BOOL)_changeContainsRelevantEpisodeChanges:(id)arg1 ;
-(BOOL)_changeContainsRelevantPodcastChanges:(id)arg1 ;
-(void)_updateDerivedPropertiesForPodcastUUIDs:(id)arg1 ;
-(void)notifyObserversForPodcast:(id)arg1 ;
-(void)_setLastProcessedPersistentHistoryToken:(id)arg1 ;
-(void)reportStatsForPodcasts;
-(void)setLatestPersistentHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(id)countOfNewEpisodesForEpisodes:(id)arg1 ;
-(id)countOfUnplayedEpisodesForEpisodes:(id)arg1 andPredicateForEpisodesOnUnplayedTab:(id)arg2 ;
-(void)updateFlagForEpisodes:(id)arg1 predicateForUnplayedTab:(id)arg2 predicateForUserEpisodes:(id)arg3 podcastUuid:(id)arg4 ctx:(id)arg5 ;
-(BOOL)setDerivedPropertyValue:(id)arg1 forKey:(id)arg2 forPodcast:(id)arg3 ;
-(id)didFinishProcessingContextSaveHandlerForTests;
-(id)derivedPropertiesForPodcast:(id)arg1 ;
-(NSSet *)episodePropertiesToFetch;
-(BOOL)_shouldSkipSettingPropertiesForWatchPPT;
-(BOOL)_shouldUpdatePodcastsStatsForChange:(id)arg1 ;
-(id)_predicateForEpisodesToUpdateWithPodcastUuid:(id)arg1 predicateForUnplayedInUnplayedTab:(id)arg2 predicateForUserEpisodes:(id)arg3 predicateForTopLevelEpisodes:(id)arg4 ;
-(id)derivedPropertyValueForKey:(id)arg1 forPodcast:(id)arg2 ;
-(id)dependentPropertyForKey:(id)arg1 forPodcastUuid:(id)arg2 ;
-(void)setDependentPropertyValue:(id)arg1 forKey:(id)arg2 forPodcastUuid:(id)arg3 ;
-(NSMutableDictionary *)podcastCache;
-(void)setPodcastCache:(NSMutableDictionary *)arg1 ;
-(void)setEpisodePropertiesToFetch:(NSSet *)arg1 ;
-(NSSet *)podcastPropertiesToFetch;
-(void)setPodcastPropertiesToFetch:(NSSet *)arg1 ;
-(NSSet *)podcastStatsProperties;
-(void)setPodcastStatsProperties:(NSSet *)arg1 ;
-(NSPersistentHistoryToken *)latestPersistentHistoryToken;
-(void)setDidFinishProcessingContextSaveHandlerForTests:(id)arg1 ;
-(id)addDerivedPropertyChangeHandler:(/*^block*/id)arg1 ;
-(void)removeDerivedPropertyChangeHandler:(id)arg1 ;
-(unsigned long long)countOfUnplayedEpisodesForPodcast:(id)arg1 ;
@end


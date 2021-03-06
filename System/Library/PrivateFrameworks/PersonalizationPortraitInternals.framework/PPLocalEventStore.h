/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/PPFeedbackAccepting.h>

@class PPEventCache, PPEventStorage, _PASNotificationToken;

@interface PPLocalEventStore : NSObject <PPFeedbackAccepting> {

	PPEventCache* _eventCache;
	PPEventStorage* _storage;
	_PASNotificationToken* _assetUpdateNotificationToken;

}
+(id)defaultStore;
-(id)init;
-(void)clearCaches;
-(void)_registerForNotifications;
-(void)_preloadEvents;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)iterEventNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)eventNameRecordsForClient:(id)arg1 error:(id*)arg2 ;
-(id)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)eventsInRange:(NSRange)arg1 ;
-(id)eventWithExternalID:(id)arg1 ;
-(id)_recordForEKEvent:(id)arg1 ;
-(id)_recordForEvent:(id)arg1 ;
-(id)_recordForDeletedEKEventWithChangeIdentifier:(id)arg1 ;
-(double)_scoreForSecondsRelativeToNow:(double)arg1 ;
-(void)_clearAndReloadAllCachesAndData;
-(void)_setupCalendarVisibilityManager;
-(id)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 ;
-(id)eventHighlightForEvent:(id)arg1 usingScorer:(id)arg2 date:(id)arg3 rankingOptions:(int)arg4 loadedFromEventKit:(BOOL*)arg5 ;
-(id)eventMetaDataFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)eventsFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)scoredEventsWithQuery:(id)arg1 ;
-(id)suggestedEventsWithQuery:(id)arg1 ;
-(id)highlightedEventsWithQuery:(id)arg1 ;
-(id)tripEventsWithQuery:(id)arg1 ;
@end


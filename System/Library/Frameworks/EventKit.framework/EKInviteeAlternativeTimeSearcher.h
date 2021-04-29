/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSMutableArray, EKSource, NSString, NSOperationQueue, NSMutableDictionary, NSArray;

@interface EKInviteeAlternativeTimeSearcher : NSObject {

	BOOL _noConflictRequired;
	BOOL _availabilityRequestInProgress;
	BOOL _internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
	BOOL _internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSDate* _internalOriginalStartDate;
	NSDate* _internalOriginalEndDate;
	NSDate* _originalRangeStartDate;
	NSMutableArray* _internalProposedStarts;
	EKSource* _source;
	NSString* _ignoredEventID;
	NSOperationQueue* _availabilityRequestsQueue;
	NSMutableDictionary* _participantAddressesToParticipants;
	NSString* _organizerAddress;
	NSDate* _nextAvailabilityRangeStartDate;
	double _availabilitySearchDurationMultiplier;
	unsigned long long _remainingSearchAttempts;
	NSMutableArray* _leftoverSpans;
	NSMutableArray* _internalTimesWhenAllAttendeesCanAttend;
	NSMutableArray* _internalTimesWhenSomeAttendeesCanAttend;
	NSMutableArray* _internalProposedTimes;
	NSMutableArray* _internalOriginalConflictedParticipants;
	/*^block*/id _stateChanged;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSDate * internalOriginalStartDate;                                        //@synthesize internalOriginalStartDate=_internalOriginalStartDate - In the implementation block
@property (nonatomic,retain) NSDate * internalOriginalEndDate;                                          //@synthesize internalOriginalEndDate=_internalOriginalEndDate - In the implementation block
@property (nonatomic,retain) NSDate * originalRangeStartDate;                                           //@synthesize originalRangeStartDate=_originalRangeStartDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalProposedStarts;                                   //@synthesize internalProposedStarts=_internalProposedStarts - In the implementation block
@property (nonatomic,retain) EKSource * source;                                                         //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * ignoredEventID;                                                 //@synthesize ignoredEventID=_ignoredEventID - In the implementation block
@property (nonatomic,retain) NSOperationQueue * availabilityRequestsQueue;                              //@synthesize availabilityRequestsQueue=_availabilityRequestsQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * participantAddressesToParticipants;                  //@synthesize participantAddressesToParticipants=_participantAddressesToParticipants - In the implementation block
@property (nonatomic,retain) NSString * organizerAddress;                                               //@synthesize organizerAddress=_organizerAddress - In the implementation block
@property (assign,nonatomic) BOOL availabilityRequestInProgress;                                        //@synthesize availabilityRequestInProgress=_availabilityRequestInProgress - In the implementation block
@property (nonatomic,retain) NSDate * nextAvailabilityRangeStartDate;                                   //@synthesize nextAvailabilityRangeStartDate=_nextAvailabilityRangeStartDate - In the implementation block
@property (assign,nonatomic) double availabilitySearchDurationMultiplier;                               //@synthesize availabilitySearchDurationMultiplier=_availabilitySearchDurationMultiplier - In the implementation block
@property (assign,nonatomic) unsigned long long remainingSearchAttempts;                                //@synthesize remainingSearchAttempts=_remainingSearchAttempts - In the implementation block
@property (nonatomic,retain) NSMutableArray * leftoverSpans;                                            //@synthesize leftoverSpans=_leftoverSpans - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalTimesWhenAllAttendeesCanAttend;                   //@synthesize internalTimesWhenAllAttendeesCanAttend=_internalTimesWhenAllAttendeesCanAttend - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalTimesWhenSomeAttendeesCanAttend;                  //@synthesize internalTimesWhenSomeAttendeesCanAttend=_internalTimesWhenSomeAttendeesCanAttend - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalProposedTimes;                                    //@synthesize internalProposedTimes=_internalProposedTimes - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalOriginalConflictedParticipants;                   //@synthesize internalOriginalConflictedParticipants=_internalOriginalConflictedParticipants - In the implementation block
@property (assign,nonatomic) BOOL internalSearchingForMoreTimesWhenAllAttendeesCanAttend;               //@synthesize internalSearchingForMoreTimesWhenAllAttendeesCanAttend=_internalSearchingForMoreTimesWhenAllAttendeesCanAttend - In the implementation block
@property (assign,nonatomic) BOOL internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;              //@synthesize internalSearchingForMoreTimesWhenSomeAttendeesCanAttend=_internalSearchingForMoreTimesWhenSomeAttendeesCanAttend - In the implementation block
@property (nonatomic,copy) id stateChanged;                                                             //@synthesize stateChanged=_stateChanged - In the implementation block
@property (nonatomic,readonly) NSDate * originalStartDate; 
@property (nonatomic,readonly) NSDate * originalEndDate; 
@property (nonatomic,readonly) NSArray * originalConflictedParticipants; 
@property (nonatomic,readonly) NSArray * timesWhenAllAttendeesCanAttend; 
@property (nonatomic,readonly) NSArray * timesWhenSomeAttendeesCanAttend; 
@property (nonatomic,readonly) NSArray * proposedTimes; 
@property (nonatomic,readonly) BOOL searchingForMoreTimesWhenAllAttendeesCanAttend; 
@property (nonatomic,readonly) BOOL searchingForMoreTimesWhenSomeAttendeesCanAttend; 
@property (assign,nonatomic) BOOL noConflictRequired;                                                   //@synthesize noConflictRequired=_noConflictRequired - In the implementation block
+(id)stateAsString:(long long)arg1 ;
+(id)_selfOrganizerForNewlyScheduledEventWithAddress:(id)arg1 ;
+(id)_findLeftoverSpans:(id)arg1 usingFreeTimes:(id)arg2 andNonOptimalTimes:(id)arg3 ;
+(long long)_binarySearchForIndexOfTimeSpanInArray:(id)arg1 containingDate:(id)arg2 ;
+(long long)_invalidBinarySearchIndex;
+(void)_validateSpans:(id)arg1 ;
+(id)_addressesForParticipants:(id)arg1 ;
+(BOOL)_span:(id)arg1 hasSameConflictedParticipantsAsSpan:(id)arg2 ;
+(id)_allButLastItemInArray:(id)arg1 ;
+(id)_allButFirstItemInArray:(id)arg1 ;
+(void)_insertUniqueParticipants:(id)arg1 intoExistingParticipantsArray:(id)arg2 ;
+(id)_rankNonOptimalTimeSpans:(id)arg1 ;
+(id)_findHighestRankedNonOptimalTimeSpans:(id)arg1 ;
-(void)dealloc;
-(EKSource *)source;
-(void)setSource:(EKSource *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithStateChangedCallback:(/*^block*/id)arg1 ;
-(void)setStateChanged:(id)arg1 ;
-(void)setParticipantAddressesToParticipants:(NSMutableDictionary *)arg1 ;
-(void)setInternalTimesWhenAllAttendeesCanAttend:(NSMutableArray *)arg1 ;
-(void)setInternalTimesWhenSomeAttendeesCanAttend:(NSMutableArray *)arg1 ;
-(void)setInternalOriginalConflictedParticipants:(NSMutableArray *)arg1 ;
-(void)setInternalProposedTimes:(NSMutableArray *)arg1 ;
-(void)setLeftoverSpans:(NSMutableArray *)arg1 ;
-(void)setAvailabilityRequestsQueue:(NSOperationQueue *)arg1 ;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSOperationQueue *)availabilityRequestsQueue;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(NSDate *)internalOriginalStartDate;
-(NSDate *)internalOriginalEndDate;
-(NSMutableArray *)internalOriginalConflictedParticipants;
-(NSMutableArray *)internalTimesWhenAllAttendeesCanAttend;
-(NSMutableArray *)internalTimesWhenSomeAttendeesCanAttend;
-(NSMutableArray *)internalProposedTimes;
-(BOOL)internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
-(BOOL)internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
-(void)setInternalSearchingForMoreTimesWhenAllAttendeesCanAttend:(BOOL)arg1 ;
-(void)_resetSearchFallbackNumbers;
-(void)_attemptSearch;
-(void)setInternalSearchingForMoreTimesWhenSomeAttendeesCanAttend:(BOOL)arg1 ;
-(void)setAvailabilityRequestInProgress:(BOOL)arg1 ;
-(NSMutableDictionary *)participantAddressesToParticipants;
-(NSMutableArray *)leftoverSpans;
-(void)setNextAvailabilityRangeStartDate:(NSDate *)arg1 ;
-(void)setInternalOriginalStartDate:(NSDate *)arg1 ;
-(void)setInternalOriginalEndDate:(NSDate *)arg1 ;
-(void)setOriginalRangeStartDate:(NSDate *)arg1 ;
-(void)setIgnoredEventID:(NSString *)arg1 ;
-(void)setOrganizerAddress:(NSString *)arg1 ;
-(void)_sendStateChange:(long long)arg1 ;
-(NSDate *)originalRangeStartDate;
-(NSMutableArray *)internalProposedStarts;
-(void)_transitionToConflictFoundStateAndSearch;
-(BOOL)noConflictRequired;
-(NSString *)ignoredEventID;
-(id)_participantforParticipantAddress:(id)arg1 ;
-(unsigned long long)remainingSearchAttempts;
-(void)_haltSearchWithError:(BOOL)arg1 ;
-(BOOL)availabilityRequestInProgress;
-(NSDate *)nextAvailabilityRangeStartDate;
-(double)availabilitySearchDurationMultiplier;
-(void)setAvailabilitySearchDurationMultiplier:(double)arg1 ;
-(void)_processResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)setRemainingSearchAttempts:(unsigned long long)arg1 ;
-(id)stateChanged;
-(id)_generateTimeSpansForResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3 ;
-(id)_spliceLeftTimeSpans:(id)arg1 andNewTimeSpans:(id)arg2 ;
-(id)_mergeAdjacentSpansWithSameConflictedParticipants:(id)arg1 ;
-(id)_generateOpenFreeTimesFromTimeSpans:(id)arg1 ;
-(id)_generateNonOptimalTimesFromTimeSpans:(id)arg1 ;
-(id)_filterOutUnreasonableTimeSlots:(id)arg1 ;
-(NSDate *)originalStartDate;
-(NSDate *)originalEndDate;
-(NSArray *)originalConflictedParticipants;
-(NSArray *)timesWhenAllAttendeesCanAttend;
-(NSArray *)timesWhenSomeAttendeesCanAttend;
-(NSArray *)proposedTimes;
-(BOOL)searchingForMoreTimesWhenAllAttendeesCanAttend;
-(BOOL)searchingForMoreTimesWhenSomeAttendeesCanAttend;
-(void)searchForMoreTimesWhenAllAttendeesCanAttend;
-(void)searchForMoreTimesWhenSomeAttendeesCanAttend;
-(void)resetWithEvent:(id)arg1 organizerAddressForNewlyScheduledEvent:(id)arg2 ;
-(void)setNoConflictRequired:(BOOL)arg1 ;
-(void)setInternalProposedStarts:(NSMutableArray *)arg1 ;
-(NSString *)organizerAddress;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLogMsgEventId, GEOLogMsgEventBatchTrafficProbe, GEOLogMsgEventClientACSuggestions, GEOLogMsgEventCommuteWindow, GEOLogMsgEventCuratedCollectionStats, GEOLogMsgEventCuratedCollectionUsage, GEOLogMsgEventDailyUseSummary, GEOLogMsgEventDirections, GEOLogMsgEventDirectionsRequestDetails, GEOLogMsgEventDisplayAnalytic, GEOLogMsgEventEVRoutingVehicleDetails, GEOLogMsgEventEVTrip, GEOLogMsgEventFullNavTrace, GEOLogMsgEventGenericAppError, GEOLogMsgEventGridDuration, GEOLogMsgEventHardStop, GEOLogMsgEventListInteractionSession, GEOLogMsgEventLogDiscard, GEOLogMsgEventLogFramework, NSMutableArray, GEOLogMsgEventMapKitCounts, GEOLogMsgEventMapLaunch, GEOLogMsgEventMapsDeviceSettings, GEOLogMsgEventMapsWidgetsInteractionSession, GEOLogMsgEventMarcoLiteUsage, GEOLogMsgEventNetwork, GEOLogMsgEventParkedCar, GEOLogMsgEventPlaceDataCache, GEOLogMsgEventPOIBusynessData, GEOLogMsgEventPredExTrainingData, GEOLogMsgEventPressureData, GEOLogMsgEventProactiveSuggestionInteractionSession, GEOLogMsgEventRealtimeTrafficProbe, GEOLogMsgEventRefineSearchSession, LOGMSGEVENTLogMsgEventRideBookedSession, LOGMSGEVENTLogMsgEventRideBookingSession, GEOLogMsgEventStateTiming, LOGMSGEVENTLogMsgEventTableBookedSession, LOGMSGEVENTLogMsgEventTableBookingSession, GEOLogMsgEventTelemetric, GEOLogMsgEventThrottle, GEOLogMsgEventTileCacheAnalytic, GEOLogMsgEventTileSetState, GEOLogMsgEventTimeToLeaveHypothesis, GEOLogMsgEventTimeToLeaveInitialTravelTime, GEOLogMsgEventTransitAppLaunch, GEOLogMsgEventTripDepartureFeedback, GEOLogMsgEventUserAction, GEOLogMsgEventVLFUsage, GEOLogMsgEventWifiConnectionQualityProbe;

@interface GEOLogMsgEvent : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLogMsgEventId* _analyticTag;
	GEOLogMsgEventBatchTrafficProbe* _batchTrafficProbeCollection;
	GEOLogMsgEventClientACSuggestions* _clientAcSuggestions;
	GEOLogMsgEventCommuteWindow* _commuteWindow;
	GEOLogMsgEventCuratedCollectionStats* _curatedCollectionStats;
	GEOLogMsgEventCuratedCollectionUsage* _curatedCollectionUsage;
	GEOLogMsgEventDailyUseSummary* _dailyUseSummary;
	GEOLogMsgEventDirections* _directionsEvent;
	GEOLogMsgEventDirectionsRequestDetails* _directionsRequestDetails;
	GEOLogMsgEventDisplayAnalytic* _displayAnalytic;
	GEOLogMsgEventEVRoutingVehicleDetails* _evRoutingVehicleDetails;
	GEOLogMsgEventEVTrip* _evTrip;
	GEOLogMsgEventFullNavTrace* _fullNavTrace;
	GEOLogMsgEventGenericAppError* _genericAppErrorEvent;
	GEOLogMsgEventGridDuration* _gridDuration;
	GEOLogMsgEventHardStop* _hardStop;
	GEOLogMsgEventListInteractionSession* _listInteractionSession;
	GEOLogMsgEventLogDiscard* _logDiscard;
	GEOLogMsgEventLogFramework* _logFrameworkEvent;
	NSMutableArray* _logMsgStates;
	GEOLogMsgEventMapKitCounts* _mapKitCounts;
	GEOLogMsgEventMapLaunch* _mapLaunchEvent;
	GEOLogMsgEventMapsDeviceSettings* _mapsDeviceSettings;
	GEOLogMsgEventMapsWidgetsInteractionSession* _mapsWidgetsInteractionSession;
	GEOLogMsgEventMarcoLiteUsage* _marcoLiteUsage;
	GEOLogMsgEventNetwork* _networkEvent;
	GEOLogMsgEventParkedCar* _parkedCar;
	GEOLogMsgEventPlaceDataCache* _placeDataCacheEvent;
	GEOLogMsgEventPOIBusynessData* _poiBusynessData;
	GEOLogMsgEventPredExTrainingData* _predExTrainingData;
	GEOLogMsgEventPressureData* _pressureData;
	GEOLogMsgEventProactiveSuggestionInteractionSession* _proactiveSuggestionInteractionSessionEvent;
	GEOLogMsgEventRealtimeTrafficProbe* _realtimeTrafficProbeCollection;
	GEOLogMsgEventRefineSearchSession* _refineSearchSession;
	LOGMSGEVENTLogMsgEventRideBookedSession* _rideBookedSession;
	LOGMSGEVENTLogMsgEventRideBookingSession* _rideBookingSession;
	GEOLogMsgEventStateTiming* _stateTimingEvent;
	LOGMSGEVENTLogMsgEventTableBookedSession* _tableBookedSession;
	LOGMSGEVENTLogMsgEventTableBookingSession* _tableBookingSession;
	GEOLogMsgEventTelemetric* _telemetric;
	GEOLogMsgEventThrottle* _throttleEvent;
	GEOLogMsgEventTileCacheAnalytic* _tileCacheAnalytic;
	GEOLogMsgEventTileSetState* _tileSetStateEvent;
	GEOLogMsgEventTimeToLeaveHypothesis* _timeToLeaveHypothesisEvent;
	GEOLogMsgEventTimeToLeaveInitialTravelTime* _timeToLeaveInitialTravelTimeEvent;
	GEOLogMsgEventTransitAppLaunch* _transitAppLaunchEvent;
	GEOLogMsgEventTripDepartureFeedback* _tripDepartureFeedback;
	double _usageEventTime;
	GEOLogMsgEventUserAction* _userActionEvent;
	GEOLogMsgEventVLFUsage* _vlfUsage;
	GEOLogMsgEventWifiConnectionQualityProbe* _wifiConnectionQualityProbeEvent;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _eventType;
	struct {
		unsigned has_usageEventTime : 1;
		unsigned has_eventType : 1;
		unsigned read_analyticTag : 1;
		unsigned read_batchTrafficProbeCollection : 1;
		unsigned read_clientAcSuggestions : 1;
		unsigned read_commuteWindow : 1;
		unsigned read_curatedCollectionStats : 1;
		unsigned read_curatedCollectionUsage : 1;
		unsigned read_dailyUseSummary : 1;
		unsigned read_directionsEvent : 1;
		unsigned read_directionsRequestDetails : 1;
		unsigned read_displayAnalytic : 1;
		unsigned read_evRoutingVehicleDetails : 1;
		unsigned read_evTrip : 1;
		unsigned read_fullNavTrace : 1;
		unsigned read_genericAppErrorEvent : 1;
		unsigned read_gridDuration : 1;
		unsigned read_hardStop : 1;
		unsigned read_listInteractionSession : 1;
		unsigned read_logDiscard : 1;
		unsigned read_logFrameworkEvent : 1;
		unsigned read_logMsgStates : 1;
		unsigned read_mapKitCounts : 1;
		unsigned read_mapLaunchEvent : 1;
		unsigned read_mapsDeviceSettings : 1;
		unsigned read_mapsWidgetsInteractionSession : 1;
		unsigned read_marcoLiteUsage : 1;
		unsigned read_networkEvent : 1;
		unsigned read_parkedCar : 1;
		unsigned read_placeDataCacheEvent : 1;
		unsigned read_poiBusynessData : 1;
		unsigned read_predExTrainingData : 1;
		unsigned read_pressureData : 1;
		unsigned read_proactiveSuggestionInteractionSessionEvent : 1;
		unsigned read_realtimeTrafficProbeCollection : 1;
		unsigned read_refineSearchSession : 1;
		unsigned read_rideBookedSession : 1;
		unsigned read_rideBookingSession : 1;
		unsigned read_stateTimingEvent : 1;
		unsigned read_tableBookedSession : 1;
		unsigned read_tableBookingSession : 1;
		unsigned read_telemetric : 1;
		unsigned read_throttleEvent : 1;
		unsigned read_tileCacheAnalytic : 1;
		unsigned read_tileSetStateEvent : 1;
		unsigned read_timeToLeaveHypothesisEvent : 1;
		unsigned read_timeToLeaveInitialTravelTimeEvent : 1;
		unsigned read_transitAppLaunchEvent : 1;
		unsigned read_tripDepartureFeedback : 1;
		unsigned read_userActionEvent : 1;
		unsigned read_vlfUsage : 1;
		unsigned read_wifiConnectionQualityProbeEvent : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasUsageEventTime; 
@property (assign,nonatomic) double usageEventTime; 
@property (nonatomic,retain) NSMutableArray * logMsgStates; 
@property (nonatomic,readonly) BOOL hasAnalyticTag; 
@property (nonatomic,retain) GEOLogMsgEventId * analyticTag; 
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType; 
@property (nonatomic,readonly) BOOL hasUserActionEvent; 
@property (nonatomic,retain) GEOLogMsgEventUserAction * userActionEvent; 
@property (nonatomic,readonly) BOOL hasStateTimingEvent; 
@property (nonatomic,retain) GEOLogMsgEventStateTiming * stateTimingEvent; 
@property (nonatomic,readonly) BOOL hasTileSetStateEvent; 
@property (nonatomic,retain) GEOLogMsgEventTileSetState * tileSetStateEvent; 
@property (nonatomic,readonly) BOOL hasPlaceDataCacheEvent; 
@property (nonatomic,retain) GEOLogMsgEventPlaceDataCache * placeDataCacheEvent; 
@property (nonatomic,readonly) BOOL hasNetworkEvent; 
@property (nonatomic,retain) GEOLogMsgEventNetwork * networkEvent; 
@property (nonatomic,readonly) BOOL hasDirectionsEvent; 
@property (nonatomic,retain) GEOLogMsgEventDirections * directionsEvent; 
@property (nonatomic,readonly) BOOL hasTransitAppLaunchEvent; 
@property (nonatomic,retain) GEOLogMsgEventTransitAppLaunch * transitAppLaunchEvent; 
@property (nonatomic,readonly) BOOL hasTimeToLeaveHypothesisEvent; 
@property (nonatomic,retain) GEOLogMsgEventTimeToLeaveHypothesis * timeToLeaveHypothesisEvent; 
@property (nonatomic,readonly) BOOL hasTimeToLeaveInitialTravelTimeEvent; 
@property (nonatomic,retain) GEOLogMsgEventTimeToLeaveInitialTravelTime * timeToLeaveInitialTravelTimeEvent; 
@property (nonatomic,readonly) BOOL hasLogFrameworkEvent; 
@property (nonatomic,retain) GEOLogMsgEventLogFramework * logFrameworkEvent; 
@property (nonatomic,readonly) BOOL hasMapsWidgetsInteractionSession; 
@property (nonatomic,retain) GEOLogMsgEventMapsWidgetsInteractionSession * mapsWidgetsInteractionSession; 
@property (nonatomic,readonly) BOOL hasListInteractionSession; 
@property (nonatomic,retain) GEOLogMsgEventListInteractionSession * listInteractionSession; 
@property (nonatomic,readonly) BOOL hasRefineSearchSession; 
@property (nonatomic,retain) GEOLogMsgEventRefineSearchSession * refineSearchSession; 
@property (nonatomic,readonly) BOOL hasProactiveSuggestionInteractionSessionEvent; 
@property (nonatomic,retain) GEOLogMsgEventProactiveSuggestionInteractionSession * proactiveSuggestionInteractionSessionEvent; 
@property (nonatomic,readonly) BOOL hasMapLaunchEvent; 
@property (nonatomic,retain) GEOLogMsgEventMapLaunch * mapLaunchEvent; 
@property (nonatomic,readonly) BOOL hasRideBookingSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventRideBookingSession * rideBookingSession; 
@property (nonatomic,readonly) BOOL hasRideBookedSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventRideBookedSession * rideBookedSession; 
@property (nonatomic,readonly) BOOL hasTableBookingSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventTableBookingSession * tableBookingSession; 
@property (nonatomic,readonly) BOOL hasTableBookedSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventTableBookedSession * tableBookedSession; 
@property (nonatomic,readonly) BOOL hasFullNavTrace; 
@property (nonatomic,retain) GEOLogMsgEventFullNavTrace * fullNavTrace; 
@property (nonatomic,readonly) BOOL hasTelemetric; 
@property (nonatomic,retain) GEOLogMsgEventTelemetric * telemetric; 
@property (nonatomic,readonly) BOOL hasClientAcSuggestions; 
@property (nonatomic,retain) GEOLogMsgEventClientACSuggestions * clientAcSuggestions; 
@property (nonatomic,readonly) BOOL hasRealtimeTrafficProbeCollection; 
@property (nonatomic,retain) GEOLogMsgEventRealtimeTrafficProbe * realtimeTrafficProbeCollection; 
@property (nonatomic,readonly) BOOL hasBatchTrafficProbeCollection; 
@property (nonatomic,retain) GEOLogMsgEventBatchTrafficProbe * batchTrafficProbeCollection; 
@property (nonatomic,readonly) BOOL hasCommuteWindow; 
@property (nonatomic,retain) GEOLogMsgEventCommuteWindow * commuteWindow; 
@property (nonatomic,readonly) BOOL hasGenericAppErrorEvent; 
@property (nonatomic,retain) GEOLogMsgEventGenericAppError * genericAppErrorEvent; 
@property (nonatomic,readonly) BOOL hasWifiConnectionQualityProbeEvent; 
@property (nonatomic,retain) GEOLogMsgEventWifiConnectionQualityProbe * wifiConnectionQualityProbeEvent; 
@property (nonatomic,readonly) BOOL hasParkedCar; 
@property (nonatomic,retain) GEOLogMsgEventParkedCar * parkedCar; 
@property (nonatomic,readonly) BOOL hasTileCacheAnalytic; 
@property (nonatomic,retain) GEOLogMsgEventTileCacheAnalytic * tileCacheAnalytic; 
@property (nonatomic,readonly) BOOL hasGridDuration; 
@property (nonatomic,retain) GEOLogMsgEventGridDuration * gridDuration; 
@property (nonatomic,readonly) BOOL hasDisplayAnalytic; 
@property (nonatomic,retain) GEOLogMsgEventDisplayAnalytic * displayAnalytic; 
@property (nonatomic,readonly) BOOL hasThrottleEvent; 
@property (nonatomic,retain) GEOLogMsgEventThrottle * throttleEvent; 
@property (nonatomic,readonly) BOOL hasMapKitCounts; 
@property (nonatomic,retain) GEOLogMsgEventMapKitCounts * mapKitCounts; 
@property (nonatomic,readonly) BOOL hasPredExTrainingData; 
@property (nonatomic,retain) GEOLogMsgEventPredExTrainingData * predExTrainingData; 
@property (nonatomic,readonly) BOOL hasMarcoLiteUsage; 
@property (nonatomic,retain) GEOLogMsgEventMarcoLiteUsage * marcoLiteUsage; 
@property (nonatomic,readonly) BOOL hasTripDepartureFeedback; 
@property (nonatomic,retain) GEOLogMsgEventTripDepartureFeedback * tripDepartureFeedback; 
@property (nonatomic,readonly) BOOL hasDirectionsRequestDetails; 
@property (nonatomic,retain) GEOLogMsgEventDirectionsRequestDetails * directionsRequestDetails; 
@property (nonatomic,readonly) BOOL hasEvRoutingVehicleDetails; 
@property (nonatomic,retain) GEOLogMsgEventEVRoutingVehicleDetails * evRoutingVehicleDetails; 
@property (nonatomic,readonly) BOOL hasEvTrip; 
@property (nonatomic,retain) GEOLogMsgEventEVTrip * evTrip; 
@property (nonatomic,readonly) BOOL hasCuratedCollectionStats; 
@property (nonatomic,retain) GEOLogMsgEventCuratedCollectionStats * curatedCollectionStats; 
@property (nonatomic,readonly) BOOL hasCuratedCollectionUsage; 
@property (nonatomic,retain) GEOLogMsgEventCuratedCollectionUsage * curatedCollectionUsage; 
@property (nonatomic,readonly) BOOL hasMapsDeviceSettings; 
@property (nonatomic,retain) GEOLogMsgEventMapsDeviceSettings * mapsDeviceSettings; 
@property (nonatomic,readonly) BOOL hasHardStop; 
@property (nonatomic,retain) GEOLogMsgEventHardStop * hardStop; 
@property (nonatomic,readonly) BOOL hasVlfUsage; 
@property (nonatomic,retain) GEOLogMsgEventVLFUsage * vlfUsage; 
@property (nonatomic,readonly) BOOL hasLogDiscard; 
@property (nonatomic,retain) GEOLogMsgEventLogDiscard * logDiscard; 
@property (nonatomic,readonly) BOOL hasDailyUseSummary; 
@property (nonatomic,retain) GEOLogMsgEventDailyUseSummary * dailyUseSummary; 
@property (nonatomic,readonly) BOOL hasPressureData; 
@property (nonatomic,retain) GEOLogMsgEventPressureData * pressureData; 
@property (nonatomic,readonly) BOOL hasPoiBusynessData; 
@property (nonatomic,retain) GEOLogMsgEventPOIBusynessData * poiBusynessData; 
+(BOOL)isValid:(id)arg1 ;
+(Class)logMsgStateType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)eventType;
-(void)setEventType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(double)usageEventTime;
-(void)setUsageEventTime:(double)arg1 ;
-(GEOLogMsgEventPredExTrainingData *)predExTrainingData;
-(void)setPredExTrainingData:(GEOLogMsgEventPredExTrainingData *)arg1 ;
-(BOOL)hasPredExTrainingData;
-(GEOLogMsgEventId *)analyticTag;
-(void)setAnalyticTag:(GEOLogMsgEventId *)arg1 ;
-(void)setLogDiscard:(GEOLogMsgEventLogDiscard *)arg1 ;
-(GEOLogMsgEventLogDiscard *)logDiscard;
-(void)addLogMsgState:(id)arg1 ;
-(void)setPressureData:(GEOLogMsgEventPressureData *)arg1 ;
-(GEOLogMsgEventPressureData *)pressureData;
-(void)setTileCacheAnalytic:(GEOLogMsgEventTileCacheAnalytic *)arg1 ;
-(GEOLogMsgEventTileCacheAnalytic *)tileCacheAnalytic;
-(void)setPoiBusynessData:(GEOLogMsgEventPOIBusynessData *)arg1 ;
-(GEOLogMsgEventPOIBusynessData *)poiBusynessData;
-(void)setParkedCar:(GEOLogMsgEventParkedCar *)arg1 ;
-(GEOLogMsgEventParkedCar *)parkedCar;
-(void)setRealtimeTrafficProbeCollection:(GEOLogMsgEventRealtimeTrafficProbe *)arg1 ;
-(GEOLogMsgEventRealtimeTrafficProbe *)realtimeTrafficProbeCollection;
-(void)setBatchTrafficProbeCollection:(GEOLogMsgEventBatchTrafficProbe *)arg1 ;
-(GEOLogMsgEventBatchTrafficProbe *)batchTrafficProbeCollection;
-(void)setNetworkEvent:(GEOLogMsgEventNetwork *)arg1 ;
-(GEOLogMsgEventNetwork *)networkEvent;
-(void)setWifiConnectionQualityProbeEvent:(GEOLogMsgEventWifiConnectionQualityProbe *)arg1 ;
-(GEOLogMsgEventWifiConnectionQualityProbe *)wifiConnectionQualityProbeEvent;
-(void)setClientAcSuggestions:(GEOLogMsgEventClientACSuggestions *)arg1 ;
-(GEOLogMsgEventClientACSuggestions *)clientAcSuggestions;
-(void)setGridDuration:(GEOLogMsgEventGridDuration *)arg1 ;
-(GEOLogMsgEventGridDuration *)gridDuration;
-(void)setDirectionsEvent:(GEOLogMsgEventDirections *)arg1 ;
-(GEOLogMsgEventDirections *)directionsEvent;
-(void)setFullNavTrace:(GEOLogMsgEventFullNavTrace *)arg1 ;
-(GEOLogMsgEventFullNavTrace *)fullNavTrace;
-(void)setUserActionEvent:(GEOLogMsgEventUserAction *)arg1 ;
-(GEOLogMsgEventUserAction *)userActionEvent;
-(void)setThrottleEvent:(GEOLogMsgEventThrottle *)arg1 ;
-(GEOLogMsgEventThrottle *)throttleEvent;
-(void)setMarcoLiteUsage:(GEOLogMsgEventMarcoLiteUsage *)arg1 ;
-(GEOLogMsgEventMarcoLiteUsage *)marcoLiteUsage;
-(void)setProactiveSuggestionInteractionSessionEvent:(GEOLogMsgEventProactiveSuggestionInteractionSession *)arg1 ;
-(GEOLogMsgEventProactiveSuggestionInteractionSession *)proactiveSuggestionInteractionSessionEvent;
-(void)setMapLaunchEvent:(GEOLogMsgEventMapLaunch *)arg1 ;
-(GEOLogMsgEventMapLaunch *)mapLaunchEvent;
-(void)setTileSetStateEvent:(GEOLogMsgEventTileSetState *)arg1 ;
-(GEOLogMsgEventTileSetState *)tileSetStateEvent;
-(void)setTransitAppLaunchEvent:(GEOLogMsgEventTransitAppLaunch *)arg1 ;
-(GEOLogMsgEventTransitAppLaunch *)transitAppLaunchEvent;
-(void)setTimeToLeaveHypothesisEvent:(GEOLogMsgEventTimeToLeaveHypothesis *)arg1 ;
-(GEOLogMsgEventTimeToLeaveHypothesis *)timeToLeaveHypothesisEvent;
-(void)setTimeToLeaveInitialTravelTimeEvent:(GEOLogMsgEventTimeToLeaveInitialTravelTime *)arg1 ;
-(GEOLogMsgEventTimeToLeaveInitialTravelTime *)timeToLeaveInitialTravelTimeEvent;
-(void)setMapsWidgetsInteractionSession:(GEOLogMsgEventMapsWidgetsInteractionSession *)arg1 ;
-(GEOLogMsgEventMapsWidgetsInteractionSession *)mapsWidgetsInteractionSession;
-(void)setCommuteWindow:(GEOLogMsgEventCommuteWindow *)arg1 ;
-(GEOLogMsgEventCommuteWindow *)commuteWindow;
-(void)setMapKitCounts:(GEOLogMsgEventMapKitCounts *)arg1 ;
-(GEOLogMsgEventMapKitCounts *)mapKitCounts;
-(void)setDailyUseSummary:(GEOLogMsgEventDailyUseSummary *)arg1 ;
-(GEOLogMsgEventDailyUseSummary *)dailyUseSummary;
-(void)setTelemetric:(GEOLogMsgEventTelemetric *)arg1 ;
-(GEOLogMsgEventTelemetric *)telemetric;
-(void)setTripDepartureFeedback:(GEOLogMsgEventTripDepartureFeedback *)arg1 ;
-(GEOLogMsgEventTripDepartureFeedback *)tripDepartureFeedback;
-(void)setRideBookingSession:(LOGMSGEVENTLogMsgEventRideBookingSession *)arg1 ;
-(LOGMSGEVENTLogMsgEventRideBookingSession *)rideBookingSession;
-(void)setRideBookedSession:(LOGMSGEVENTLogMsgEventRideBookedSession *)arg1 ;
-(LOGMSGEVENTLogMsgEventRideBookedSession *)rideBookedSession;
-(void)setTableBookingSession:(LOGMSGEVENTLogMsgEventTableBookingSession *)arg1 ;
-(LOGMSGEVENTLogMsgEventTableBookingSession *)tableBookingSession;
-(void)setTableBookedSession:(LOGMSGEVENTLogMsgEventTableBookedSession *)arg1 ;
-(LOGMSGEVENTLogMsgEventTableBookedSession *)tableBookedSession;
-(void)setDirectionsRequestDetails:(GEOLogMsgEventDirectionsRequestDetails *)arg1 ;
-(GEOLogMsgEventDirectionsRequestDetails *)directionsRequestDetails;
-(void)setEvRoutingVehicleDetails:(GEOLogMsgEventEVRoutingVehicleDetails *)arg1 ;
-(GEOLogMsgEventEVRoutingVehicleDetails *)evRoutingVehicleDetails;
-(void)setEvTrip:(GEOLogMsgEventEVTrip *)arg1 ;
-(GEOLogMsgEventEVTrip *)evTrip;
-(void)setCuratedCollectionUsage:(GEOLogMsgEventCuratedCollectionUsage *)arg1 ;
-(GEOLogMsgEventCuratedCollectionUsage *)curatedCollectionUsage;
-(void)setCuratedCollectionStats:(GEOLogMsgEventCuratedCollectionStats *)arg1 ;
-(GEOLogMsgEventCuratedCollectionStats *)curatedCollectionStats;
-(void)setMapsDeviceSettings:(GEOLogMsgEventMapsDeviceSettings *)arg1 ;
-(void)setHardStop:(GEOLogMsgEventHardStop *)arg1 ;
-(GEOLogMsgEventHardStop *)hardStop;
-(void)setVlfUsage:(GEOLogMsgEventVLFUsage *)arg1 ;
-(GEOLogMsgEventVLFUsage *)vlfUsage;
-(NSMutableArray *)logMsgStates;
-(GEOLogMsgEventStateTiming *)stateTimingEvent;
-(GEOLogMsgEventPlaceDataCache *)placeDataCacheEvent;
-(GEOLogMsgEventLogFramework *)logFrameworkEvent;
-(GEOLogMsgEventListInteractionSession *)listInteractionSession;
-(GEOLogMsgEventRefineSearchSession *)refineSearchSession;
-(GEOLogMsgEventGenericAppError *)genericAppErrorEvent;
-(GEOLogMsgEventDisplayAnalytic *)displayAnalytic;
-(GEOLogMsgEventMapsDeviceSettings *)mapsDeviceSettings;
-(void)setStateTimingEvent:(GEOLogMsgEventStateTiming *)arg1 ;
-(void)setPlaceDataCacheEvent:(GEOLogMsgEventPlaceDataCache *)arg1 ;
-(void)setLogFrameworkEvent:(GEOLogMsgEventLogFramework *)arg1 ;
-(void)setListInteractionSession:(GEOLogMsgEventListInteractionSession *)arg1 ;
-(void)setRefineSearchSession:(GEOLogMsgEventRefineSearchSession *)arg1 ;
-(void)setGenericAppErrorEvent:(GEOLogMsgEventGenericAppError *)arg1 ;
-(void)setDisplayAnalytic:(GEOLogMsgEventDisplayAnalytic *)arg1 ;
-(unsigned long long)logMsgStatesCount;
-(void)clearLogMsgStates;
-(id)logMsgStateAtIndex:(unsigned long long)arg1 ;
-(void)setLogMsgStates:(NSMutableArray *)arg1 ;
-(BOOL)hasAnalyticTag;
-(BOOL)hasUserActionEvent;
-(BOOL)hasStateTimingEvent;
-(BOOL)hasTileSetStateEvent;
-(BOOL)hasPlaceDataCacheEvent;
-(BOOL)hasNetworkEvent;
-(BOOL)hasDirectionsEvent;
-(BOOL)hasTransitAppLaunchEvent;
-(BOOL)hasTimeToLeaveHypothesisEvent;
-(BOOL)hasTimeToLeaveInitialTravelTimeEvent;
-(BOOL)hasLogFrameworkEvent;
-(BOOL)hasMapsWidgetsInteractionSession;
-(BOOL)hasListInteractionSession;
-(BOOL)hasRefineSearchSession;
-(BOOL)hasProactiveSuggestionInteractionSessionEvent;
-(BOOL)hasMapLaunchEvent;
-(BOOL)hasRideBookingSession;
-(BOOL)hasRideBookedSession;
-(BOOL)hasTableBookingSession;
-(BOOL)hasTableBookedSession;
-(BOOL)hasFullNavTrace;
-(BOOL)hasTelemetric;
-(BOOL)hasClientAcSuggestions;
-(BOOL)hasRealtimeTrafficProbeCollection;
-(BOOL)hasBatchTrafficProbeCollection;
-(BOOL)hasCommuteWindow;
-(BOOL)hasGenericAppErrorEvent;
-(BOOL)hasWifiConnectionQualityProbeEvent;
-(BOOL)hasParkedCar;
-(BOOL)hasTileCacheAnalytic;
-(BOOL)hasGridDuration;
-(BOOL)hasDisplayAnalytic;
-(BOOL)hasThrottleEvent;
-(BOOL)hasMapKitCounts;
-(BOOL)hasMarcoLiteUsage;
-(BOOL)hasTripDepartureFeedback;
-(BOOL)hasDirectionsRequestDetails;
-(BOOL)hasEvRoutingVehicleDetails;
-(BOOL)hasEvTrip;
-(BOOL)hasCuratedCollectionStats;
-(BOOL)hasCuratedCollectionUsage;
-(BOOL)hasMapsDeviceSettings;
-(BOOL)hasHardStop;
-(BOOL)hasVlfUsage;
-(BOOL)hasLogDiscard;
-(BOOL)hasDailyUseSummary;
-(BOOL)hasPressureData;
-(BOOL)hasPoiBusynessData;
-(void)setHasUsageEventTime:(BOOL)arg1 ;
-(BOOL)hasUsageEventTime;
@end


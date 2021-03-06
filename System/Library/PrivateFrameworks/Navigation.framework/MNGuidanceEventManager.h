/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNGuidanceManager.h>
#import <libobjc.A.dylib/MNTimeManagerObserver.h>

@protocol MNGuidanceManagerDelegate, MNAnnoucementStrategy;
@class MNNavigationSession, MNJunctionViewImageLoader, NSMutableArray, GEOComposedGuidanceEvent, NSDictionary, NSMutableDictionary, NSMutableSet, MNGuidanceSignInfo, MNAnnouncementPlanEvent, MNLocation, NSArray, NSString;

@interface MNGuidanceEventManager : NSObject <MNGuidanceManager, MNTimeManagerObserver> {

	id<MNGuidanceManagerDelegate> _delegate;
	MNNavigationSession* _navigationSession;
	MNJunctionViewImageLoader* _junctionViewImageLoader;
	NSMutableArray* _events;
	GEOComposedGuidanceEvent* _nextEvent;
	NSDictionary* _eventIndexes;
	id<MNAnnoucementStrategy> _announcementStrategy;
	NSMutableDictionary* _announcementsSpoken;
	NSMutableSet* _exclusiveSetAnnouncementsSpoken;
	NSMutableDictionary* _hapticsTriggered;
	NSMutableSet* _announcementsSynthesized;
	GEOComposedGuidanceEvent* _currentLaneGuidanceEvent;
	MNGuidanceSignInfo* _signInfo;
	GEOComposedGuidanceEvent* _pendingJunctionViewGuidanceEvent;
	GEOComposedGuidanceEvent* _currentJunctionViewGuidanceEvent;
	NSMutableDictionary* _specialSpokenEvents;
	NSMutableDictionary* _specialSignEvents;
	BOOL _hasBeenOnRouteOnce;
	BOOL _canSpeakReturnToRouteAnnouncement;
	BOOL _isInPreArrivalState;
	double _timeLastAnnouncementStarted;
	double _timeLastAnnouncementEnded;
	MNAnnouncementPlanEvent* _lastAnnouncementEvent;
	unsigned long long _lastStepIndex;
	BOOL _hasStickyEvents;
	MNLocation* _location;
	double _speed;
	NSMutableArray* _validEvents;
	NSMutableDictionary* _feedback;
	NSArray* _previousSignEvents;
	GEOComposedGuidanceEvent* _previousLaneGuidanceEvent;
	BOOL _shouldShowChargingInfo;

}

@property (nonatomic,readonly) NSArray * events;                                         //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) MNLocation * location;                                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double speed;                                               //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL isInPreArrivalState;                                   //@synthesize isInPreArrivalState=_isInPreArrivalState - In the implementation block
@property (assign,nonatomic) BOOL shouldShowChargingInfo;                                //@synthesize shouldShowChargingInfo=_shouldShowChargingInfo - In the implementation block
@property (assign,nonatomic,__weak) id<MNGuidanceManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MNGuidanceManagerDelegate>)delegate;
-(void)setDelegate:(id<MNGuidanceManagerDelegate>)arg1 ;
-(void)stop;
-(void)reset;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(MNLocation *)location;
-(void)setLocation:(MNLocation *)arg1 ;
-(NSArray *)events;
-(void)updateDestination:(id)arg1 ;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(void)updateForReroute:(id)arg1 ;
-(double)timeSinceLastAnnouncement;
-(double)timeUntilNextAnnouncement;
-(double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3 ;
-(BOOL)isInPreArrivalState;
-(void)setIsInPreArrivalState:(BOOL)arg1 ;
-(void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2 ;
-(BOOL)repeatLastGuidanceAnnouncement:(id)arg1 ;
-(void)_initSpecialGuidanceEvents;
-(id)_specialSpokenEvents:(int)arg1 forLeg:(unsigned long long)arg2 ;
-(void)_markEventSpoken:(id)arg1 ;
-(void)_cacheStartingAudioEvents;
-(BOOL)_isSpecialGuidanceEvent:(id)arg1 ;
-(BOOL)_hasSpokenEvent:(id)arg1 ;
-(double)_adjustedVehicleSpeed;
-(BOOL)_isValidEvent:(id)arg1 ;
-(void)_notifySpeechEvent:(id)arg1 variant:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 ;
-(double)_timeUntilEventTrigger:(id)arg1 ;
-(void)_cacheAudioEventIfNecessary:(id)arg1 ;
-(BOOL)_isPrivateGuidanceEventType:(int)arg1 ;
-(BOOL)_isPrivateManeuverType:(int)arg1 ;
-(void)_filterValidEvents;
-(void)_cacheValidAudioEvents;
-(id)_junctionViewEvents;
-(double)_distanceToEndOfRoute;
-(void)_stepDidChange;
-(void)_considerAnnouncements;
-(void)_considerHaptics;
-(void)_considerLaneGuidance;
-(void)_considerSignGuidance;
-(void)_considerStickiness;
-(void)_considerJunctionViewGuidance;
-(void)_cacheEndingAudioEvents;
-(id)_spokenEventsRemainingInStep;
-(double)_distanceToRouteCoordinate:(PolylineCoordinate)arg1 ;
-(int)_indexForEventUUID:(id)arg1 ;
-(void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2 ;
-(id)_specialSignEvents:(int)arg1 forLeg:(unsigned long long)arg2 ;
-(BOOL)_isEVChargingEvent:(id)arg1 ;
-(id)_serverStringDictionaryForChargingEvent:(id)arg1 ;
-(void)_handleJunctionViewInfo:(id)arg1 ;
-(unsigned)_trafficColorForRoute:(id)arg1 traffic:(id)arg2 distanceRemaining:(double)arg3 ;
-(double)_timeRemainingForEvent:(id)arg1 ;
-(id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 withMinIndex:(unsigned long long)arg3 selectedIndex:(out unsigned long long*)arg4 ;
-(id)_serverStringDictionaryForEvent:(id)arg1 spoken:(BOOL)arg2 ;
-(void)timeManagerDidChangeProvider:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 isReconnecting:(BOOL)arg2 ;
-(BOOL)_shouldUseLocation:(id)arg1 ;
-(BOOL)shouldShowChargingInfo;
-(void)setShouldShowChargingInfo:(BOOL)arg1 ;
@end


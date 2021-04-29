/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol flowDispositionObserver;
@class NSArray, NSMutableDictionary, TrackerPolicy, NWUsageTargetSelector, NetworkAnalyticsStateRelay, NSDate, LightweightTimer;

@interface InterfaceTypeTracker : NSObject {

	NSArray* _alwaysNote;
	NSArray* _neverNote;
	NSArray* _daemonCheck;
	NSMutableDictionary* _trackerCache;
	long long _interfaceType;
	id<flowDispositionObserver> _observer;
	TrackerPolicy* _defaultPolicy;
	NWUsageTargetSelector* _targetFlowsNewWiFi;
	NetworkAnalyticsStateRelay* _stateRelay;
	NSDate* _madePrimaryDate;
	LightweightTimer* _lwTimer;

}

@property (retain) NSArray * alwaysNote;                                    //@synthesize alwaysNote=_alwaysNote - In the implementation block
@property (retain) NSArray * neverNote;                                     //@synthesize neverNote=_neverNote - In the implementation block
@property (retain) NSArray * daemonCheck;                                   //@synthesize daemonCheck=_daemonCheck - In the implementation block
@property (retain) NSMutableDictionary * trackerCache;                      //@synthesize trackerCache=_trackerCache - In the implementation block
@property (assign) long long interfaceType;                                 //@synthesize interfaceType=_interfaceType - In the implementation block
@property (retain) id<flowDispositionObserver> observer;                    //@synthesize observer=_observer - In the implementation block
@property (retain) TrackerPolicy * defaultPolicy;                           //@synthesize defaultPolicy=_defaultPolicy - In the implementation block
@property (retain) NWUsageTargetSelector * targetFlowsNewWiFi;              //@synthesize targetFlowsNewWiFi=_targetFlowsNewWiFi - In the implementation block
@property (retain) NetworkAnalyticsStateRelay * stateRelay;                 //@synthesize stateRelay=_stateRelay - In the implementation block
@property (retain) NSDate * madePrimaryDate;                                //@synthesize madePrimaryDate=_madePrimaryDate - In the implementation block
@property (retain) LightweightTimer * lwTimer;                              //@synthesize lwTimer=_lwTimer - In the implementation block
-(id)description;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setObserver:(id<flowDispositionObserver>)arg1 ;
-(id<flowDispositionObserver>)observer;
-(void)setInterfaceType:(long long)arg1 ;
-(long long)interfaceType;
-(TrackerPolicy *)defaultPolicy;
-(void)_dumpState;
-(NSDate *)madePrimaryDate;
-(void)noteFlow:(id)arg1 withDelegatee:(id)arg2 snapshot:(id)arg3 ;
-(void)noteFlow:(id)arg1 withOwner:(id)arg2 snapshot:(id)arg3 ;
-(void)setMadePrimaryDate:(NSDate *)arg1 ;
-(void)configurePolicies:(id)arg1 ;
-(id)infoDir;
-(NSMutableDictionary *)trackerCache;
-(void)noteFlowClassificationExpiry:(id)arg1 ;
-(void)setupLightweightTimer;
-(unsigned long long)scheduleExpiryCheckFor:(unsigned long long)arg1 delay:(double)arg2 ;
-(void)removeLinkages:(id)arg1 ;
-(void)_trackerCachePrune;
-(id)initWithInterfaceType:(long long)arg1 ;
-(void)getNetworkActivity:(/*^block*/id)arg1 ;
-(NSArray *)alwaysNote;
-(void)setAlwaysNote:(NSArray *)arg1 ;
-(NSArray *)neverNote;
-(void)setNeverNote:(NSArray *)arg1 ;
-(NSArray *)daemonCheck;
-(void)setDaemonCheck:(NSArray *)arg1 ;
-(void)setTrackerCache:(NSMutableDictionary *)arg1 ;
-(void)setDefaultPolicy:(TrackerPolicy *)arg1 ;
-(NWUsageTargetSelector *)targetFlowsNewWiFi;
-(void)setTargetFlowsNewWiFi:(NWUsageTargetSelector *)arg1 ;
-(NetworkAnalyticsStateRelay *)stateRelay;
-(void)setStateRelay:(NetworkAnalyticsStateRelay *)arg1 ;
-(LightweightTimer *)lwTimer;
-(void)setLwTimer:(LightweightTimer *)arg1 ;
@end


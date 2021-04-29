/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class TCPProgressProbe, NSDate, NSObject, NSString;

@interface LiveLinkObserver : NSObject {

	int notifyToken;
	TCPProgressProbe* _tcpProgressProbe;
	NSDate* _timeOfProbeStart;
	NSObject*<OS_dispatch_source> progressProbeTimer;
	unsigned long long _iter;
	BOOL _localFlowsDisabled;
	BOOL _localFlowsEnabled;
	BOOL _premiumModeEnabled;
	NSString* _interfaceName;
	unsigned long long _tcpProgressScore;

}

@property (nonatomic,readonly) NSString * interfaceName;                         //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,readonly) unsigned long long tcpProgressScore;              //@synthesize tcpProgressScore=_tcpProgressScore - In the implementation block
@property (nonatomic,readonly) BOOL premiumModeEnabled;                          //@synthesize premiumModeEnabled=_premiumModeEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSString *)interfaceName;
-(id)initWithInterfaceName:(id)arg1 ;
-(BOOL)startTracking;
-(BOOL)stopTracking;
-(void)disablePremiumMode;
-(BOOL)attemptStartProgressProbe;
-(void)startProgressProbeTimerWithInterval:(unsigned long long)arg1 capWindowTo:(unsigned long long)arg2 ;
-(void)stopProgressProbeTimer;
-(void)_captureProgressWithInterval:(unsigned long long)arg1 capWindowTo:(unsigned long long)arg2 ;
-(unsigned long long)_assessProgressFromBaseline:(xtcpprogress_indicators*)arg1 toMetrics:(xtcpprogress_indicators*)arg2 ;
-(void)postHasAdviceNotification:(BOOL)arg1 ;
-(void)enablePremiumMode;
-(BOOL)enableLocalFlowsTracking;
-(BOOL)disableLocalFlowsTracking;
-(unsigned long long)tcpProgressScore;
-(BOOL)premiumModeEnabled;
@end


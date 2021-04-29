/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DNDStateUpdateListener.h>

@protocol OS_dispatch_queue;
@class NSObject, DNDStateService, DNDState, NSString;

@interface DNDAWDMetricsService : NSObject <DNDStateUpdateListener> {

	NSObject*<OS_dispatch_queue> _queue;
	DNDStateService* _notificationsStateService;
	DNDState* _currentState;
	unsigned long long _lockState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resume;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)_queue_postAWDMetric;
-(void)handleTransitionToUILocked:(BOOL)arg1 ;
-(unsigned long long)_queue_currentAWDMetricState;
@end


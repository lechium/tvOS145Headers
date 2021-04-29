/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IdleTimerServices/IdleTimerServices-Structs.h>
#import <libobjc.A.dylib/ITIdleTimerStateRequestDelegate.h>

@protocol ITIdleTimerStateRequestHandling, BSInvalidatable;
@class NSMutableDictionary, NSString;

@interface ITIdleTimerStateModel : NSObject <ITIdleTimerStateRequestDelegate> {

	os_unfair_lock_s _accessLock;
	NSMutableDictionary* _access_idleTimerAssertionsByConfigIdentifier;
	id<ITIdleTimerStateRequestHandling> _requestHandler;
	id<BSInvalidatable> _stateCaptureAssertion;

}

@property (getter=isIdleTimerServiceAvailable,readonly) BOOL idleTimerServiceAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(id)arg2 ;
-(void)_addStateCaptureHandler;
-(BOOL)isIdleTimerServiceAvailable;
-(void)resendIdleTimerAssertions;
-(id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3 ;
-(id)_access_newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3 ;
@end


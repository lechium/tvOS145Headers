/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/MNNavigationState.h>

@class NSArray, MNNavigationSessionManager;

@interface MNNavigationStatePrepareGuidance : MNNavigationState {

	NSArray* _previewRoutes;
	unsigned long long _selectedRouteIndex;
	MNNavigationSessionManager* _navigationSessionManager;

}
-(unsigned long long)type;
-(void)enterState;
-(void)stopNavigationWithReason:(unsigned long long)arg1 ;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(id)traceManager;
-(id)simulationLocationProvider;
-(void)leaveState;
-(BOOL)requiresHighMemoryThreshold;
-(unsigned long long)desiredLocationProviderType;
-(BOOL)shouldClearStoredRoutes;
-(id)initWithStateManager:(id)arg1 previewRoutes:(id)arg2 selectedRouteIndex:(unsigned long long)arg3 ;
@end


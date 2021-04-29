/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNNavigationServiceProxy <NSObject>
@required
-(void)setGuidancePromptsEnabled:(BOOL)arg1;
-(void)setIsConnectedToCarplay:(BOOL)arg1;
-(void)setDisplayedStepIndex:(unsigned long long)arg1;
-(void)setHeadingOrientation:(int)arg1;
-(void)stopNavigationWithReason:(unsigned long long)arg1;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2;
-(void)startPredictingDestinationsWithHandler:(/*^block*/id)arg1;
-(void)stopPredictingDestinations;
-(void)updateDestination:(id)arg1;
-(void)resumeOriginalDestination;
-(void)switchToRoute:(id)arg1;
-(void)setFullGuidanceMode:(BOOL)arg1;
-(void)changeSettings:(id)arg1;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2;
-(void)stopCurrentGuidancePrompt;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
-(void)setCurrentAudioOutputSetting:(id)arg1;
-(void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2;
-(void)setTraceIsPlaying:(BOOL)arg1;
-(void)setTracePlaybackSpeed:(double)arg1;
-(void)setTracePosition:(double)arg1;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
-(void)recordPedestrianTracePath:(id)arg1;
-(void)interfaceHashesWithHandler:(/*^block*/id)arg1;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
-(void)checkinForNavigationService:(/*^block*/id)arg1;

@end


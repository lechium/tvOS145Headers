/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaExperience/MediaExperience-Structs.h>
#import <MediaExperience/MXTestSessionFactory.h>

@interface MXTestCore : MXTestSessionFactory {

	unsigned char mIsInterruptionResumable;
	int mInterruptionError;
	CFBooleanRef mMutePolicyForMXSessionIsMuted;
	int mMutePolicyError;
	BOOL mNotificationReceived;

}
-(int)testSimultaneousPlaybackOfMixableAndNonMixableSessions:(opaqueCMSessionRef)arg1 nonMixableSession:(opaqueCMSessionRef)arg2 ;
-(int)testIsRecording:(opaqueCMSessionRef)arg1 ;
-(int)testInterruption:(opaqueCMSessionRef)arg1 andInterruptor:(opaqueCMSessionRef)arg2 interruptionTypeResumable:(unsigned char)arg3 ;
-(int)testIsActive:(opaqueCMSessionRef)arg1 ;
-(int)testIsPlaying:(opaqueCMSessionRef)arg1 ;
-(int)testSimultaneousPlaybackOfMixableSessions:(opaqueCMSessionRef)arg1 otherSession:(opaqueCMSessionRef)arg2 ;
-(int)testDeactivationOfActiveAndNonPlayingSessions;
-(int)testMultipleRecordingClients;
-(int)testNavigationApp:(opaqueCMSessionRef)arg1 ;
-(int)testPreIntegrate;
-(int)testCPMS;
-(int)testSystemSoundsAndHapticsAudioHWControlBehaviors;
-(int)testDucking;
-(int)testSecureMicrophone;
-(int)testPriorityBasedInterruption;
-(int)testNowPlayingApp;
-(int)testHDMILatencyManager;
-(int)testPrefersNoInterruptionsByRingtonesAndAlerts;
-(int)testMXSession;
-(int)testAudioQueueOptionsForMXSession;
-(int)testMutePriority;
-(int)testPiPPolicies;
-(int)testMXSessionMutedNotificationForMutePriority;
-(int)testPiPMixingPolicies;
-(int)testMXSessionRefresh;
-(int)testShadowingAudioSessionID;
-(int)testSomeOtherPrimaryAudioCategoryClientIsPlaying;
-(int)testSystemSounds;
-(int)testIsAllowedRecordingFromBackground;
-(int)testMXSystemController;
-(int)testSharedMXSystemController;
-(int)testLowLatencyVADConfiguration;
-(int)testPlaybackHandoff;
-(int)testAvailableOutputStreamFormats;
-(int)testMXSessionClientType;
-(int)testAllowSystemSoundsWhileRecording;
-(int)testHeadphoneVolumeReduction;
@end


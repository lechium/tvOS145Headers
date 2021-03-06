/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VTSiriEnabledMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface VTCoreSpeechKeepAliveHandler : NSObject <VTSiriEnabledMonitorDelegate> {

	int _activeNotificationToken;
	int _inactiveNotificationToken;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _voiceTriggerEnabled;
	BOOL _speakerStateActivated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)start;
-(void)VTSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)_enableCoreSpeechDaemonKeepAlive;
-(void)_disableCoreSpeechDaemonKeepAlive;
-(void)_handleSpeakerActivated;
-(void)_handleSpeakerInactivated;
-(void)_voiceTriggerPolicyEnabled;
-(void)_voiceTriggerPolicyDisabled;
-(BOOL)_coreSpeechDaemonKeepAlived;
-(void)voiceTriggerPolicyDidChange:(BOOL)arg1 ;
@end


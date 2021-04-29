/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSActivationEventNotificationHandlerDelegate.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>
#import <libobjc.A.dylib/CSPhoneCallStateMonitorDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, CSAsset, CSAudioStreamHolding, CSAudioProvider, NSString;

@interface CSVoiceTriggerFirstPassHearst : NSObject <CSActivationEventNotificationHandlerDelegate, CSSiriClientBehaviorMonitorDelegate, CSPhoneCallStateMonitorDelegate> {

	float _remoteMicVADThreshold;
	float _remoteMicVADMyriadThreshold;
	float _minimumPhraseLengthForVADGating;
	id<CSVoiceTriggerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _hearstSecondPassRequests;
	CSAsset* _currentAsset;
	CSAudioStreamHolding* _triggeredAudioStreamHolding;
	CSAudioProvider* _triggeredAudioProvider;
	unsigned long long _secondChanceHotTillMachTime;
	unsigned long long _phoneCallState;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hearstSecondPassRequests;                  //@synthesize hearstSecondPassRequests=_hearstSecondPassRequests - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                          //@synthesize currentAsset=_currentAsset - In the implementation block
@property (assign,nonatomic) float remoteMicVADThreshold;                                     //@synthesize remoteMicVADThreshold=_remoteMicVADThreshold - In the implementation block
@property (assign,nonatomic) float remoteMicVADMyriadThreshold;                               //@synthesize remoteMicVADMyriadThreshold=_remoteMicVADMyriadThreshold - In the implementation block
@property (assign,nonatomic) float minimumPhraseLengthForVADGating;                           //@synthesize minimumPhraseLengthForVADGating=_minimumPhraseLengthForVADGating - In the implementation block
@property (nonatomic,retain) CSAudioStreamHolding * triggeredAudioStreamHolding;              //@synthesize triggeredAudioStreamHolding=_triggeredAudioStreamHolding - In the implementation block
@property (nonatomic,retain) CSAudioProvider * triggeredAudioProvider;                        //@synthesize triggeredAudioProvider=_triggeredAudioProvider - In the implementation block
@property (assign,nonatomic) unsigned long long secondChanceHotTillMachTime;                  //@synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime - In the implementation block
@property (assign,nonatomic) unsigned long long phoneCallState;                               //@synthesize phoneCallState=_phoneCallState - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CSVoiceTriggerDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(void)start;
-(void)_reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)reset;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAsset:(id)arg1 ;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(CSAsset *)currentAsset;
-(unsigned long long)phoneCallState;
-(void)_setAsset:(id)arg1 ;
-(void)setSecondChanceHotTillMachTime:(unsigned long long)arg1 ;
-(void)_handleRemoteMicVoiceTriggerEvent:(id)arg1 secondPassRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleRemoteMicVADEventWithSecondPassRequest:(id)arg1 ;
-(void)setPhoneCallState:(unsigned long long)arg1 ;
-(void)_cancelAllAudioStreamHoldings;
-(void)_requestStartAudioStreamWitContext:(id)arg1 secondPassRequest:(id)arg2 startStreamOption:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleSecondPassResult:(unsigned long long)arg1 secondPassRequest:(id)arg2 voiceTriggerInfo:(id)arg3 deviceId:(id)arg4 secondChanceCandidate:(BOOL)arg5 error:(id)arg6 completion:(/*^block*/id)arg7 ;
-(CSAudioProvider *)triggeredAudioProvider;
-(void)activationEventNotificationHandler:(id)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(void)CSPhoneCallStateMonitor:(id)arg1 didRecievePhoneCallStateChange:(unsigned long long)arg2 ;
-(NSMutableDictionary *)hearstSecondPassRequests;
-(void)setHearstSecondPassRequests:(NSMutableDictionary *)arg1 ;
-(float)remoteMicVADThreshold;
-(void)setRemoteMicVADThreshold:(float)arg1 ;
-(float)remoteMicVADMyriadThreshold;
-(void)setRemoteMicVADMyriadThreshold:(float)arg1 ;
-(float)minimumPhraseLengthForVADGating;
-(void)setMinimumPhraseLengthForVADGating:(float)arg1 ;
-(CSAudioStreamHolding *)triggeredAudioStreamHolding;
-(void)setTriggeredAudioStreamHolding:(CSAudioStreamHolding *)arg1 ;
-(void)setTriggeredAudioProvider:(CSAudioProvider *)arg1 ;
-(unsigned long long)secondChanceHotTillMachTime;
@end


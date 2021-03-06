/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVXClientService.h>
#import <libobjc.A.dylib/SVXSessionActivationListening.h>
#import <libobjc.A.dylib/SVXAudioPowerUpdateListening.h>
#import <libobjc.A.dylib/SVXSessionActivityListening.h>

@protocol SVXPerforming, SVXClientServiceServerConnectionDelegate;
@class NSXPCConnection, AFInstanceInfo, SVXDeviceSetupContext, NSHashTable, NSMutableArray, SVXDeviceSetupManager, SVXSessionManager, SVXSpeechSynthesizer, NSUUID, NSString;

@interface SVXClientServiceServerConnection : NSObject <SVXClientService, SVXSessionActivationListening, SVXAudioPowerUpdateListening, SVXSessionActivityListening> {

	NSXPCConnection* _xpcConnection;
	id<SVXPerforming> _performer;
	id<SVXClientServiceServerConnectionDelegate> _delegate;
	AFInstanceInfo* _instanceInfo;
	SVXDeviceSetupContext* _deviceSetupContext;
	NSHashTable* _deviceSetupContextListeners;
	BOOL _isConfigured;
	NSMutableArray* _pendingBlocksAfterConfigure;
	SVXDeviceSetupManager* _deviceSetupManager;
	SVXSessionManager* _sessionManager;
	SVXSpeechSynthesizer* _speechSynthesizer;
	NSUUID* _uuid;

}

@property (nonatomic,copy,readonly) NSUUID * uuid;                  //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)invalidate;
-(NSUUID *)uuid;
-(void)_connectionInvalidated;
-(oneway void)pingWithReply:(/*^block*/id)arg1 ;
-(void)_connectionInterrupted;
-(oneway void)fetchSessionStateWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)deactivateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)fetchSessionActivityStateWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)fetchAlarmAndTimerFiringContextWithCompletion:(/*^block*/id)arg1 ;
-(void)audioPowerWillBeginUpdateForType:(long long)arg1 wrapper:(id)arg2 ;
-(void)audioPowerDidEndUpdateForType:(long long)arg1 ;
-(void)sessionWillChangeFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)sessionDidChangeFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)sessionWillPresentFeedbackWithDialogIdentifier:(id)arg1 ;
-(void)sessionWillStartSoundWithID:(long long)arg1 ;
-(void)sessionDidStartSoundWithID:(long long)arg1 ;
-(void)sessionDidStopSoundWithID:(long long)arg1 error:(id)arg2 ;
-(void)sessionWillBecomeActiveWithActivationContext:(id)arg1 ;
-(void)sessionDidBecomeActiveWithActivationContext:(id)arg1 ;
-(void)sessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)sessionDidResignActiveWithDeactivationContext:(id)arg1 ;
-(void)audioSessionWillBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(void)audioSessionDidBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(void)_getInstanceInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateDeviceSetupContext:(id)arg1 ;
-(void)_cleanUpXPCConnection;
-(void)_performBlockAfterConfigure:(/*^block*/id)arg1 ;
-(oneway void)preheatWithActivationSource:(long long)arg1 ;
-(oneway void)prewarmWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)activateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)prewarmRequest:(id)arg1 ;
-(id)_remoteServiceDelegateWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_updateInstanceInfo:(id)arg1 ;
-(void)getInstanceInfoWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)performManualEndpointing;
-(oneway void)transitToAutomaticEndpointing;
-(oneway void)fetchAudioPowerWithType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)synthesizeRequest:(id)arg1 handlerUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)enqueueSpeechSynthesisRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)cancelPendingSpeechSynthesisRequest:(id)arg1 ;
-(oneway void)stopSpeechSynthesisRequest:(id)arg1 ;
-(oneway void)setDeviceSetupContext:(id)arg1 ;
-(oneway void)prepareForDeviceSetupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sessionManager:(id)arg1 willActivateWithContext:(id)arg2 ;
-(void)sessionManager:(id)arg1 didActivateWithContext:(id)arg2 ;
-(void)sessionManager:(id)arg1 didNotActivateWithContext:(id)arg2 error:(id)arg3 ;
-(void)sessionManager:(id)arg1 willDeactivateWithContext:(id)arg2 ;
-(void)sessionManager:(id)arg1 didDeactivateWithContext:(id)arg2 ;
-(id)initWithXPCConnection:(id)arg1 performer:(id)arg2 delegate:(id)arg3 ;
-(void)configureWithDeviceSetupManager:(id)arg1 sessionManager:(id)arg2 speechSynthesizer:(id)arg3 ;
-(void)addDeviceSetupContextListener:(id)arg1 ;
-(void)removeDeviceSetupContextListener:(id)arg1 ;
@end


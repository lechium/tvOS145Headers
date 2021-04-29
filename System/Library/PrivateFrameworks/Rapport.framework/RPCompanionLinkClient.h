/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPCompanionLinkXPCClientInterface.h>
#import <libobjc.A.dylib/RPAuthenticatable.h>
#import <libobjc.A.dylib/RPMessageable.h>

@protocol OS_dispatch_queue;
@class NSArray, NSString, NSMutableSet, NSMutableDictionary, NSMutableOrderedSet, NSXPCConnection, RPCompanionLinkDevice, NSObject, NSDictionary;

@interface RPCompanionLinkClient : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable> {

	BOOL _activateCalled;
	NSMutableSet* _assertions;
	NSMutableDictionary* _deviceDictionary;
	NSMutableDictionary* _eventRegistrations;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableOrderedSet* _registeredProfileIDs;
	NSMutableDictionary* _requestRegistrations;
	NSXPCConnection* _xpcCnx;
	unsigned _pairSetupFlags;
	unsigned _pairVerifyFlags;
	int _passwordType;
	int _passwordTypeActual;
	unsigned _flags;
	unsigned _clientID;
	unsigned _internalAuthFlags;
	NSArray* _pairSetupACL;
	NSString* _password;
	/*^block*/id _authCompletionHandler;
	/*^block*/id _disconnectHandler;
	/*^block*/id _showPasswordHandler;
	/*^block*/id _hidePasswordHandler;
	/*^block*/id _promptForPasswordHandler;
	NSString* _appID;
	double _awdlGuestDiscoveryTimeout;
	long long _bleClientUseCase;
	NSString* _cloudServiceID;
	unsigned long long _controlFlags;
	RPCompanionLinkDevice* _destinationDevice;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	long long _rssiThreshold;
	NSString* _serviceType;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	RPCompanionLinkDevice* _localDevice;
	/*^block*/id _localDeviceUpdatedHandler;
	NSDictionary* _siriInfo;

}

@property (assign,nonatomic) unsigned clientID;                                       //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) unsigned internalAuthFlags;                            //@synthesize internalAuthFlags=_internalAuthFlags - In the implementation block
@property (retain) RPCompanionLinkDevice * localDevice;                               //@synthesize localDevice=_localDevice - In the implementation block
@property (nonatomic,copy) NSString * appID;                                          //@synthesize appID=_appID - In the implementation block
@property (assign,nonatomic) double awdlGuestDiscoveryTimeout;                        //@synthesize awdlGuestDiscoveryTimeout=_awdlGuestDiscoveryTimeout - In the implementation block
@property (assign,nonatomic) long long bleClientUseCase;                              //@synthesize bleClientUseCase=_bleClientUseCase - In the implementation block
@property (nonatomic,copy) NSString * cloudServiceID;                                 //@synthesize cloudServiceID=_cloudServiceID - In the implementation block
@property (assign,nonatomic) unsigned long long controlFlags;                         //@synthesize controlFlags=_controlFlags - In the implementation block
@property (nonatomic,copy) id disconnectHandler;                                      //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,retain) RPCompanionLinkDevice * destinationDevice;               //@synthesize destinationDevice=_destinationDevice - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) long long rssiThreshold;                                 //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (copy,readonly) NSArray * activeDevices; 
@property (readonly) RPCompanionLinkDevice * activePersonalCompanion; 
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (nonatomic,copy) id localDeviceUpdatedHandler;                              //@synthesize localDeviceUpdatedHandler=_localDeviceUpdatedHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * siriInfo;                                   //@synthesize siriInfo=_siriInfo - In the implementation block
@property (nonatomic,retain) NSArray * pairSetupACL;                                  //@synthesize pairSetupACL=_pairSetupACL - In the implementation block
@property (assign,nonatomic) unsigned pairSetupFlags;                                 //@synthesize pairSetupFlags=_pairSetupFlags - In the implementation block
@property (assign,nonatomic) unsigned pairVerifyFlags;                                //@synthesize pairVerifyFlags=_pairVerifyFlags - In the implementation block
@property (nonatomic,copy) NSString * password;                                       //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) int passwordType;                                        //@synthesize passwordType=_passwordType - In the implementation block
@property (nonatomic,readonly) int passwordTypeActual;                                //@synthesize passwordTypeActual=_passwordTypeActual - In the implementation block
@property (nonatomic,copy) id authCompletionHandler;                                  //@synthesize authCompletionHandler=_authCompletionHandler - In the implementation block
@property (nonatomic,copy) id showPasswordHandler;                                    //@synthesize showPasswordHandler=_showPasswordHandler - In the implementation block
@property (nonatomic,copy) id hidePasswordHandler;                                    //@synthesize hidePasswordHandler=_hidePasswordHandler - In the implementation block
@property (nonatomic,copy) id promptForPasswordHandler;                               //@synthesize promptForPasswordHandler=_promptForPasswordHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(unsigned)flags;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)_interrupted;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)clientID;
-(RPCompanionLinkDevice *)localDevice;
-(void)setLocalDevice:(RPCompanionLinkDevice *)arg1 ;
-(void)setRssiThreshold:(long long)arg1 ;
-(long long)rssiThreshold;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_ensureXPCStarted;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setClientID:(unsigned)arg1 ;
-(void)_lostAllDevices;
-(id)deviceFoundHandler;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceLostHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(unsigned long long)controlFlags;
-(void)setControlFlags:(unsigned long long)arg1 ;
-(NSString *)appID;
-(void)setAppID:(NSString *)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)registerProfileID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)activeDevices;
-(void)setDestinationDevice:(RPCompanionLinkDevice *)arg1 ;
-(RPCompanionLinkDevice *)destinationDevice;
-(void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(id)deviceChangedHandler;
-(void)registerEventID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)deregisterEventID:(id)arg1 ;
-(void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deregisterRequestID:(id)arg1 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setLocalDeviceUpdatedHandler:(id)arg1 ;
-(int)passwordType;
-(id)disconnectHandler;
-(void)setDisconnectHandler:(id)arg1 ;
-(void)_invokeBlockActivateSafe:(/*^block*/id)arg1 ;
-(void)setPairSetupACL:(NSArray *)arg1 ;
-(NSArray *)pairSetupACL;
-(unsigned)pairSetupFlags;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(unsigned)pairVerifyFlags;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(void)_invalidateAssertion:(id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(void)companionLinkPromptForPasswordType:(int)arg1 flags:(unsigned)arg2 throttleSeconds:(int)arg3 ;
-(void)companionLinkAuthCompleted:(id)arg1 ;
-(void)companionLinkFoundDevice:(id)arg1 ;
-(void)companionLinkLostDevice:(id)arg1 ;
-(void)companionLinkChangedDevice:(id)arg1 changes:(unsigned)arg2 ;
-(void)companionLinkLocalDeviceUpdated:(id)arg1 ;
-(void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 ;
-(void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)companionLinkHandleDisconnect;
-(void)_reregisterAssertions;
-(void)_reregisterEvents;
-(void)_reregisterRequests;
-(void)_reregisterProfileIDs;
-(void)_registerEventID:(id)arg1 options:(id)arg2 reregister:(BOOL)arg3 ;
-(void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_registerRequestID:(id)arg1 options:(id)arg2 reregister:(BOOL)arg3 ;
-(void)_registerProfileID:(id)arg1 reregister:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)tryPassword:(id)arg1 ;
-(void)setPasswordType:(int)arg1 ;
-(int)passwordTypeActual;
-(id)authCompletionHandler;
-(void)setAuthCompletionHandler:(id)arg1 ;
-(id)showPasswordHandler;
-(void)setShowPasswordHandler:(id)arg1 ;
-(id)hidePasswordHandler;
-(void)setHidePasswordHandler:(id)arg1 ;
-(id)promptForPasswordHandler;
-(void)setPromptForPasswordHandler:(id)arg1 ;
-(void)setSiriInfo:(NSDictionary *)arg1 ;
-(id)activateAssertionID:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(RPCompanionLinkDevice *)activePersonalCompanion;
-(BOOL)shouldReportDevice:(id)arg1 toXPCConnectionWithLaunchInstanceID:(id)arg2 ;
-(void)launchAppWithBundleID:(id)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)launchAppWithURL:(id)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deregisterProfileID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)awdlGuestDiscoveryTimeout;
-(void)setAwdlGuestDiscoveryTimeout:(double)arg1 ;
-(long long)bleClientUseCase;
-(void)setBleClientUseCase:(long long)arg1 ;
-(NSString *)cloudServiceID;
-(void)setCloudServiceID:(NSString *)arg1 ;
-(id)localDeviceUpdatedHandler;
-(NSDictionary *)siriInfo;
-(unsigned)internalAuthFlags;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOAccessoryManager/IOAccessoryManager-Structs.h>
#import <IOAccessoryManager/ACCTransportIOAccessoryBase.h>

@protocol ACCTransportIOAccessoryAuthCPProtocol, OS_dispatch_queue, OS_dispatch_source;
@class NSData, NSString, NSObject;

@interface ACCTransportIOAccessoryAuthCP : ACCTransportIOAccessoryBase {

	BOOL _representsInductiveTransport;
	unsigned char _authTryCurrent;
	unsigned char _authTryMaximum;
	unsigned char _authVersionMajor;
	BOOL _bIsShuttingDown;
	BOOL _certIsCached;
	unsigned char _softwareErrorRetry;
	int _authStatus;
	int _representsInternalModule;
	int _accConnectionType;
	int _authType;
	unsigned _ioServiceUpstream;
	unsigned _authFlags;
	int _fdrValidationStatus;
	int _authErrorDescription;
	unsigned _forcedReAuthCount;
	unsigned _battery_iter;
	id<ACCTransportIOAccessoryAuthCPProtocol> _delegate;
	NSData* _pAuthCertificate;
	NSString* _connectionUUID;
	NSString* _endpointUUID;
	NSObject*<OS_dispatch_queue> _authWorkQueue;
	NSObject*<OS_dispatch_source> _authTimerSource;
	const void* _pAuthCertCache;
	unsigned long long _authTimerStartTimestamp;
	IONotificationPortRef _batteryNotifyPortRef;
	AuthCertCapsInt_t _authCertCaps;

}

@property (retain) NSObject*<OS_dispatch_queue> authWorkQueue;                                       //@synthesize authWorkQueue=_authWorkQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> authTimerSource;                                    //@synthesize authTimerSource=_authTimerSource - In the implementation block
@property (assign) unsigned char authTryCurrent;                                                     //@synthesize authTryCurrent=_authTryCurrent - In the implementation block
@property (assign) unsigned char authTryMaximum;                                                     //@synthesize authTryMaximum=_authTryMaximum - In the implementation block
@property (assign) unsigned char authVersionMajor;                                                   //@synthesize authVersionMajor=_authVersionMajor - In the implementation block
@property (assign) AuthCertCapsInt_t authCertCaps;                                                   //@synthesize authCertCaps=_authCertCaps - In the implementation block
@property (assign) const void* pAuthCertCache;                                                       //@synthesize pAuthCertCache=_pAuthCertCache - In the implementation block
@property (assign) unsigned ioServiceUpstream;                                                       //@synthesize ioServiceUpstream=_ioServiceUpstream - In the implementation block
@property (assign,nonatomic) int accConnectionType;                                                  //@synthesize accConnectionType=_accConnectionType - In the implementation block
@property (assign) BOOL bIsShuttingDown;                                                             //@synthesize bIsShuttingDown=_bIsShuttingDown - In the implementation block
@property (assign,nonatomic) BOOL representsInductiveTransport;                                      //@synthesize representsInductiveTransport=_representsInductiveTransport - In the implementation block
@property (assign,nonatomic) int representsInternalModule;                                           //@synthesize representsInternalModule=_representsInternalModule - In the implementation block
@property (assign) unsigned authFlags;                                                               //@synthesize authFlags=_authFlags - In the implementation block
@property (assign) unsigned long long authTimerStartTimestamp;                                       //@synthesize authTimerStartTimestamp=_authTimerStartTimestamp - In the implementation block
@property (assign) int fdrValidationStatus;                                                          //@synthesize fdrValidationStatus=_fdrValidationStatus - In the implementation block
@property (assign) int authErrorDescription;                                                         //@synthesize authErrorDescription=_authErrorDescription - In the implementation block
@property (assign) unsigned forcedReAuthCount;                                                       //@synthesize forcedReAuthCount=_forcedReAuthCount - In the implementation block
@property (assign) BOOL certIsCached;                                                                //@synthesize certIsCached=_certIsCached - In the implementation block
@property (assign) unsigned char softwareErrorRetry;                                                 //@synthesize softwareErrorRetry=_softwareErrorRetry - In the implementation block
@property (assign) IONotificationPortRef batteryNotifyPortRef;                                       //@synthesize batteryNotifyPortRef=_batteryNotifyPortRef - In the implementation block
@property (assign) unsigned battery_iter;                                                            //@synthesize battery_iter=_battery_iter - In the implementation block
@property (assign,nonatomic,__weak) id<ACCTransportIOAccessoryAuthCPProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int authStatus;                                                       //@synthesize authStatus=_authStatus - In the implementation block
@property (nonatomic,readonly) NSData * pAuthCertificate;                                            //@synthesize pAuthCertificate=_pAuthCertificate - In the implementation block
@property (nonatomic,retain) NSString * connectionUUID;                                              //@synthesize connectionUUID=_connectionUUID - In the implementation block
@property (nonatomic,retain) NSString * endpointUUID;                                                //@synthesize endpointUUID=_endpointUUID - In the implementation block
@property (nonatomic,readonly) int authType;                                                         //@synthesize authType=_authType - In the implementation block
-(void)dealloc;
-(id<ACCTransportIOAccessoryAuthCPProtocol>)delegate;
-(void)setDelegate:(id<ACCTransportIOAccessoryAuthCPProtocol>)arg1 ;
-(void)setConnectionUUID:(NSString *)arg1 ;
-(NSString *)connectionUUID;
-(int)authStatus;
-(NSString *)endpointUUID;
-(void)setEndpointUUID:(NSString *)arg1 ;
-(int)accConnectionType;
-(int)representsInternalModule;
-(id)initWithDelegate:(id)arg1 andIOService:(unsigned)arg2 connectionType:(int)arg3 ;
-(BOOL)requiresAuthenticationProcess;
-(void)startAuthenticationProcess;
-(void)doPostAuthentication;
-(void)startShutdownProcess;
-(unsigned)forcedReAuthCount;
-(void)setForcedReAuthCount:(unsigned)arg1 ;
-(void)setBatteryNotifyPortRef:(IONotificationPortRef)arg1 ;
-(IONotificationPortRef)batteryNotifyPortRef;
-(BOOL)_representsHardwareComponent;
-(void)_handleAuthTimerTimeout;
-(NSObject*<OS_dispatch_queue>)authWorkQueue;
-(void)_finishAuthentication:(BOOL)arg1 authCert:(CFDataRef)arg2 ;
-(BOOL)_handleAuthDeviceInfo:(int)arg1 versionMajor:(unsigned char)arg2 versionMinor:(unsigned char)arg3 ;
-(BOOL)_handleAuthCertSerialNumber:(CFStringRef)arg1 certData:(const _CFData*)arg2 ;
-(BOOL)_handleAuthCertificate:(CFDataRef)arg1 serialNumber:(CFStringRef)arg2 authError:(int*)arg3 ;
-(BOOL)_handleAuthSignature:(CFDataRef)arg1 certData:(CFDataRef)arg2 nonceData:(CFDataRef)arg3 ;
-(BOOL)_validateCertCapsForCertificate:(CFDataRef)arg1 authError:(int*)arg2 ;
-(BOOL)_authInternalModuleWithCert:(const _CFData*)arg1 withError:(int*)arg2 ;
-(BOOL)_authWithAuthIC:(unsigned)arg1 withCert:(const _CFData*)arg2 withError:(int*)arg3 ;
-(void)_validateDownstreamCertSerialNumber;
-(void)_validateAuthCPFlagsForCertificate;
-(void)_publishAuth:(BOOL)arg1 fdrStatus:(int)arg2 trusted:(BOOL)arg3 publishToUI:(BOOL)arg4 ioconnect:(unsigned)arg5 ;
-(void)_publishAuthStats:(BOOL)arg1 fdrStatus:(int)arg2 ;
-(unsigned)ioServiceUpstream;
-(void)_logToAnalytics;
-(void)_resetAfterAuthCompletion;
-(int)authType;
-(NSData *)pAuthCertificate;
-(int)_fdrCertCheck;
-(CFDictionaryRef)_copyOrCreateStatsSubDict:(CFDictionaryRef)arg1 forSerialNumber:(CFStringRef)arg2 ;
-(void)_incrementAuthStat:(const CFStringRef)arg1 dict:(CFDictionaryRef)arg2 ;
-(BOOL)representsInductiveTransport;
-(void)setRepresentsInductiveTransport:(BOOL)arg1 ;
-(void)setRepresentsInternalModule:(int)arg1 ;
-(void)setAccConnectionType:(int)arg1 ;
-(void)setAuthWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)authTimerSource;
-(void)setAuthTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned char)authTryCurrent;
-(void)setAuthTryCurrent:(unsigned char)arg1 ;
-(unsigned char)authTryMaximum;
-(void)setAuthTryMaximum:(unsigned char)arg1 ;
-(unsigned char)authVersionMajor;
-(void)setAuthVersionMajor:(unsigned char)arg1 ;
-(AuthCertCapsInt_t)authCertCaps;
-(void)setAuthCertCaps:(AuthCertCapsInt_t)arg1 ;
-(const void*)pAuthCertCache;
-(void)setPAuthCertCache:(const void*)arg1 ;
-(void)setIoServiceUpstream:(unsigned)arg1 ;
-(BOOL)bIsShuttingDown;
-(void)setBIsShuttingDown:(BOOL)arg1 ;
-(unsigned)authFlags;
-(void)setAuthFlags:(unsigned)arg1 ;
-(unsigned long long)authTimerStartTimestamp;
-(void)setAuthTimerStartTimestamp:(unsigned long long)arg1 ;
-(int)fdrValidationStatus;
-(void)setFdrValidationStatus:(int)arg1 ;
-(int)authErrorDescription;
-(void)setAuthErrorDescription:(int)arg1 ;
-(BOOL)certIsCached;
-(void)setCertIsCached:(BOOL)arg1 ;
-(unsigned char)softwareErrorRetry;
-(void)setSoftwareErrorRetry:(unsigned char)arg1 ;
-(unsigned)battery_iter;
-(void)setBattery_iter:(unsigned)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AFSiriActivationListenerDelegate.h>
#import <libobjc.A.dylib/SVXClientServiceServerConnectionDelegate.h>

@class SVXQueuePerformer, NSXPCListener, AFSiriActivationListener, NSArray, SVXVirtualDevice, NSString;

@interface SVXDaemon : NSObject <NSXPCListenerDelegate, AFSiriActivationListenerDelegate, SVXClientServiceServerConnectionDelegate> {

	BOOL _isRunning;
	SVXQueuePerformer* _clientServiceQueuePerformer;
	NSXPCListener* _clientServiceListener;
	AFSiriActivationListener* _siriActivationListener;
	NSArray* _platformDependencies;
	SVXVirtualDevice* _hostVirtualDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stop;
-(void)siriActivationListener:(id)arg1 prewarmWithRequestInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriActivationListener:(id)arg1 activateWithRequestInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriActivationListener:(id)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 context:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)siriActivationListener:(id)arg1 myriadEventWithRequestInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)startWithPlatformDependencies:(id)arg1 ;
-(void)clientServiceServerConnectionDidInvalidate:(id)arg1 ;
-(BOOL)handleClientServiceXPCConnection:(id)arg1 ;
-(id)_virtualDeviceForInstanceInfo:(id)arg1 ;
-(id)_virtualDeviceForActivationContext:(id)arg1 ;
-(void)_enumerateVirtualDevicesUsingBlock:(/*^block*/id)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>

@class ATDeviceSettings, ATGrappaSession, NSString;

@interface ATDeviceProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	ATDeviceSettings* _settings;
	ATGrappaSession* _grappaSession;
	double _linkOpenTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)_sendRegisterEndpointRequestOnMessageLink:(id)arg1 ;
-(void)_handleRegisterEndpointRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleCreateSessionRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleBeginSessionRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(id)_getEndpointInfo;
-(void)_processRegisterEndpointResponse:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_sendCreateSessionRequestWithData:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_processCreateSessionResponse:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_sendBeginSessionRequestOnMessageLink:(id)arg1 ;
-(void)_processBeginSessionResponse:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_setMessageLinkAsInitialized:(id)arg1 ;
@end


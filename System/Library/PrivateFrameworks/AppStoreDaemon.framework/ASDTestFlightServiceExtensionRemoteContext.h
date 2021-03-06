/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/ASDTestFlightServiceExtensionContext.h>
#import <libobjc.A.dylib/ASDTestFlightServiceExtensionRemoteXPCInterface.h>

@class ASDTestFlightServiceExtension, NSString;

@interface ASDTestFlightServiceExtensionRemoteContext : ASDTestFlightServiceExtensionContext <ASDTestFlightServiceExtensionRemoteXPCInterface> {

	ASDTestFlightServiceExtension* _extensionInstance;

}

@property (nonatomic,retain) ASDTestFlightServiceExtension * extensionInstance;              //@synthesize extensionInstance=_extensionInstance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ASDTestFlightServiceExtension *)extensionInstance;
-(void)serviceExtensionTimeWillExpire;
-(void)setExtensionInstance:(ASDTestFlightServiceExtension *)arg1 ;
-(void)serviceExtensionPerformCleanup;
-(void)didReceivePushToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)didReceivePushMessages:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)didReachTerminalPhaseWithBetaBundleID:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)reloadAppsFromServerWithReply:(/*^block*/id)arg1 ;
@end


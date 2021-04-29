/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEAgentTunnelExtension.h>
#import <libobjc.A.dylib/NEExtensionAppProxyProviderHostDelegate.h>
#import <libobjc.A.dylib/NEFlowDivertPluginDriver.h>

@class NSString;

@interface NEAgentAppProxyExtension : NEAgentTunnelExtension <NEExtensionAppProxyProviderHostDelegate, NEFlowDivertPluginDriver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegateInterface:(unsigned)arg1 ;
-(id)driverInterface;
-(id)managerInterface;
-(void)extension:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)connectWithParameters:(id)arg1 ;
@end


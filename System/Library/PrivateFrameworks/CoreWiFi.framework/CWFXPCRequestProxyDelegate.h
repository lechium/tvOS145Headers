/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CWFXPCRequestProxyDelegate <NSObject>
@required
-(void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3;
-(void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3;
-(void)XPCRequestProxy:(id)arg1 invalidatedXPCConnection:(id)arg2;
-(void)XPCRequestProxy:(id)arg1 sendXPCEvent:(id)arg2 reply:(/*^block*/id)arg3;

@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HAPRelayPairingClientDelegate <NSObject>
@required
-(void)relayPairingClient:(id)arg1 didCloseWithError:(id)arg2;
-(void)relayPairingClient:(id)arg1 didReceiveControllerIdentifier:(id)arg2;
-(void)relayPairingClient:(id)arg1 didReceiveAccessToken:(id)arg2 accessoryIdentifier:(id)arg3;

@end

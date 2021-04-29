/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVOutputDeviceConfigurationModification <NSObject>
@required
-(void)setDeviceName:(id)arg1;
-(void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(BOOL)arg1;
-(void)addPeerToHomeGroup:(id)arg1;
-(void)setDevicePassword:(id)arg1;
-(void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;
-(void)removePeerWithIDFromHomeGroup:(id)arg1;

@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/_GCIPCRemoteOutgoingConnection.h>

@interface _GCAppServerConnection : _GCIPCRemoteOutgoingConnection

@property (nonatomic,retain) id<_GCAppClientInterface> client; 
-(id)init;
-(id)initWithMachServiceName:(id)arg1 ;
-(id<_GCAppClientInterface>)client;
-(void)setClient:(id<_GCAppClientInterface>)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/_GCIPCRemoteIncomingConnection.h>

@interface _GCAppClientConnection : _GCIPCRemoteIncomingConnection

@property (nonatomic,retain) id<_GCAppServerInterface> server; 
-(id<_GCAppServerInterface>)server;
-(void)setServer:(id<_GCAppServerInterface>)arg1 ;
-(id)initWithConnection:(id)arg1 fromProcess:(id)arg2 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/_GCIPCRemoteIncomingConnection.h>
#import <libobjc.A.dylib/_GCDeviceDriverConnection.h>

@interface _GCDriverClientConnection : _GCIPCRemoteIncomingConnection <_GCDeviceDriverConnection>

@property (nonatomic,retain) id<_GCDriverServerInterface> exportedObject; 
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
-(void)setExportedObject:(id<_GCDriverServerInterface>)arg1 ;
-(id<_GCDriverServerInterface>)exportedObject;
-(id)initWithConnection:(id)arg1 fromProcess:(id)arg2 ;
-(void)connectToDeviceService:(id)arg1 withClient:(id)arg2 reply:(/*^block*/id)arg3 ;
@end


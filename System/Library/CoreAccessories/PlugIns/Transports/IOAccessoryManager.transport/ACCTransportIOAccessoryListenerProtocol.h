/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCTransportIOAccessoryListenerProtocol <NSObject>
@required
-(void)IOAccessoryManagerServiceInfoSet:(unsigned)arg1;
-(void)IOAccessoryManagerServiceDetached:(unsigned)arg1;
-(void)IOAccessoryManagerServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryAuthCPServiceArrived:(unsigned)arg1;
-(void)IOAccessoryManagerServiceArrived:(unsigned)arg1;
-(void)IOAccessoryPortServiceArrived:(unsigned)arg1;
-(void)IOAccessoryPortServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryAuthCPServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryEAServiceArrived:(unsigned)arg1;
-(void)IOAccessoryEAServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryOOBPairingServiceArrived:(unsigned)arg1;
-(void)IOAccessoryOOBPairingServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryConfigStreamServiceArrived:(unsigned)arg1;
-(void)IOAccessoryConfigStreamServiceTerminated:(unsigned)arg1;

@end


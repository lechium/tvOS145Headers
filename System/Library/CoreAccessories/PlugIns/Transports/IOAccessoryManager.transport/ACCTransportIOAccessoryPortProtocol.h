/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCTransportIOAccessoryPortProtocol <NSObject>
@required
-(id)IOAccessoryPortArrived:(id)arg1 withEndpointProtocol:(int)arg2 publish:(BOOL)arg3;
-(void)IOAccessoryPortPublish:(id)arg1;
-(BOOL)IOAccessoryPortDataArrived:(id)arg1 endpointUUID:(id)arg2;
-(void)IOAccessoryPortDetach:(id)arg1;
-(void)IOAccessoryPortPropertyChanged:(id)arg1;

@end


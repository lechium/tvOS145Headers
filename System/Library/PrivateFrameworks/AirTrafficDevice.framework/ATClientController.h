/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AirTrafficDevice/AirTrafficDevice-Structs.h>
@class NSDictionary;

@interface ATClientController : NSObject {

	NSDictionary* _clientMap;
	CFDictionaryRef _queueMap;

}
+(id)sharedInstance;
+(id)controllerForDataclasses:(id)arg1 ;
-(void)dealloc;
-(id)allClients;
-(id)clientForDataclass:(id)arg1 ;
-(id)queueForClient:(id)arg1 ;
-(BOOL)_loadClientsForDataclasses:(id)arg1 ;
-(void)resetQueues;
-(void)waitToDrain;
@end


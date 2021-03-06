/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConferenceXPCClient.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCXPCClientShared : AVConferenceXPCClient {

	NSMutableDictionary* _registeredUUIDServiceBlocks;
	NSObject*<OS_dispatch_queue> _registeredBlocksQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * registeredUUIDServiceBlocks;              //@synthesize registeredUUIDServiceBlocks=_registeredUUIDServiceBlocks - In the implementation block
-(id)init;
-(void)dealloc;
-(void)deregisterFromNotifications;
-(void)registerBlockWithUUID:(id)arg1 service:(char*)arg2 block:(/*^block*/id)arg3 ;
-(void)deregisterWithUUID:(id)arg1 service:(char*)arg2 ;
-(NSMutableDictionary *)registeredUUIDServiceBlocks;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, NSLock;

@interface DCDeviceMetadataDaemonConnection : NSObject {

	NSXPCConnection* _conn;
	NSLock* _connLock;

}
-(id)init;
-(id)connection;
-(id)remoteObjectProxy:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxy:(/*^block*/id)arg1 ;
@end

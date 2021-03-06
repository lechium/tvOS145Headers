/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSLock, NSXPCConnection;

@interface SKServiceProxy : NSObject {

	NSLock* _serviceConnectionLock;
	NSXPCConnection* _serviceConnection;

}
+(id)serviceProxy;
+(id)inAppServiceInterface;
+(id)inAppClientInterface;
-(id)init;
-(id)objectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)serviceConnection;
-(void)_serviceConnectionInvalidated;
-(id)inAppServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)inAppService;
@end


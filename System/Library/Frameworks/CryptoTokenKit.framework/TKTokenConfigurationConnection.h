/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, NSXPCListenerEndpoint;

@interface TKTokenConfigurationConnection : NSObject {

	NSXPCConnection* _connection;
	NSXPCListenerEndpoint* _endpoint;

}
-(void)dealloc;
-(id)initWithEndpoint:(id)arg1 ;
-(id)configurationProtocol;
@end


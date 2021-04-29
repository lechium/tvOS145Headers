/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BKSProcessAssertion, NSXPCConnection;

@interface _TVServiceProviderConnection : NSObject {

	BKSProcessAssertion* _procAssertion;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) BKSProcessAssertion * procAssertion;              //@synthesize procAssertion=_procAssertion - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                     //@synthesize connection=_connection - In the implementation block
-(void)invalidate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setProcAssertion:(BKSProcessAssertion *)arg1 ;
-(BKSProcessAssertion *)procAssertion;
@end


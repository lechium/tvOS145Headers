/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, BKSProcessAssertion;

@interface TVSSSearchAppServiceConnection : NSObject {

	NSXPCConnection* _connection;
	BKSProcessAssertion* _processAssertion;

}

@property (nonatomic,retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * processAssertion;              //@synthesize processAssertion=_processAssertion - In the implementation block
+(void)connectionWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)_init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BKSProcessAssertion *)processAssertion;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setProcessAssertion:(BKSProcessAssertion *)arg1 ;
@end


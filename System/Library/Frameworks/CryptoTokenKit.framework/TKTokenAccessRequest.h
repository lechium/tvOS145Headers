/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, TKTokenID, NSUUID, NSXPCConnection;

@interface TKTokenAccessRequest : NSObject {

	BOOL _clientHasAccessTokenEntitlement;
	NSString* _clientBundleID;
	NSString* _clientName;
	TKTokenID* _tokenID;
	NSString* _providerBundleID;
	NSString* _providerName;
	NSUUID* _correlationID;
	NSXPCConnection* _clientConnection;

}

@property (nonatomic,readonly) NSString * clientBundleID;                         //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                             //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) BOOL clientHasAccessTokenEntitlement;              //@synthesize clientHasAccessTokenEntitlement=_clientHasAccessTokenEntitlement - In the implementation block
@property (nonatomic,readonly) TKTokenID * tokenID;                               //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,readonly) NSString * providerBundleID;                       //@synthesize providerBundleID=_providerBundleID - In the implementation block
@property (nonatomic,readonly) NSString * providerName;                           //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,readonly) NSUUID * correlationID;                            //@synthesize correlationID=_correlationID - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * clientConnection;                //@synthesize clientConnection=_clientConnection - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(TKTokenID *)tokenID;
-(NSString *)clientBundleID;
-(NSString *)providerName;
-(NSString *)clientName;
-(NSXPCConnection *)clientConnection;
-(id)initWithClientBundleID:(id)arg1 clientName:(id)arg2 clientConnection:(id)arg3 clientHasAccessTokenEntitlement:(BOOL)arg4 tokenID:(id)arg5 providerBundleID:(id)arg6 providerName:(id)arg7 correlationID:(id)arg8 ;
-(NSUUID *)correlationID;
-(BOOL)clientHasAccessTokenEntitlement;
-(NSString *)providerBundleID;
-(id)initWithCaller:(id)arg1 tokenID:(id)arg2 extension:(id)arg3 ;
@end


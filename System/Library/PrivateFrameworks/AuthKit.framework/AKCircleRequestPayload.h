/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, AKPushMessage, NSDictionary;

@interface AKCircleRequestPayload : NSObject <NSSecureCoding> {

	NSString* _serverInfo;
	NSData* _clientInfo;
	long long _clientErrorCode;
	NSString* _altDSID;
	NSString* _transactionId;
	AKPushMessage* _responseMessage;
	NSDictionary* _responseInfo;
	unsigned long long _circleStep;

}

@property (nonatomic,retain) AKPushMessage * responseMessage;              //@synthesize responseMessage=_responseMessage - In the implementation block
@property (nonatomic,retain) NSDictionary * responseInfo;                  //@synthesize responseInfo=_responseInfo - In the implementation block
@property (assign,nonatomic) unsigned long long circleStep;                //@synthesize circleStep=_circleStep - In the implementation block
@property (nonatomic,retain) NSString * serverInfo;                        //@synthesize serverInfo=_serverInfo - In the implementation block
@property (nonatomic,retain) NSData * clientInfo;                          //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) long long clientErrorCode;                    //@synthesize clientErrorCode=_clientErrorCode - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                           //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * transactionId;                     //@synthesize transactionId=_transactionId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)payloadWithMessage:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)transactionId;
-(void)setTransactionId:(NSString *)arg1 ;
-(NSData *)clientInfo;
-(NSString *)serverInfo;
-(void)setServerInfo:(NSString *)arg1 ;
-(long long)clientErrorCode;
-(unsigned long long)circleStep;
-(void)setCircleStep:(unsigned long long)arg1 ;
-(BOOL)isRequestingPayload;
-(BOOL)isAcceptingPayload;
-(id)replyPayload;
-(void)setClientInfo:(NSData *)arg1 ;
-(void)setClientErrorCode:(long long)arg1 ;
-(AKPushMessage *)responseMessage;
-(void)setResponseMessage:(AKPushMessage *)arg1 ;
-(NSDictionary *)responseInfo;
-(void)setResponseInfo:(NSDictionary *)arg1 ;
@end


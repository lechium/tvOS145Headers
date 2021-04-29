/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, NSDictionary;

@interface PKAccountWebServiceAccountTransactionAnswerRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSString* _accountUserAltDSID;
	NSURL* _baseURL;
	NSString* _transactionIdentifier;
	NSDictionary* _answers;

}

@property (nonatomic,copy) NSString * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountUserAltDSID;                 //@synthesize accountUserAltDSID=_accountUserAltDSID - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                               //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * answers;                        //@synthesize answers=_answers - In the implementation block
-(NSURL *)baseURL;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
-(NSDictionary *)answers;
-(void)setAnswers:(NSDictionary *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)accountUserAltDSID;
-(void)setAccountUserAltDSID:(NSString *)arg1 ;
@end


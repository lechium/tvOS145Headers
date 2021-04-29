/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary, NSString;

@interface PKPaymentNotificationActionResponse : PKPaymentWebServiceResponse {

	NSDictionary* _aps;
	NSString* _action;
	NSString* _requestID;

}

@property (nonatomic,copy,readonly) NSDictionary * aps;                //@synthesize aps=_aps - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                 //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestID;              //@synthesize requestID=_requestID - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)action;
-(NSString *)requestID;
-(NSDictionary *)aps;
@end

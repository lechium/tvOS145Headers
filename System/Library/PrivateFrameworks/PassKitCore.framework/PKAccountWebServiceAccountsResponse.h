/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray, NSString;

@interface PKAccountWebServiceAccountsResponse : PKAccountWebServiceResponse {

	NSArray* _accounts;
	NSString* _lastUpdated;

}

@property (nonatomic,copy,readonly) NSArray * accounts;                  //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastUpdated;              //@synthesize lastUpdated=_lastUpdated - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSArray *)accounts;
-(NSString *)lastUpdated;
@end


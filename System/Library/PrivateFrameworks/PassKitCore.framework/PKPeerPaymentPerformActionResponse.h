/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@interface PKPeerPaymentPerformActionResponse : PKPeerPaymentWebServiceResponse {

	BOOL _success;
	long long _status;

}

@property (nonatomic,readonly) BOOL success;                  //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) long long status;              //@synthesize status=_status - In the implementation block
-(id)initWithData:(id)arg1 ;
-(long long)status;
-(BOOL)success;
@end


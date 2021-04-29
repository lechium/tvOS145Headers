/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentMerchantSession;

@interface PKPaymentRequestMerchantSessionUpdate : NSObject <NSSecureCoding> {

	long long _status;
	PKPaymentMerchantSession* _session;

}

@property (assign,nonatomic) long long status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) PKPaymentMerchantSession * session;              //@synthesize session=_session - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPaymentMerchantSession *)session;
-(long long)status;
-(void)setSession:(PKPaymentMerchantSession *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)initWithStatus:(long long)arg1 merchantSession:(id)arg2 ;
@end

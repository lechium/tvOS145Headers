/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentRequestUpdate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKPaymentRequestShippingContactUpdate : PKPaymentRequestUpdate <NSSecureCoding> {

	NSArray* _shippingMethods;
	NSArray* _errors;

}

@property (nonatomic,copy) NSArray * shippingMethods;              //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (nonatomic,copy) NSArray * errors;                       //@synthesize errors=_errors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)errors;
-(void)setErrors:(NSArray *)arg1 ;
-(id)initWithPaymentSummaryItems:(id)arg1 ;
-(NSArray *)shippingMethods;
-(id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 shippingMethods:(id)arg3 ;
-(void)setShippingMethods:(NSArray *)arg1 ;
-(id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2 ;
-(id)initWithStatus:(long long)arg1 errors:(id)arg2 paymentSummaryItems:(id)arg3 shippingMethods:(id)arg4 ;
@end


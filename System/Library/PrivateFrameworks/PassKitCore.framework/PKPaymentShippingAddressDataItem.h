/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentDataItem.h>

@class NSAttributedString, CNContact, NSString;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSAttributedString * formattedAddressString; 
@property (nonatomic,readonly) CNContact * shippingAddress; 
@property (nonatomic,readonly) NSString * shippingType; 
@property (nonatomic,readonly) BOOL isShippingEditable; 
+(long long)dataType;
-(id)errors;
-(NSAttributedString *)formattedAddressString;
-(BOOL)isValidWithError:(id*)arg1 ;
-(CNContact *)shippingAddress;
-(NSString *)shippingType;
-(BOOL)isShippingEditable;
-(id)paymentContactFormatErrors;
-(id)_shippingName;
@end


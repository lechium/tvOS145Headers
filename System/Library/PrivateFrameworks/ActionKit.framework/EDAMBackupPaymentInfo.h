/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMBackupPaymentInfo : FATObject {

	NSString* _premiumCommerceService;
	NSString* _premiumServiceSKU;
	NSString* _currency;
	NSNumber* _unitPrice;
	NSNumber* _paymentMethodId;

}

@property (nonatomic,retain) NSString * premiumCommerceService;              //@synthesize premiumCommerceService=_premiumCommerceService - In the implementation block
@property (nonatomic,retain) NSString * premiumServiceSKU;                   //@synthesize premiumServiceSKU=_premiumServiceSKU - In the implementation block
@property (nonatomic,retain) NSString * currency;                            //@synthesize currency=_currency - In the implementation block
@property (nonatomic,retain) NSNumber * unitPrice;                           //@synthesize unitPrice=_unitPrice - In the implementation block
@property (nonatomic,retain) NSNumber * paymentMethodId;                     //@synthesize paymentMethodId=_paymentMethodId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)premiumCommerceService;
-(void)setPremiumCommerceService:(NSString *)arg1 ;
-(NSString *)premiumServiceSKU;
-(void)setPremiumServiceSKU:(NSString *)arg1 ;
-(NSNumber *)unitPrice;
-(void)setUnitPrice:(NSNumber *)arg1 ;
-(NSNumber *)paymentMethodId;
-(void)setPaymentMethodId:(NSNumber *)arg1 ;
@end


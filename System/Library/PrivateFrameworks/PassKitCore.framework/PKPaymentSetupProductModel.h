/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface PKPaymentSetupProductModel : NSObject {

	NSMutableDictionary* _paymentSetupProducts;

}
-(id)init;
-(id)productsForFeatureIdentifier:(unsigned long long)arg1 ;
-(void)setPaymentSetupProducts:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)addPaymentSetupProducts:(id)arg1 ;
-(id)productForProductIdentifier:(id)arg1 ;
-(id)setupProductsOfType:(unsigned long long)arg1 ;
-(id)allSetupProducts;
-(void)setPaymentSetupProducts:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentPass, PKPeerPaymentQuote;

@interface PKPeerPaymentCardDataItem : PKPaymentDataItem {

	PKPaymentPass* _pass;

}

@property (nonatomic,readonly) PKPaymentPass * pass; 
@property (nonatomic,readonly) PKPeerPaymentQuote * quote; 
+(long long)dataType;
-(PKPaymentPass *)pass;
-(PKPeerPaymentQuote *)quote;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)shouldShowDisclosure;
@end


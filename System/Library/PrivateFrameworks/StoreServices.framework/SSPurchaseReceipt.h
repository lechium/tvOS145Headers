/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ISPurchaseReceipt, NSDate;

@interface SSPurchaseReceipt : NSObject {

	ISPurchaseReceipt* _purchaseReceipt;
	BOOL _isValid;

}

@property (readonly) BOOL isValid;                         //@synthesize isValid=_isValid - In the implementation block
@property (readonly) BOOL isVPPLicensed; 
@property (readonly) BOOL isRevoked; 
@property (readonly) NSDate * expirationDate; 
+(id)receiptPathForProxy:(id)arg1 ;
+(void)getReceiptPathWithCompletionBlock:(/*^block*/id)arg1 ;
+(int)vppStateFlagsWithProxy:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(BOOL)isRevoked;
-(BOOL)isVPPLicensed;
-(BOOL)receiptExpired;
-(id)initWithContainerPath:(id)arg1 ;
@end


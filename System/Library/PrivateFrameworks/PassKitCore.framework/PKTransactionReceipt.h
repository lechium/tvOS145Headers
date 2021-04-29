/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSURL, NSDecimalNumber, NSArray, NSData, PKCurrencyAmount;

@interface PKTransactionReceipt : NSObject <NSSecureCoding, NSCopying> {

	NSString* _uniqueID;
	NSString* _receiptProviderIdentifier;
	NSString* _receiptIdentifier;
	NSDate* _lastUpdatedDate;
	NSURL* _supportURL;
	long long _state;
	NSDecimalNumber* _subtotalAmount;
	NSDecimalNumber* _totalAmount;
	NSString* _currencyCode;
	NSArray* _headerFields;
	NSArray* _lineItems;
	NSArray* _summaryItems;
	NSData* _pdfReceiptData;
	NSData* _htmlReceiptData;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSString * receiptProviderIdentifier;                       //@synthesize receiptProviderIdentifier=_receiptProviderIdentifier - In the implementation block
@property (nonatomic,copy) NSString * receiptIdentifier;                               //@synthesize receiptIdentifier=_receiptIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdatedDate;                                 //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,retain) NSURL * supportURL;                                       //@synthesize supportURL=_supportURL - In the implementation block
@property (assign,nonatomic) long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * subtotalAmount;                         //@synthesize subtotalAmount=_subtotalAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * totalAmount;                            //@synthesize totalAmount=_totalAmount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                    //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) NSArray * headerFields;                                 //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,readonly) NSArray * lineItems;                                    //@synthesize lineItems=_lineItems - In the implementation block
@property (nonatomic,readonly) NSArray * summaryItems;                                 //@synthesize summaryItems=_summaryItems - In the implementation block
@property (nonatomic,readonly) NSData * pdfReceiptData;                                //@synthesize pdfReceiptData=_pdfReceiptData - In the implementation block
@property (nonatomic,readonly) NSData * htmlReceiptData;                               //@synthesize htmlReceiptData=_htmlReceiptData - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * subtotalCurrencyAmount; 
@property (nonatomic,readonly) PKCurrencyAmount * totalCurrencyAmount; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(NSURL *)fileURL;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(NSArray *)headerFields;
-(NSDate *)lastUpdatedDate;
-(void)setTotalAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)totalAmount;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(void)updateWithBundle:(id)arg1 ;
-(BOOL)isEqualToTransactionReceipt:(id)arg1 ;
-(PKCurrencyAmount *)subtotalCurrencyAmount;
-(PKCurrencyAmount *)totalCurrencyAmount;
-(NSString *)receiptProviderIdentifier;
-(void)setReceiptProviderIdentifier:(NSString *)arg1 ;
-(NSString *)receiptIdentifier;
-(void)setReceiptIdentifier:(NSString *)arg1 ;
-(NSURL *)supportURL;
-(void)setSupportURL:(NSURL *)arg1 ;
-(NSDecimalNumber *)subtotalAmount;
-(void)setSubtotalAmount:(NSDecimalNumber *)arg1 ;
-(NSArray *)lineItems;
-(NSArray *)summaryItems;
-(NSData *)pdfReceiptData;
-(NSData *)htmlReceiptData;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSData;

@interface PKServiceProviderOrder : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _itemDescription;
	NSString* _serviceProviderIdentifier;
	NSDictionary* _serviceProviderData;
	unsigned long long _paymentInstrumentType;
	NSData* _appletValue;
	NSString* _transactionIdentifier;

}

@property (nonatomic,copy) NSDictionary * serviceProviderData;                      //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * itemDescription;                              //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,copy) NSString * serviceProviderIdentifier;                    //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long paymentInstrumentType;              //@synthesize paymentInstrumentType=_paymentInstrumentType - In the implementation block
@property (nonatomic,copy) NSData * appletValue;                                    //@synthesize appletValue=_appletValue - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;                        //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)itemDescription;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
-(id)_itemDictionary;
-(void)setItemDescription:(NSString *)arg1 ;
-(NSString *)serviceProviderIdentifier;
-(void)setPaymentInstrumentType:(unsigned long long)arg1 ;
-(void)setAppletValue:(NSData *)arg1 ;
-(NSDictionary *)serviceProviderData;
-(id)_paymentInstrumentDictionary;
-(void)setServiceProviderIdentifier:(NSString *)arg1 ;
-(void)setServiceProviderData:(NSDictionary *)arg1 ;
-(unsigned long long)paymentInstrumentType;
-(NSData *)appletValue;
@end


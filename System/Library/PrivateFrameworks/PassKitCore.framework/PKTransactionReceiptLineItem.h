/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKImage, NSDecimalNumber, NSURL, PKCurrencyAmount;

@interface PKTransactionReceiptLineItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	NSString* _secondarySubtitle;
	PKImage* _image;
	unsigned long long _quantity;
	NSDecimalNumber* _amount;
	NSString* _currencyCode;
	NSURL* _iconImageURL;
	unsigned long long _adamIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * secondarySubtitle;                       //@synthesize secondarySubtitle=_secondarySubtitle - In the implementation block
@property (nonatomic,retain) PKImage * image;                                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long quantity;                      //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * amount;                         //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                            //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSURL * iconImageURL;                             //@synthesize iconImageURL=_iconImageURL - In the implementation block
@property (assign,nonatomic) unsigned long long adamIdentifier;                //@synthesize adamIdentifier=_adamIdentifier - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * currencyAmount; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(PKImage *)image;
-(void)setImage:(PKImage *)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(unsigned long long)quantity;
-(void)setQuantity:(unsigned long long)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(unsigned long long)adamIdentifier;
-(void)setAdamIdentifier:(unsigned long long)arg1 ;
-(NSString *)secondarySubtitle;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isEqualToTransactionReceiptLineItem:(id)arg1 ;
-(void)setSecondarySubtitle:(NSString *)arg1 ;
-(NSURL *)iconImageURL;
-(void)setIconImageURL:(NSURL *)arg1 ;
@end


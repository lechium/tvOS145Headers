/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INBillPayee, INCurrencyAmount, NSDateComponents, NSString;

@interface INBillDetails : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INBillPayee* _billPayee;
	INCurrencyAmount* _amountDue;
	INCurrencyAmount* _minimumDue;
	INCurrencyAmount* _lateFee;
	NSDateComponents* _dueDate;
	NSDateComponents* _paymentDate;
	long long _billType;
	long long _paymentStatus;

}

@property (nonatomic,copy) INBillPayee * billPayee;                     //@synthesize billPayee=_billPayee - In the implementation block
@property (nonatomic,copy) INCurrencyAmount * amountDue;                //@synthesize amountDue=_amountDue - In the implementation block
@property (nonatomic,copy) INCurrencyAmount * minimumDue;               //@synthesize minimumDue=_minimumDue - In the implementation block
@property (nonatomic,copy) INCurrencyAmount * lateFee;                  //@synthesize lateFee=_lateFee - In the implementation block
@property (nonatomic,copy) NSDateComponents * dueDate;                  //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * paymentDate;              //@synthesize paymentDate=_paymentDate - In the implementation block
@property (assign,nonatomic) long long billType;                        //@synthesize billType=_billType - In the implementation block
@property (assign,nonatomic) long long paymentStatus;                   //@synthesize paymentStatus=_paymentStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setDueDate:(NSDateComponents *)arg1 ;
-(NSDateComponents *)dueDate;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithBillType:(long long)arg1 paymentStatus:(long long)arg2 billPayee:(id)arg3 amountDue:(id)arg4 minimumDue:(id)arg5 lateFee:(id)arg6 dueDate:(id)arg7 paymentDate:(id)arg8 ;
-(INBillPayee *)billPayee;
-(void)setBillPayee:(INBillPayee *)arg1 ;
-(INCurrencyAmount *)amountDue;
-(void)setAmountDue:(INCurrencyAmount *)arg1 ;
-(INCurrencyAmount *)minimumDue;
-(void)setMinimumDue:(INCurrencyAmount *)arg1 ;
-(INCurrencyAmount *)lateFee;
-(void)setLateFee:(INCurrencyAmount *)arg1 ;
-(NSDateComponents *)paymentDate;
-(void)setPaymentDate:(NSDateComponents *)arg1 ;
-(long long)billType;
-(void)setBillType:(long long)arg1 ;
-(long long)paymentStatus;
-(void)setPaymentStatus:(long long)arg1 ;
@end


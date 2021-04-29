/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSDecimalNumber;

@interface PKCreditAccountStatement : NSObject <NSSecureCoding, PKRecordObject, NSCopying> {

	NSString* _identifier;
	NSDate* _openingDate;
	NSDate* _closingDate;
	NSDate* _paymentDueDate;
	NSString* _currencyCode;
	NSDecimalNumber* _statementBalance;
	NSDecimalNumber* _totalBalance;
	NSDecimalNumber* _minimumDue;
	NSDecimalNumber* _purchases;
	NSDecimalNumber* _feesCharged;
	NSDecimalNumber* _interestCharged;
	NSDecimalNumber* _balanceTransfers;
	NSDecimalNumber* _paymentsAndCredits;
	NSDecimalNumber* _payments;
	NSDecimalNumber* _credits;
	NSDecimalNumber* _rewardsBalance;
	NSDecimalNumber* _rewardsEarned;
	NSDecimalNumber* _rewardsRedeemed;
	NSDecimalNumber* _rewardsYTD;
	NSDecimalNumber* _rewardsLifetime;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDate * openingDate;                              //@synthesize openingDate=_openingDate - In the implementation block
@property (nonatomic,copy) NSDate * closingDate;                              //@synthesize closingDate=_closingDate - In the implementation block
@property (nonatomic,copy) NSDate * paymentDueDate;                           //@synthesize paymentDueDate=_paymentDueDate - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                           //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * statementBalance;                //@synthesize statementBalance=_statementBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * totalBalance;                    //@synthesize totalBalance=_totalBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumDue;                      //@synthesize minimumDue=_minimumDue - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * purchases;                       //@synthesize purchases=_purchases - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * feesCharged;                     //@synthesize feesCharged=_feesCharged - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * interestCharged;                 //@synthesize interestCharged=_interestCharged - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balanceTransfers;                //@synthesize balanceTransfers=_balanceTransfers - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * paymentsAndCredits;              //@synthesize paymentsAndCredits=_paymentsAndCredits - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * payments;                        //@synthesize payments=_payments - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * credits;                         //@synthesize credits=_credits - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsBalance;                  //@synthesize rewardsBalance=_rewardsBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsEarned;                   //@synthesize rewardsEarned=_rewardsEarned - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsRedeemed;                 //@synthesize rewardsRedeemed=_rewardsRedeemed - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsYTD;                      //@synthesize rewardsYTD=_rewardsYTD - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * rewardsLifetime;                 //@synthesize rewardsLifetime=_rewardsLifetime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)currencyCode;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSDecimalNumber *)minimumDue;
-(void)setMinimumDue:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)purchases;
-(NSDate *)paymentDueDate;
-(NSDecimalNumber *)rewardsBalance;
-(void)setRewardsBalance:(NSDecimalNumber *)arg1 ;
-(void)setPaymentDueDate:(NSDate *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSDate *)openingDate;
-(void)setOpeningDate:(NSDate *)arg1 ;
-(NSDate *)closingDate;
-(void)setClosingDate:(NSDate *)arg1 ;
-(NSDecimalNumber *)statementBalance;
-(void)setStatementBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)totalBalance;
-(void)setTotalBalance:(NSDecimalNumber *)arg1 ;
-(void)setPurchases:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)feesCharged;
-(void)setFeesCharged:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)interestCharged;
-(void)setInterestCharged:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)balanceTransfers;
-(void)setBalanceTransfers:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)paymentsAndCredits;
-(void)setPaymentsAndCredits:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)payments;
-(void)setPayments:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)credits;
-(void)setCredits:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsEarned;
-(void)setRewardsEarned:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsRedeemed;
-(void)setRewardsRedeemed:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsYTD;
-(void)setRewardsYTD:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)rewardsLifetime;
-(void)setRewardsLifetime:(NSDecimalNumber *)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDecimalNumber;

@interface PKAccountUserPreferences : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	BOOL _spendingEnabled;
	BOOL _showAvailableCredit;
	BOOL _transactionSpendLimitEnabled;
	BOOL _monthlySpendLimitEnabled;
	NSDecimalNumber* _transactionSpendLimitAmount;
	NSDecimalNumber* _monthlySpendLimitAmount;

}

@property (assign,nonatomic) BOOL spendingEnabled;                                       //@synthesize spendingEnabled=_spendingEnabled - In the implementation block
@property (assign,nonatomic) BOOL showAvailableCredit;                                   //@synthesize showAvailableCredit=_showAvailableCredit - In the implementation block
@property (assign,nonatomic) BOOL transactionSpendLimitEnabled;                          //@synthesize transactionSpendLimitEnabled=_transactionSpendLimitEnabled - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * transactionSpendLimitAmount;              //@synthesize transactionSpendLimitAmount=_transactionSpendLimitAmount - In the implementation block
@property (assign,nonatomic) BOOL monthlySpendLimitEnabled;                              //@synthesize monthlySpendLimitEnabled=_monthlySpendLimitEnabled - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * monthlySpendLimitAmount;                  //@synthesize monthlySpendLimitAmount=_monthlySpendLimitAmount - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentationForAccountUserAccessLevel:(unsigned long long)arg1 ;
-(id)initWithAccountUserPreferences:(id)arg1 ;
-(BOOL)spendingEnabled;
-(BOOL)showAvailableCredit;
-(BOOL)transactionSpendLimitEnabled;
-(NSDecimalNumber *)transactionSpendLimitAmount;
-(BOOL)monthlySpendLimitEnabled;
-(NSDecimalNumber *)monthlySpendLimitAmount;
-(BOOL)isEqualToAccountUserPreferences:(id)arg1 ;
-(void)setSpendingEnabled:(BOOL)arg1 ;
-(void)setShowAvailableCredit:(BOOL)arg1 ;
-(void)setTransactionSpendLimitEnabled:(BOOL)arg1 ;
-(void)setTransactionSpendLimitAmount:(NSDecimalNumber *)arg1 ;
-(void)setMonthlySpendLimitEnabled:(BOOL)arg1 ;
-(void)setMonthlySpendLimitAmount:(NSDecimalNumber *)arg1 ;
@end


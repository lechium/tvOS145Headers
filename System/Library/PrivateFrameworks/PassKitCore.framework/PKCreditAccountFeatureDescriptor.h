/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKAccountFeatureDescriptor.h>

@class NSArray, NSString;

@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor {

	unsigned long long _paymentFundingSourceTypes;
	unsigned long long _paymentPresets;
	unsigned long long _paymentFrequencies;
	NSArray* _supportedFileFormatsForTransactionData;
	NSString* _paymentTermsIdentifier;
	NSString* _fundingSourceTermsIdentifier;
	unsigned long long _maximumAccountUsers;
	unsigned long long _minimumOwnerAge;
	unsigned long long _minimumParticipantAge;

}

@property (assign,nonatomic) unsigned long long paymentFundingSourceTypes;                //@synthesize paymentFundingSourceTypes=_paymentFundingSourceTypes - In the implementation block
@property (assign,nonatomic) unsigned long long paymentPresets;                           //@synthesize paymentPresets=_paymentPresets - In the implementation block
@property (assign,nonatomic) unsigned long long paymentFrequencies;                       //@synthesize paymentFrequencies=_paymentFrequencies - In the implementation block
@property (nonatomic,copy) NSArray * supportedFileFormatsForTransactionData;              //@synthesize supportedFileFormatsForTransactionData=_supportedFileFormatsForTransactionData - In the implementation block
@property (nonatomic,copy) NSString * paymentTermsIdentifier;                             //@synthesize paymentTermsIdentifier=_paymentTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * fundingSourceTermsIdentifier;                       //@synthesize fundingSourceTermsIdentifier=_fundingSourceTermsIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long maximumAccountUsers;                      //@synthesize maximumAccountUsers=_maximumAccountUsers - In the implementation block
@property (assign,nonatomic) unsigned long long minimumOwnerAge;                          //@synthesize minimumOwnerAge=_minimumOwnerAge - In the implementation block
@property (assign,nonatomic) unsigned long long minimumParticipantAge;                    //@synthesize minimumParticipantAge=_minimumParticipantAge - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)paymentFundingSourceTypes;
-(NSString *)paymentTermsIdentifier;
-(void)setPaymentTermsIdentifier:(NSString *)arg1 ;
-(NSString *)fundingSourceTermsIdentifier;
-(void)setFundingSourceTermsIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToCreditAccountFeatureDescriptor:(id)arg1 ;
-(void)setPaymentFundingSourceTypes:(unsigned long long)arg1 ;
-(unsigned long long)paymentPresets;
-(void)setPaymentPresets:(unsigned long long)arg1 ;
-(unsigned long long)paymentFrequencies;
-(void)setPaymentFrequencies:(unsigned long long)arg1 ;
-(NSArray *)supportedFileFormatsForTransactionData;
-(void)setSupportedFileFormatsForTransactionData:(NSArray *)arg1 ;
-(unsigned long long)maximumAccountUsers;
-(void)setMaximumAccountUsers:(unsigned long long)arg1 ;
-(unsigned long long)minimumOwnerAge;
-(void)setMinimumOwnerAge:(unsigned long long)arg1 ;
-(unsigned long long)minimumParticipantAge;
-(void)setMinimumParticipantAge:(unsigned long long)arg1 ;
@end


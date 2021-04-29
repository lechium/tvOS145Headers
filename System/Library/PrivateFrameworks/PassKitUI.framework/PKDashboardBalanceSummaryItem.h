/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKAccount, PKAccountUserCollection, PKTransactionSourceCollection, PKFamilyMemberCollection, PKPaymentWebService, PKPaymentTransactionGroup, PKCreditAccountStatement, PKCreditAccountSummary, NSArray, NSString;

@interface PKDashboardBalanceSummaryItem : NSObject <PKDashboardItem> {

	PKAccount* _account;
	PKAccountUserCollection* _accountUserCollection;
	PKTransactionSourceCollection* _transactionSourceCollection;
	PKFamilyMemberCollection* _familyCollection;
	PKPaymentWebService* _webService;
	unsigned long long _type;
	PKPaymentTransactionGroup* _transactionGroup;
	PKCreditAccountStatement* _statement;
	PKCreditAccountSummary* _summary;
	NSArray* _statements;

}

@property (nonatomic,retain) PKAccount * account;                                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKAccountUserCollection * accountUserCollection;                          //@synthesize accountUserCollection=_accountUserCollection - In the implementation block
@property (nonatomic,retain) PKTransactionSourceCollection * transactionSourceCollection;              //@synthesize transactionSourceCollection=_transactionSourceCollection - In the implementation block
@property (nonatomic,retain) PKFamilyMemberCollection * familyCollection;                              //@synthesize familyCollection=_familyCollection - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * webService;                                         //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * transactionGroup;                             //@synthesize transactionGroup=_transactionGroup - In the implementation block
@property (nonatomic,retain) PKCreditAccountStatement * statement;                                     //@synthesize statement=_statement - In the implementation block
@property (nonatomic,retain) PKCreditAccountSummary * summary;                                         //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSArray * statements;                                                     //@synthesize statements=_statements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(PKCreditAccountSummary *)summary;
-(void)setSummary:(PKCreditAccountSummary *)arg1 ;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKCreditAccountStatement *)statement;
-(void)setStatement:(PKCreditAccountStatement *)arg1 ;
-(NSArray *)statements;
-(void)setStatements:(NSArray *)arg1 ;
-(PKPaymentWebService *)webService;
-(PKFamilyMemberCollection *)familyCollection;
-(PKAccountUserCollection *)accountUserCollection;
-(void)setAccountUserCollection:(PKAccountUserCollection *)arg1 ;
-(PKTransactionSourceCollection *)transactionSourceCollection;
-(void)setTransactionSourceCollection:(PKTransactionSourceCollection *)arg1 ;
-(PKPaymentTransactionGroup *)transactionGroup;
-(void)setFamilyCollection:(PKFamilyMemberCollection *)arg1 ;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)setTransactionGroup:(PKPaymentTransactionGroup *)arg1 ;
@end

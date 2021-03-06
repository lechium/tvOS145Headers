/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKPaymentTransactionGroup, PKTransactionSourceCollection, PKFamilyMemberCollection, PKAccount, PKAccountUserCollection, NSArray, NSString;

@interface PKDashboardPaymentTransactionGroupItem : NSObject <PKDashboardItem> {

	PKPaymentTransactionGroup* _group;
	PKTransactionSourceCollection* _transactionSourceCollection;
	PKFamilyMemberCollection* _familyCollection;
	PKAccount* _account;
	PKAccountUserCollection* _accountUserCollection;
	NSArray* _tokens;

}

@property (nonatomic,retain) PKPaymentTransactionGroup * group;                                        //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) PKTransactionSourceCollection * transactionSourceCollection;              //@synthesize transactionSourceCollection=_transactionSourceCollection - In the implementation block
@property (nonatomic,retain) PKFamilyMemberCollection * familyCollection;                              //@synthesize familyCollection=_familyCollection - In the implementation block
@property (nonatomic,retain) PKAccount * account;                                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKAccountUserCollection * accountUserCollection;                          //@synthesize accountUserCollection=_accountUserCollection - In the implementation block
@property (nonatomic,retain) NSArray * tokens;                                                         //@synthesize tokens=_tokens - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setGroup:(PKPaymentTransactionGroup *)arg1 ;
-(PKPaymentTransactionGroup *)group;
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKFamilyMemberCollection *)familyCollection;
-(PKAccountUserCollection *)accountUserCollection;
-(void)setAccountUserCollection:(PKAccountUserCollection *)arg1 ;
-(PKTransactionSourceCollection *)transactionSourceCollection;
-(void)setTransactionSourceCollection:(PKTransactionSourceCollection *)arg1 ;
-(void)setFamilyCollection:(PKFamilyMemberCollection *)arg1 ;
@end


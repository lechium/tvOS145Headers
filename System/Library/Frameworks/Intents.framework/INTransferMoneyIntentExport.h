/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INPaymentAccount, INPaymentAmount, INDateComponentsRange, NSString;


@protocol INTransferMoneyIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPaymentAccount * fromAccount; 
@property (nonatomic,copy) INPaymentAccount * toAccount; 
@property (nonatomic,copy) INPaymentAmount * transactionAmount; 
@property (nonatomic,copy) INDateComponentsRange * transactionScheduledDate; 
@property (nonatomic,copy) NSString * transactionNote; 
@required
-(id)init;
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(id)arg1;
-(INPaymentAccount *)toAccount;
-(void)setToAccount:(id)arg1;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(id)arg1;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(id)arg1;
-(NSString *)transactionNote;
-(void)setTransactionNote:(id)arg1;

@end


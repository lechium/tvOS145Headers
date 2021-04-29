/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INBillPayee, INDateComponentsRange;


@protocol INSearchForBillsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INBillPayee * billPayee; 
@property (nonatomic,copy) INDateComponentsRange * paymentDateRange; 
@property (assign,nonatomic) long long billType; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,copy) INDateComponentsRange * dueDateRange; 
@required
-(id)init;
-(long long)status;
-(void)setStatus:(long long)arg1;
-(INBillPayee *)billPayee;
-(void)setBillPayee:(id)arg1;
-(long long)billType;
-(void)setBillType:(long long)arg1;
-(INDateComponentsRange *)dueDateRange;
-(void)setDueDateRange:(id)arg1;
-(INDateComponentsRange *)paymentDateRange;
-(void)setPaymentDateRange:(id)arg1;

@end


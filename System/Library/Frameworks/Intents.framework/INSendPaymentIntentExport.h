/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INPerson, INCurrencyAmount, NSString;


@protocol INSendPaymentIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * payee; 
@property (nonatomic,copy) INCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSString * note; 
@required
-(id)init;
-(void)setNote:(id)arg1;
-(NSString *)note;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(id)arg1;
-(INPerson *)payee;
-(void)setPayee:(id)arg1;

@end


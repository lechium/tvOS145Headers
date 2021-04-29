/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PKPaymentTransactionPresentation : NSObject
+(id)_relativeDateForTransaction:(id)arg1 ;
+(id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 secondarySource:(id)arg2 includeBankAccountSuffix:(BOOL)arg3 useGenericNameIfNoDescriptionAvailable:(BOOL)arg4 ;
+(id)_statusAnnotationForTransaction:(id)arg1 ;
+(id)_billPaymentFundingSourceForTransaction:(id)arg1 ;
+(id)staticPDFNameForTransaction:(id)arg1 ;
+(id)presentationInformationForTransaction:(id)arg1 transactionSource:(id)arg2 secondaryTransactionSource:(id)arg3 familyMember:(id)arg4 account:(id)arg5 deviceName:(id)arg6 context:(unsigned long long)arg7 ;
+(unsigned long long)iconTypeForTransaction:(id)arg1 ignoreLogoURL:(BOOL)arg2 ;
@end

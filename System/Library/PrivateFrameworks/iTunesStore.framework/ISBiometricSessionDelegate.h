/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ISBiometricSessionDelegate <NSObject>
@optional
-(void)sender:(id)arg1 didFallbackToPassword:(BOOL)arg2;
-(void)sender:(id)arg1 shouldContinueTouchIDSession:(BOOL)arg2;
-(void)sender:(id)arg1 willSendChallenge:(id)arg2 andSignature:(id)arg3 andPaymentTokenData:(id)arg4 andFpanID:(id)arg5 isExtendedAction:(BOOL)arg6 isPayment:(BOOL)arg7 additionalHeaders:(id)arg8;

@end


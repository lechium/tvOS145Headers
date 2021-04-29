/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CDPRemoteDeviceSecretValidatorProtocol;
@interface CDPRemoteDeviceSecretValidator : NSObject {

	id<CDPRemoteDeviceSecretValidatorProtocol> _validator;

}
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)validateRecoveryKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cancelValidationWithError:(id)arg1 ;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelApproveFromAnotherDevice;
-(void)resetAccountCDPState;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)supportedEscapeOfferMask;
-(id)initWithContext:(id)arg1 validator:(id)arg2 ;
-(void)_executeSyncOnMainThreadIfNeeded:(/*^block*/id)arg1 ;
@end


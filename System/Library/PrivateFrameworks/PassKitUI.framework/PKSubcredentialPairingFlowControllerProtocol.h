/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKSubcredentialPairingFlowControllerProtocol <PKSubcredentialProvisioningFlowController>
@required
-(id)remoteDeviceProvisioningViewModelForOperation:(id)arg1;
-(id)alertForOperation:(id)arg1 withError:(id)arg2 retryHandler:(/*^block*/id)arg3 cancelationHandler:(/*^block*/id)arg4;
-(id)localDeviceProvisioningViewModelForOperation:(id)arg1;
-(void)prewarmPairingWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end


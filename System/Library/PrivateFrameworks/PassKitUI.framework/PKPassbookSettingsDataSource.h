/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPassbookSettingsDataSource <NSObject>
@optional
-(id)deviceName;
-(BOOL)supportsCredentialType:(long long)arg1;
-(BOOL)hasFelicaSecureElement;
-(BOOL)supportsAddingPaymentPass:(id)arg1;

@required
-(id)secureElementID;
-(BOOL)secureElementIsProductionSigned;
-(id)passLibraryDataProvider;
-(id)paymentDataProvider;
-(id)setupDelegate;
-(id)peerPaymentDelegate;
-(id)peerPaymentDataSource;
-(id)optionsDelegate;
-(BOOL)canRegisterForPeerPayment;
-(BOOL)deviceInRestrictedMode;
-(BOOL)deviceSupportsInAppPayments;

@end


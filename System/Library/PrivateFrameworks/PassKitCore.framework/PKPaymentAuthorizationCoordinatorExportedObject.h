/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationHostProtocol.h>

@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol;
@class PKPaymentAuthorizationCoordinator, NSString;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol> {

	os_unfair_lock_s _delegateLock;
	id<PKPaymentAuthorizationCoordinatorDelegate> _delegate;
	id<PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
	PKPaymentAuthorizationCoordinator* _controller;
	id<PKPaymentAuthorizationServiceProtocol> _serviceProxy;

}

@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationCoordinatorDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) PKPaymentAuthorizationCoordinator * controller;                                    //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) id<PKPaymentAuthorizationServiceProtocol> serviceProxy;                                   //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<PKPaymentAuthorizationCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationCoordinatorDelegate>)arg1 ;
-(void)setController:(PKPaymentAuthorizationCoordinator *)arg1 ;
-(id<PKPaymentAuthorizationCoordinatorPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<PKPaymentAuthorizationCoordinatorPrivateDelegate>)arg1 ;
-(PKPaymentAuthorizationCoordinator *)controller;
-(id)initWithController:(id)arg1 ;
-(void)authorizationWillStart;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidAuthorizePurchase:(id)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursement:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(void)authorizationDidPresent;
-(void)didEncounterAuthorizationEvent:(unsigned long long)arg1 ;
-(void)authorizationDidAuthorizeContext;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1 ;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1 ;
-(void)handleConnectionDidOpenWithCompletion:(/*^block*/id)arg1 ;
-(void)setServiceProxy:(id<PKPaymentAuthorizationServiceProtocol>)arg1 ;
-(id<PKPaymentAuthorizationServiceProtocol>)serviceProxy;
@end


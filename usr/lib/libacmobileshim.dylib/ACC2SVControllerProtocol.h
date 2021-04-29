/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACC2SVControllerProtocol <NSObject>
@property (assign,nonatomic) id<ACC2SVControllerDelegate> delegate; 
@property (nonatomic,retain) id<ACC2SVAuthenticationUIControllerProtocol> secondFactorAuthUIController; 
@property (nonatomic,retain) id<ACC2SVTransportControllerProtocol> transportController; 
@optional
-(void)removeHSATokenForPrincipal:(id)arg1;
-(void)synchronizeHSATokens:(id)arg1;
-(void)setup2StepVerificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(id<ACC2SVControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancelWithCompletion:(/*^block*/id)arg1;
-(void)setSecondFactorAuthUIController:(id)arg1;
-(void)setTransportController:(id)arg1;
-(id<ACC2SVAuthenticationUIControllerProtocol>)secondFactorAuthUIController;
-(id<ACC2SVTransportControllerProtocol>)transportController;
-(void)perform2StepVerificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2;

@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PKSubcredentialPairingFlowControllerContext;


@protocol PKSubcredentialPairingFlowControllerOperation <PKSubcredentialProvisioningFlowControllerOperation,PKFieldDetectSuppressor>
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext; 
@property (nonatomic,readonly) id<PKSubcredentialPairingFlowControllerProtocol> flowController; 
@property (nonatomic,readonly) unsigned long long operation; 
@optional
-(void)hostApplicationWillEnterForeground;
-(void)hostApplicationDidEnterBackground;

@required
-(unsigned long long)operation;
-(id<PKSubcredentialPairingFlowControllerProtocol>)flowController;
-(id)initWithFlowController:(id)arg1 context:(id)arg2;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(id)arg1;

@end


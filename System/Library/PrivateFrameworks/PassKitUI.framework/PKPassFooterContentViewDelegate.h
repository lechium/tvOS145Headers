/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPassFooterContentViewDelegate <NSObject>
@required
-(BOOL)isPassFooterContentViewInGroup:(id)arg1;
-(void)passFooterContentViewDidAuthorizeTransaction:(id)arg1;
-(void)passFooterContentViewRequestsSessionSuppression:(id)arg1;
-(void)passFooterContentViewDidAuthenticate:(id)arg1;
-(void)passFooterContentView:(id)arg1 didAuthorizeAndRetrieveDecryptedBarcode:(id)arg2;
-(void)passFooterContentViewDidInvalidateAuthorizedBarcode:(id)arg1;
-(void)passFooterContentViewDidChangePhysicalButtonRequirement:(id)arg1;
-(void)passFooterContentViewDidChangeCoachingState:(id)arg1;
-(void)passFooterContentViewDidChangePileSuppressionRequirement:(id)arg1;
-(unsigned long long)suppressedContentForContentView:(id)arg1;

@end


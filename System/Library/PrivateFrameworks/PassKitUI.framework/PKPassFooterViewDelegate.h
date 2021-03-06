/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPassFooterViewDelegate <NSObject>
@optional
-(void)passFooterViewDidChangePileSuppressionRequirement:(id)arg1;
-(void)passFooterViewDidSucceedAtAuthorization:(id)arg1;
-(void)passFooterViewDidEndAuthorization:(id)arg1;

@required
-(void)passFooterViewDidChangePhysicalButtonRequirement:(id)arg1;
-(void)passFooterViewDidChangeCoachingState:(id)arg1;
-(BOOL)isPassFooterViewInGroup:(id)arg1;
-(unsigned long long)suppressedContentForPassFooter:(id)arg1;

@end


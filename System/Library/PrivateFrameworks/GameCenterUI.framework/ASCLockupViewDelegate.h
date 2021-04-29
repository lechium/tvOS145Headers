/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASCLockupViewDelegate <NSObject>
@optional
-(void)lockupViewDidBeginRequest:(id)arg1;
-(void)lockupViewDidFinishRequest:(id)arg1;
-(void)lockupView:(id)arg1 didFailRequestWithError:(id)arg2;
-(void)lockupView:(id)arg1 appStateDidChange:(id)arg2;
-(id)metricsActivityForLockupView:(id)arg1 toPerformActionOfOffer:(id)arg2;
-(id)metricsActivityForLockupView:(id)arg1 toPerformActionOfOffer:(id)arg2;
-(void)lockupViewDidInvalidateIntrinsicContentSize:(id)arg1;

@required
-(id)presentingViewControllerForLockupView:(id)arg1;
-(id)presentingViewControllerForLockupView:(id)arg1;

@end


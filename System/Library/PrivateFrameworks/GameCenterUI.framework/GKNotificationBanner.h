/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GKNotificationBanner : NSObject
+(void)showWelcomeBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)bannerViewWithTitle:(id)arg1 message:(id)arg2 actionMessage:(id)arg3 ;
+(id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 actionMessage:(id)arg5 shortBanner:(BOOL)arg6 ;
+(id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 ;
+(id)bannerViewWithTitle:(id)arg1 image:(id)arg2 player:(id)arg3 message:(id)arg4 actionMessage:(id)arg5 ;
+(void)showBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)showBannerWithTitle:(id)arg1 message:(id)arg2 duration:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 touchHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)showBannerWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 touchHandler:(/*^block*/id)arg4 ;
@end

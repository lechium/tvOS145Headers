/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@interface UIHandleStatusBarTapAction : BSAction

@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) int statusBarStyleOverride; 
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(long long)statusBarStyle;
-(long long)UIActionType;
-(id)initWithStatusBarStyle:(long long)arg1 ;
-(id)initWithStatusBarStyleOverride:(int)arg1 ;
-(id)initWithStatusBarStyle:(long long)arg1 andStatusBarStyleOverride:(int)arg2 ;
-(int)statusBarStyleOverride;
@end


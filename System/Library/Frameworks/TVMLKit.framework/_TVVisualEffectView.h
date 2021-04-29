/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIVisualEffectView.h>

@class UIView;

@interface _TVVisualEffectView : UIVisualEffectView {

	UIView* _hostView;

}

@property (assign,nonatomic,__weak) UIView * hostView;              //@synthesize hostView=_hostView - In the implementation block
+(id)hostViewDisablements;
+(void)addHostView:(id)arg1 ;
+(void)removeHostView:(id)arg1 ;
+(void)enableForHostView:(id)arg1 ;
+(void)disableForHostView:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setHostView:(UIView *)arg1 ;
-(UIView *)hostView;
-(void)_setDisabled:(BOOL)arg1 ;
-(void)_disablement:(id)arg1 ;
@end


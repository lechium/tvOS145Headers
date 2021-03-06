/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView;

@interface SiriUIBackgroundBlurView : UIView {

	_UIBackdropView* _materialView;

}

@property (nonatomic,retain) _UIBackdropView * materialView;              //@synthesize materialView=_materialView - In the implementation block
-(void)setVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_UIBackdropView *)materialView;
-(void)setMaterialView:(_UIBackdropView *)arg1 ;
@end


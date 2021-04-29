/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface UIViewControllerWrapperView : UIView {

	BOOL _tightWrappingDisabled;

}

@property (assign,nonatomic) BOOL tightWrappingDisabled;              //@synthesize tightWrappingDisabled=_tightWrappingDisabled - In the implementation block
+(id)existingWrapperViewForView:(id)arg1 ;
+(id)wrapperViewForView:(id)arg1 wrapperFrame:(CGRect)arg2 viewFrame:(CGRect)arg3 ;
+(id)wrapperViewForView:(id)arg1 frame:(CGRect)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)unwrapView;
-(void)unwrapView:(id)arg1 ;
-(void)setTightWrappingDisabled:(BOOL)arg1 ;
-(BOOL)tightWrappingDisabled;
@end

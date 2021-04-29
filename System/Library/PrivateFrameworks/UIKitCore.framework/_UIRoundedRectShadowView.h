/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIShadowView.h>

@interface _UIRoundedRectShadowView : _UIShadowView {

	UIEdgeInsets _shadowOutsets;
	double _maskCornerRadius;

}

@property (nonatomic,readonly) double maskCornerRadius;              //@synthesize maskCornerRadius=_maskCornerRadius - In the implementation block
+(UIEdgeInsets)_expansionInsetForShadowImage;
+(BOOL)_shouldCutoutShadow;
-(id)initWithCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(CGRect)frameWithContentWithFrame:(CGRect)arg1 ;
-(double)maskCornerRadius;
-(void)_loadImageIfNecessary;
-(void)_updateShadowOutsetsIfNecessary;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutYAxisAnchor;

@interface SeymourUI.IndexLabel : UIView {

	 layout;
	 label;
	 background;
	 textStyle;
	 labelCenterYConstraint;
	 index;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
@property (readonly,nonatomic) NSLayoutYAxisAnchor * firstBaselineAnchor; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(NSLayoutYAxisAnchor *)firstBaselineAnchor;
-(void)textSizeUpdated:(id)arg1 ;
@end


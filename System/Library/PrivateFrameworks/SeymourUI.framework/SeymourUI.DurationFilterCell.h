/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel;

@interface SeymourUI.DurationFilterCell : UICollectionViewCell {

	 delegate;
	 tickView;
	 durationLabel;
	 minLabel;
	 layout;
	 labelLayoutGuide;
	 unitsVerticalConstraint;

}

@property (readonly,nonatomic) UILabel * durationLabel; 
-(void)accessibilityApplyState:(BOOL)arg1 disabled:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UILabel *)durationLabel;
-(void)textSizeChanged:(id)arg1 ;
@end


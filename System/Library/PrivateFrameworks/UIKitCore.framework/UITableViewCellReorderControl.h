/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UITableViewCell, UIImageView;

@interface UITableViewCellReorderControl : UIControl {

	UITableViewCell* _cell;
	CGPoint _downPoint;
	double _focalY;
	double _focalHeight;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)shouldTrack;
-(id)_imageView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateImageView;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)adjustLayoutForFocalRect:(CGRect)arg1 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(id)initWithTableViewCell:(id)arg1 ;
-(id)grabberImage;
@end

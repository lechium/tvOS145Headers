/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIAlertController.h>

@class _PXAlertContentViewController, UIActivityIndicatorView, UIProgressView, UIView;

@interface PXAlertController : UIAlertController {

	_PXAlertContentViewController* _contentViewController;
	UIActivityIndicatorView* _activityIndicatorView;
	UIProgressView* _progressView;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
+(id)activityAlertControllerWithTitle:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
+(id)progressAlertControllerWithMessage:(id)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PXCMMProgressBannerViewDelegate;
@class PXMomentShareStatusPresentation, UIVisualEffectView, UITextView, UILabel, UIProgressView, UIAlertController, NSString;

@interface PXCMMProgressBannerView : UIView <PXChangeObserver, UITextViewDelegate> {

	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	UIVisualEffectView* _visualEffectView;
	UITextView* _activityTextView;
	UILabel* _pauseLabel;
	UIProgressView* _progressView;
	double _layoutHeight;
	id<PXCMMProgressBannerViewDelegate> _delegate;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) UIAlertController * alertController;                              //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMProgressBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double layoutHeight;                                            //@synthesize layoutHeight=_layoutHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<PXCMMProgressBannerViewDelegate>)delegate;
-(void)setDelegate:(id<PXCMMProgressBannerViewDelegate>)arg1 ;
-(void)_updateProgress;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(id)initWithMomentShareStatusPresentation:(id)arg1 ;
-(void)_updateActivityTitle;
-(void)_updatePauseTitle;
-(double)layoutHeight;
@end


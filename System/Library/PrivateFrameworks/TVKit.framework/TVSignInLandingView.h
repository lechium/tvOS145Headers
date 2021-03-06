/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TVSignInLandingViewDelegate;
@class NSString, UIImage, UILabel, UIImageView, UIButton, UIView;

@interface TVSignInLandingView : UIView {

	NSString* _title;
	NSString* _message;
	NSString* _actionPromptMessage;
	UIImage* _sampleImage;
	double _alphaOnImage;
	id<TVSignInLandingViewDelegate> _delegate;
	UILabel* _signInLabel;
	UILabel* _messageLabel;
	UIImageView* _imageView;
	UIButton* _signInButton;
	UIView* _containerView;

}

@property (nonatomic,retain) UILabel * signInLabel;                                        //@synthesize signInLabel=_signInLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                       //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIButton * signInButton;                                      //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                       //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                             //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * actionPromptMessage;                                 //@synthesize actionPromptMessage=_actionPromptMessage - In the implementation block
@property (nonatomic,retain) UIImage * sampleImage;                                        //@synthesize sampleImage=_sampleImage - In the implementation block
@property (assign,nonatomic) double alphaOnImage;                                          //@synthesize alphaOnImage=_alphaOnImage - In the implementation block
@property (assign,nonatomic,__weak) id<TVSignInLandingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TVSignInLandingViewDelegate>)delegate;
-(void)setDelegate:(id<TVSignInLandingViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)preferredFocusEnvironments;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIButton *)signInButton;
-(void)setSignInButton:(UIButton *)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(UILabel *)signInLabel;
-(void)setSignInLabel:(UILabel *)arg1 ;
-(void)setSampleImage:(UIImage *)arg1 ;
-(void)configureUIControls;
-(void)_onSelectSignIn:(id)arg1 ;
-(void)setAlphaOnImage:(double)arg1 ;
-(void)setActionPromptMessage:(NSString *)arg1 ;
-(NSString *)actionPromptMessage;
-(UIImage *)sampleImage;
-(double)alphaOnImage;
@end


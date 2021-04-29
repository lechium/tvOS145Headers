/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol AMSUIUserNotificationContentDelegate;
@class AMSUserNotification, NSString, UIImageView, UILabel, AVPlayerViewController;

@interface AMSUIUserNotificationContentViewController : UIViewController {

	id<AMSUIUserNotificationContentDelegate> _delegate;
	AMSUserNotification* _userNotification;
	NSString* _audioSessionCategory;
	unsigned long long _audioSessionCategoryOptions;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _titleLabel;
	AVPlayerViewController* _videoPlayerController;

}

@property (nonatomic,retain) NSString * audioSessionCategory;                                       //@synthesize audioSessionCategory=_audioSessionCategory - In the implementation block
@property (assign,nonatomic) unsigned long long audioSessionCategoryOptions;                        //@synthesize audioSessionCategoryOptions=_audioSessionCategoryOptions - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                 //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) AVPlayerViewController * videoPlayerController;                      //@synthesize videoPlayerController=_videoPlayerController - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIUserNotificationContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize expectedContentSize; 
@property (nonatomic,readonly) AMSUserNotification * userNotification;                              //@synthesize userNotification=_userNotification - In the implementation block
-(id<AMSUIUserNotificationContentDelegate>)delegate;
-(void)setDelegate:(id<AMSUIUserNotificationContentDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(UIImageView *)imageView;
-(AMSUserNotification *)userNotification;
-(UILabel *)titleLabel;
-(UILabel *)textLabel;
-(NSString *)audioSessionCategory;
-(unsigned long long)audioSessionCategoryOptions;
-(void)setAudioSessionCategory:(NSString *)arg1 ;
-(void)setAudioSessionCategoryOptions:(unsigned long long)arg1 ;
-(CGSize)expectedContentSize;
-(AVPlayerViewController *)videoPlayerController;
-(void)imageViewTapped:(id)arg1 ;
-(id)initWithNotification:(id)arg1 delegate:(id)arg2 ;
-(void)mediaPause;
@end


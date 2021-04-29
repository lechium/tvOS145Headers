/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UILabel, AVLoadingIndicatorView;

@interface AVSimpleChannelInterstitialViewController : UIViewController {

	UILabel* _label;
	AVLoadingIndicatorView* _loadingIndicator;

}

@property (nonatomic,readonly) AVLoadingIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) UILabel * label; 
-(void)dealloc;
-(UILabel *)label;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(AVLoadingIndicatorView *)loadingIndicator;
@end


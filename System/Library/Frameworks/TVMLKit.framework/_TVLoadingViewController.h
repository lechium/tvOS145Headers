/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKImageElement, IKViewElement;

@interface _TVLoadingViewController : _TVBgImageLoadingViewController {

	IKImageElement* _bgImageElement;
	IKImageElement* _heroImgElement;
	IKViewElement* _loadingTemplateElement;
	double _spinnerDelay;

}
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)_blurEffectStyle;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(BOOL)_backgroundImageRequiresBlur;
-(void)updateWithLoadingTemplate:(id)arg1 ;
-(void)setSpinnerDelay:(double)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXUIBadgeTheme.h>

@class UIImageSymbolConfiguration, UIColor, CAFilter, UIFont, UIBlurEffect, NSString;

@interface PXUIInteractiveWithBorderBadgeTheme : NSObject <PXUIBadgeTheme> {

	UIImageSymbolConfiguration* _imageConfiguration;
	double _imageAlpha;
	UIColor* _imageTintColor;
	CAFilter* _imageCompositingFilter;
	UIFont* _labelFont;
	double _labelAlpha;
	UIColor* _labelTextColor;
	CAFilter* _labelCompositingFilter;
	Class _backgroundViewClass;
	double _backgroundCornerRadius;
	double _backgroundBorderWidth;
	double _backgroundAlpha;
	UIColor* _backgroundColor;
	UIColor* _backgroundBorderColor;
	UIBlurEffect* _backgroundBlurEffect;

}

@property (nonatomic,readonly) UIImageSymbolConfiguration * imageConfiguration;              //@synthesize imageConfiguration=_imageConfiguration - In the implementation block
@property (nonatomic,readonly) double imageAlpha;                                            //@synthesize imageAlpha=_imageAlpha - In the implementation block
@property (nonatomic,readonly) UIColor * imageTintColor;                                     //@synthesize imageTintColor=_imageTintColor - In the implementation block
@property (nonatomic,readonly) CAFilter * imageCompositingFilter;                            //@synthesize imageCompositingFilter=_imageCompositingFilter - In the implementation block
@property (nonatomic,readonly) UIFont * labelFont;                                           //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,readonly) double labelAlpha;                                            //@synthesize labelAlpha=_labelAlpha - In the implementation block
@property (nonatomic,readonly) UIColor * labelTextColor;                                     //@synthesize labelTextColor=_labelTextColor - In the implementation block
@property (nonatomic,readonly) CAFilter * labelCompositingFilter;                            //@synthesize labelCompositingFilter=_labelCompositingFilter - In the implementation block
@property (nonatomic,readonly) Class backgroundViewClass;                                    //@synthesize backgroundViewClass=_backgroundViewClass - In the implementation block
@property (nonatomic,readonly) double backgroundCornerRadius;                                //@synthesize backgroundCornerRadius=_backgroundCornerRadius - In the implementation block
@property (nonatomic,readonly) double backgroundBorderWidth;                                 //@synthesize backgroundBorderWidth=_backgroundBorderWidth - In the implementation block
@property (nonatomic,readonly) double backgroundAlpha;                                       //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundBorderColor;                              //@synthesize backgroundBorderColor=_backgroundBorderColor - In the implementation block
@property (nonatomic,readonly) UIBlurEffect * backgroundBlurEffect;                          //@synthesize backgroundBlurEffect=_backgroundBlurEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedToggledOnOverContentBadgeTheme;
+(id)sharedToggledOffOverContentBadgeTheme;
+(id)sharedToggledOnBadgeTheme;
+(id)sharedToggledOffBadgeTheme;
-(id)init;
-(UIColor *)backgroundColor;
-(UIColor *)labelTextColor;
-(UIColor *)imageTintColor;
-(UIImageSymbolConfiguration *)imageConfiguration;
-(double)imageAlpha;
-(CAFilter *)imageCompositingFilter;
-(UIFont *)labelFont;
-(double)labelAlpha;
-(CAFilter *)labelCompositingFilter;
-(Class)backgroundViewClass;
-(double)backgroundCornerRadius;
-(double)backgroundBorderWidth;
-(double)backgroundAlpha;
-(UIColor *)backgroundBorderColor;
-(UIBlurEffect *)backgroundBlurEffect;
-(id)initWithIsToggledOn:(BOOL)arg1 isOverContent:(BOOL)arg2 ;
@end


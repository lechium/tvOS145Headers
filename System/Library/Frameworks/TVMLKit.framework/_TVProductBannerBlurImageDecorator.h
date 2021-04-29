/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVMLKit/TVMLKit-Structs.h>
@class _UIBackdropViewSettings;

@interface _TVProductBannerBlurImageDecorator : NSObject {

	BOOL _lightStyle;
	_UIBackdropViewSettings* _backdropSettings;

}

@property (assign,nonatomic) BOOL lightStyle;                                         //@synthesize lightStyle=_lightStyle - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * backdropSettings;              //@synthesize backdropSettings=_backdropSettings - In the implementation block
-(id)blurImageWithImage:(id)arg1 targetSize:(CGSize)arg2 scaleSize:(CGSize)arg3 ;
-(id)resizeImage:(CGImageRef)arg1 targetSize:(CGSize)arg2 shouldDither:(BOOL)arg3 ;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(BOOL)lightStyle;
-(void)setLightStyle:(BOOL)arg1 ;
-(_UIBackdropViewSettings *)backdropSettings;
-(void)setBackdropSettings:(_UIBackdropViewSettings *)arg1 ;
@end


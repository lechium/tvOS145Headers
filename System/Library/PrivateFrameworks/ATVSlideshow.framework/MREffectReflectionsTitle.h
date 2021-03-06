/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class NSMutableDictionary, MRTextRenderer, NSMutableArray, MRImageProvider;

@interface MREffectReflectionsTitle : MREffect {

	NSMutableDictionary* mSprites;
	BOOL mFlipped;
	BOOL mSpeedUpRight;
	double mImageMain;
	double mTextMain;
	MRTextRenderer* mTextRenderer;
	MRTextRenderer* mWordRenderer;
	NSMutableArray* mWordImages;
	NSMutableArray* mWordFrames;
	NSMutableArray* mCachedRenderedWords;
	double mTextYOffset;
	CGSize mTextSize;
	CGSize mTextImageSize;
	MRImageProvider* mMaskProvider;
	MRImageProvider* mGroundShadowCenterProvider;
	MRImageProvider* mGroundShadowLeftProvider;
	MRImageProvider* mGroundShadowRightProvider;
	NSMutableDictionary* mBreakInformation;
	BOOL mIsLoaded;

}
-(void)setAttributes:(id)arg1 ;
-(void)_cleanup;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)_unload;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(void)_applySizeScripts:(double)arg1 ;
-(void)renderTextAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 scale:(double)arg4 ;
-(void)render1SlideAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 scale:(double)arg4 tilt:(long long)arg5 phaseOutType:(long long)arg6 direction:(long long)arg7 ;
-(void)renderKey:(id)arg1 size:(CGSize)arg2 position:(CGPoint)arg3 yRot:(double)arg4 tX:(double)arg5 time:(double)arg6 inContext:(id)arg7 withArguments:(id)arg8 light:(BOOL)arg9 shadow:(BOOL)arg10 ;
-(void)cacheRenderedWords;
@end


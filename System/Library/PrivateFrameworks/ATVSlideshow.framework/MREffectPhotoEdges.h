/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRImageProvider, NSMutableDictionary, MRTextRenderer, MRImage, MRCAMLBezierData;

@interface MREffectPhotoEdges : MREffect {

	MRImageProvider* mFrameProvider;
	MRImageProvider* mBreakProvider[12];
	BOOL mIsLoaded;
	NSMutableDictionary* mSprites;
	MRTextRenderer* mText0Renderer;
	MRImage* mText0Image;
	MRCAMLBezierData* mBezierEaseIn;
	MRCAMLBezierData* mBezierEaseOut;

}
-(void)_cleanup;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)_unload;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
@end


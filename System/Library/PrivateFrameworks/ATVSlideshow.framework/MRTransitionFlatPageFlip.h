/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MRTransition.h>

@class MRCAMLBezierData, MRImageProvider;

@interface MRTransitionFlatPageFlip : MRTransition {

	MRCAMLBezierData* mCurves[2];
	MRImageProvider* mPortraitShadow;

}
-(void)cleanup;
-(void)unload;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithTransitionID:(id)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
@end


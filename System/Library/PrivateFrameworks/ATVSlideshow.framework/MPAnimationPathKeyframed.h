/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAnimationPath.h>

@class NSMutableSet;

@interface MPAnimationPathKeyframed : MPAnimationPath {

	NSMutableSet* _keyframes;

}
+(id)animationPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(void)dump;
-(id)parent;
-(void)removeAllKeyframes;
-(double)relativeTimeForKeyframe:(id)arg1 ;
-(id)fullDebugLog;
-(void)setAnimationPath:(id)arg1 ;
-(void)copyKeyframes:(id)arg1 ;
-(id)keyframes;
-(void)addKeyframes:(id)arg1 ;
-(void)removeKeyframe:(id)arg1 ;
-(void)addKeyframe:(id)arg1 ;
-(double)parentPhaseInDuration;
-(double)parentPhaseOutDuration;
-(double)parentMainDuration;
-(id)orderedKeyframes;
-(void)removeKeyframes:(id)arg1 ;
-(id)createKeyframeWithScalar:(double)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithScalar:(double)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 forDuration:(double)arg3 ;
-(id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 forDuration:(double)arg4 ;
@end


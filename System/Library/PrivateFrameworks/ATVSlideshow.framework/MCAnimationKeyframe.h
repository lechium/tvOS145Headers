/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCObjectLight.h>

@class MCAnimationPathKeyframed;

@interface MCAnimationKeyframe : MCObjectLight {

	MCAnimationPathKeyframed* mAnimationPath;
	BOOL mIsSnapshot;
	int mTimeOffsetKind;
	float mPreControl;
	float mPostControl;
	double mTimeOffset;

}

@property (assign) MCAnimationPathKeyframed * animationPath; 
@property (assign,nonatomic) double timeOffset; 
@property (assign,nonatomic) int timeOffsetKind; 
@property (assign,nonatomic) float preControl; 
@property (assign,nonatomic) float postControl; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)description;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(BOOL)isSnapshot;
-(void)setTimeOffsetKind:(int)arg1 ;
-(void)setPreControl:(float)arg1 ;
-(void)setPostControl:(float)arg1 ;
-(float)preControl;
-(float)postControl;
-(MCAnimationPathKeyframed *)animationPath;
-(void)setAnimationPath:(MCAnimationPathKeyframed *)arg1 ;
-(void)demolish;
-(int)timeOffsetKind;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MRTransition.h>

@class NSMutableArray, MRImage;

@interface MRTransitionRevolutionsFlip : MRTransition {

	unsigned _numberOfTilesX;
	unsigned _numberOfTilesY;
	unsigned char _direction;
	NSMutableArray* _cubes;
	NSMutableArray* _cubeColumns;
	NSMutableArray* _cubeRows;
	int _flipDirection;
	long long _horizontalCubeCount;
	long long _verticalCubeCount;
	MRImage* _sourceImage;
	MRImage* _destinationImage;
	double _viewBaseWidth;
	double _viewBaseHeight;

}
-(void)cleanup;
-(void)setAttributes:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)releaseByTransitioner:(id)arg1 ;
-(void)setFlipDirection:(int)arg1 ;
-(void)setupCubesWithLocalAspectRatio:(float)arg1 ;
@end


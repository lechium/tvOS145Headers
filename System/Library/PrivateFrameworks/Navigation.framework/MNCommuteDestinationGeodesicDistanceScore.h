/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/MNCommuteDestinationScore.h>
#import <libobjc.A.dylib/MNCommuteDestinationLocationScore.h>

@class NSMutableArray;

@interface MNCommuteDestinationGeodesicDistanceScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore> {

	int _score;
	NSMutableArray* _geodesicDistances;
	double _slope;

}

@property (nonatomic,retain) NSMutableArray * geodesicDistances;              //@synthesize geodesicDistances=_geodesicDistances - In the implementation block
@property (assign,nonatomic) double slope;                                    //@synthesize slope=_slope - In the implementation block
+(double)weight;
-(int)score;
-(void)updateForLocation:(id)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
-(void)_updateScoreAndDestinationInvalid;
-(NSMutableArray *)geodesicDistances;
-(double)slope;
-(void)setSlope:(double)arg1 ;
-(void)setGeodesicDistances:(NSMutableArray *)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/MNCommuteDestinationScore.h>
#import <libobjc.A.dylib/MNCommuteDestinationLocationHistoryScore.h>

@protocol MNCommuteDestinationLocationHistoryScore
@required
-(void)updateLocationHistory:(id)arg1;

@end


@class NSArray;

@interface MNCommuteDestinationLocationHistoryScore : MNCommuteDestinationScore <MNCommuteDestinationLocationHistoryScore> {

	int _score;
	BOOL _destinationInvalid;
	NSArray* _locationHistory;
	double _scoredDistance;
	double _scoredTimeInterval;

}

@property (nonatomic,copy) NSArray * locationHistory;                //@synthesize locationHistory=_locationHistory - In the implementation block
@property (assign,nonatomic) double scoredDistance;                  //@synthesize scoredDistance=_scoredDistance - In the implementation block
@property (assign,nonatomic) double scoredTimeInterval;              //@synthesize scoredTimeInterval=_scoredTimeInterval - In the implementation block
+(double)weight;
-(int)score;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
-(void)updateLocationHistory:(id)arg1 ;
-(double)scoredDistance;
-(double)scoredTimeInterval;
-(void)setLocationHistory:(NSArray *)arg1 ;
-(void)setScoredDistance:(double)arg1 ;
-(void)setScoredTimeInterval:(double)arg1 ;
-(NSArray *)locationHistory;
-(int)_scoreForDistance:(double)arg1 timeInterval:(double)arg2 ;
@end


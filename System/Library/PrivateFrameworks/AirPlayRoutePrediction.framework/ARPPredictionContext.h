/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSDictionary;

@interface ARPPredictionContext : NSObject {

	NSDate* _microLocationEventDate;
	NSDate* _predictionDate;
	NSDictionary* _microLocationProbabilityVector;

}

@property (nonatomic,readonly) NSDictionary * microLocationProbabilityVector;              //@synthesize microLocationProbabilityVector=_microLocationProbabilityVector - In the implementation block
@property (nonatomic,copy,readonly) NSDate * microLocationEventDate;                       //@synthesize microLocationEventDate=_microLocationEventDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * predictionDate;                               //@synthesize predictionDate=_predictionDate - In the implementation block
-(id)description;
-(NSDictionary *)microLocationProbabilityVector;
-(NSDate *)predictionDate;
-(NSDate *)microLocationEventDate;
-(id)initWithPredictionDate:(id)arg1 microLocationEventDate:(id)arg2 microLocationProbabilityVector:(id)arg3 ;
@end


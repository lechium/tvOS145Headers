/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOClientRankingModelFeatureFunction.h>

@interface GEOClientRankingModelFeatureFunctionDiscrete : GEOClientRankingModelFeatureFunction {

	float _valueThresholdLow;
	float _weightLow;
	float _valueThresholdHigh;
	float _weightHigh;

}

@property (nonatomic,readonly) float valueThresholdLow;               //@synthesize valueThresholdLow=_valueThresholdLow - In the implementation block
@property (nonatomic,readonly) float weightLow;                       //@synthesize weightLow=_weightLow - In the implementation block
@property (nonatomic,readonly) float valueThresholdHigh;              //@synthesize valueThresholdHigh=_valueThresholdHigh - In the implementation block
@property (nonatomic,readonly) float weightHigh;                      //@synthesize weightHigh=_weightHigh - In the implementation block
-(id)init;
-(long long)functionType;
-(id)initWithValueThresholdLow:(float)arg1 weightLow:(float)arg2 valueThresholdHigh:(float)arg3 weightHigh:(float)arg4 ;
-(float)valueThresholdLow;
-(float)weightLow;
-(float)valueThresholdHigh;
-(float)weightHigh;
@end

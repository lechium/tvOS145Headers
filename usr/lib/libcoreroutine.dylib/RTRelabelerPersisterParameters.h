/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RTRelabelerPersisterParameters : NSObject {

	unsigned long long _maxCollapseIterations;
	double _placeholderCollapseDistanceThreshold;
	double _reverseGeocodeLeewayDistance;
	double _reverseGeocodePlaceFetchDistanceThreshold;
	double _unconcreteLOICollapseDistanceThreshold;
	double _visitAdjacencyMergeThreshold;

}

@property (nonatomic,readonly) unsigned long long maxCollapseIterations;                      //@synthesize maxCollapseIterations=_maxCollapseIterations - In the implementation block
@property (nonatomic,readonly) double placeholderCollapseDistanceThreshold;                   //@synthesize placeholderCollapseDistanceThreshold=_placeholderCollapseDistanceThreshold - In the implementation block
@property (nonatomic,readonly) double reverseGeocodeLeewayDistance;                           //@synthesize reverseGeocodeLeewayDistance=_reverseGeocodeLeewayDistance - In the implementation block
@property (nonatomic,readonly) double reverseGeocodePlaceFetchDistanceThreshold;              //@synthesize reverseGeocodePlaceFetchDistanceThreshold=_reverseGeocodePlaceFetchDistanceThreshold - In the implementation block
@property (nonatomic,readonly) double unconcreteLOICollapseDistanceThreshold;                 //@synthesize unconcreteLOICollapseDistanceThreshold=_unconcreteLOICollapseDistanceThreshold - In the implementation block
@property (nonatomic,readonly) double visitAdjacencyMergeThreshold;                           //@synthesize visitAdjacencyMergeThreshold=_visitAdjacencyMergeThreshold - In the implementation block
-(id)description;
-(id)init;
-(id)initWithDefaultsManager:(id)arg1 ;
-(id)initWithMaxCollapseIterations:(unsigned long long)arg1 placeholderCollapseDistanceThreshold:(double)arg2 reverseGeocodeLeewayDistance:(double)arg3 reverseGeocodePlaceFetchDistanceThreshold:(double)arg4 unconcreteLOICollapseDistanceThreshold:(double)arg5 visitAdjacencyMergeThreshold:(double)arg6 ;
-(unsigned long long)maxCollapseIterations;
-(double)placeholderCollapseDistanceThreshold;
-(double)reverseGeocodeLeewayDistance;
-(double)reverseGeocodePlaceFetchDistanceThreshold;
-(double)unconcreteLOICollapseDistanceThreshold;
-(double)visitAdjacencyMergeThreshold;
@end


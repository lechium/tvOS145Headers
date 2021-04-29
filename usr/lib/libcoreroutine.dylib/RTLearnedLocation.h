/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTLocation;

@interface RTLearnedLocation : NSObject {

	RTLocation* _location;
	unsigned long long _dataPointCount;
	double _confidence;

}

@property (nonatomic,readonly) RTLocation * location;                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long dataPointCount;              //@synthesize dataPointCount=_dataPointCount - In the implementation block
@property (nonatomic,readonly) double confidence;                              //@synthesize confidence=_confidence - In the implementation block
+(double)confidenceFromDataPointCount:(unsigned long long)arg1 ;
+(id)shiftLocation:(id)arg1 shifter:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(double)confidence;
-(RTLocation *)location;
-(id)initWithMapItem:(id)arg1 ;
-(unsigned long long)dataPointCount;
-(id)initWithLocation:(id)arg1 dataPointCount:(unsigned long long)arg2 confidence:(double)arg3 ;
-(id)initWithLocation:(id)arg1 dataPointCount:(unsigned long long)arg2 ;
-(id)initWithLearnedLocations:(id)arg1 ;
-(id)initWithLocationOfInterest:(id)arg1 ;
-(void)calculateAltitude:(double*)arg1 verticalUncertainty:(double*)arg2 learnedLocations:(id)arg3 ;
@end


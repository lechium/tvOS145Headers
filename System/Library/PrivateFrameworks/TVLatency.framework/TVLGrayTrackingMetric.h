/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, TVLDisplayTuningParams;

@interface TVLGrayTrackingMetric : NSObject {

	NSArray* _metricErrors;
	TVLDisplayTuningParams* _params;
	NSArray* _inputs;

}

@property (nonatomic,readonly) TVLDisplayTuningParams * params;              //@synthesize params=_params - In the implementation block
@property (nonatomic,readonly) NSArray * inputs;                             //@synthesize inputs=_inputs - In the implementation block
@property (nonatomic,readonly) BOOL meetsCriteria; 
@property (nonatomic,readonly) NSArray * metricErrors;                       //@synthesize metricErrors=_metricErrors - In the implementation block
-(id)dictionaryRepresentation;
-(TVLDisplayTuningParams *)params;
-(NSArray *)inputs;
-(id)initWithGrayLevels:(id)arg1 parameters:(id)arg2 ;
-(NSArray *)metricErrors;
-(BOOL)meetsCriteria;
-(void)_computeMetric:(id)arg1 parameters:(id)arg2 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary;

@interface _PSFeatureStatistics : NSObject {

	NSMutableArray* _list;
	double _min;
	double _max;
	double _avg;
	double _stdev;
	double _mode;
	NSMutableDictionary* _percentiles;

}

@property (nonatomic,retain) NSMutableArray * list;                          //@synthesize list=_list - In the implementation block
@property (assign) double min;                                               //@synthesize min=_min - In the implementation block
@property (assign) double max;                                               //@synthesize max=_max - In the implementation block
@property (assign) double avg;                                               //@synthesize avg=_avg - In the implementation block
@property (assign) double stdev;                                             //@synthesize stdev=_stdev - In the implementation block
@property (assign) double mode;                                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * percentiles;              //@synthesize percentiles=_percentiles - In the implementation block
-(void)setMode:(double)arg1 ;
-(void)setMax:(double)arg1 ;
-(double)max;
-(double)mode;
-(NSMutableArray *)list;
-(double)min;
-(void)addValue:(id)arg1 ;
-(void)setMin:(double)arg1 ;
-(double)avg;
-(void)setAvg:(double)arg1 ;
-(void)setList:(NSMutableArray *)arg1 ;
-(void)calculateStats;
-(void)setStdev:(double)arg1 ;
-(double)stdev;
-(id)initWithList:(id)arg1 ;
-(void)setPercentiles:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)percentiles;
@end


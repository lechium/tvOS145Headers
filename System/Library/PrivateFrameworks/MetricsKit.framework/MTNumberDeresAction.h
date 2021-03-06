/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTTreatmentAction.h>

@class NSArray;

@interface MTNumberDeresAction : MTTreatmentAction {

	double _precision;
	NSArray* _buckets;

}

@property (assign,nonatomic) double precision;               //@synthesize precision=_precision - In the implementation block
@property (nonatomic,retain) NSArray * buckets;              //@synthesize buckets=_buckets - In the implementation block
-(double)precision;
-(NSArray *)buckets;
-(void)setBuckets:(NSArray *)arg1 ;
-(void)setPrecision:(double)arg1 ;
-(id)initWithField:(id)arg1 configDictionary:(id)arg2 ;
-(id)performAction:(id)arg1 context:(id)arg2 ;
@end


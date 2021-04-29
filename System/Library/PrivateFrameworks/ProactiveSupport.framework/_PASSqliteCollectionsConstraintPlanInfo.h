/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _PASSqliteCollectionsConstraintPlanInfo : NSObject {

	BOOL _unique;
	BOOL _omit;
	double _estimatedRows;
	double _estimatedCost;

}

@property (assign,nonatomic) double estimatedRows;              //@synthesize estimatedRows=_estimatedRows - In the implementation block
@property (assign,nonatomic) double estimatedCost;              //@synthesize estimatedCost=_estimatedCost - In the implementation block
@property (assign,nonatomic) BOOL unique;                       //@synthesize unique=_unique - In the implementation block
@property (assign,nonatomic) BOOL omit;                         //@synthesize omit=_omit - In the implementation block
-(void)setUnique:(BOOL)arg1 ;
-(BOOL)unique;
-(double)estimatedRows;
-(double)estimatedCost;
-(BOOL)omit;
-(id)initWithEstimatedRows:(double)arg1 estimatedCost:(double)arg2 unique:(BOOL)arg3 omit:(BOOL)arg4 ;
-(void)setEstimatedRows:(double)arg1 ;
-(void)setEstimatedCost:(double)arg1 ;
-(void)setOmit:(BOOL)arg1 ;
@end


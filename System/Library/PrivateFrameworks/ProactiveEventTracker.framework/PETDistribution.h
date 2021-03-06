/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PETDistribution : PBCodable <NSCopying> {

	double _max;
	double _mean;
	double _min;
	double _variance;
	SCD_Struct_PE2 _has;

}

@property (assign,nonatomic) BOOL hasMin; 
@property (assign,nonatomic) double min;                    //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) BOOL hasMax; 
@property (assign,nonatomic) double max;                    //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) BOOL hasMean; 
@property (assign,nonatomic) double mean;                   //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) BOOL hasVariance; 
@property (assign,nonatomic) double variance;               //@synthesize variance=_variance - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setMax:(double)arg1 ;
-(double)max;
-(double)min;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasMax:(BOOL)arg1 ;
-(BOOL)hasMax;
-(double)mean;
-(void)setMean:(double)arg1 ;
-(double)variance;
-(void)setMin:(double)arg1 ;
-(void)setHasMin:(BOOL)arg1 ;
-(BOOL)hasMin;
-(void)setHasMean:(BOOL)arg1 ;
-(BOOL)hasMean;
-(void)setVariance:(double)arg1 ;
-(void)setHasVariance:(BOOL)arg1 ;
-(BOOL)hasVariance;
@end


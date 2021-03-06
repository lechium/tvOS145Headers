/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2LocationsScored : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	NSString* _bundleId;
	unsigned _resultSizeLog10;
	BOOL _error;
	BOOL _exclusionSpec;
	BOOL _limitHit;
	BOOL _timeLimited;
	BOOL _timeSpec;
	SCD_Struct_PP5 _has;

}

@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                      //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasResultSizeLog10; 
@property (assign,nonatomic) unsigned resultSizeLog10;                 //@synthesize resultSizeLog10=_resultSizeLog10 - In the implementation block
@property (assign,nonatomic) BOOL hasLimitHit; 
@property (assign,nonatomic) BOOL limitHit;                            //@synthesize limitHit=_limitHit - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSpec; 
@property (assign,nonatomic) BOOL timeSpec;                            //@synthesize timeSpec=_timeSpec - In the implementation block
@property (assign,nonatomic) BOOL hasTimeLimited; 
@property (assign,nonatomic) BOOL timeLimited;                         //@synthesize timeLimited=_timeLimited - In the implementation block
@property (assign,nonatomic) BOOL hasExclusionSpec; 
@property (assign,nonatomic) BOOL exclusionSpec;                       //@synthesize exclusionSpec=_exclusionSpec - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) BOOL error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)error;
-(void)setError:(BOOL)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasError;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(BOOL)hasBundleId;
-(BOOL)hasActiveTreatments;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(void)setResultSizeLog10:(unsigned)arg1 ;
-(void)setHasResultSizeLog10:(BOOL)arg1 ;
-(BOOL)hasResultSizeLog10;
-(void)setLimitHit:(BOOL)arg1 ;
-(void)setHasLimitHit:(BOOL)arg1 ;
-(BOOL)hasLimitHit;
-(void)setTimeSpec:(BOOL)arg1 ;
-(void)setHasTimeSpec:(BOOL)arg1 ;
-(BOOL)hasTimeSpec;
-(void)setTimeLimited:(BOOL)arg1 ;
-(void)setHasTimeLimited:(BOOL)arg1 ;
-(BOOL)hasTimeLimited;
-(void)setExclusionSpec:(BOOL)arg1 ;
-(void)setHasExclusionSpec:(BOOL)arg1 ;
-(BOOL)hasExclusionSpec;
-(unsigned)resultSizeLog10;
-(BOOL)limitHit;
-(BOOL)timeSpec;
-(BOOL)timeLimited;
-(BOOL)exclusionSpec;
@end


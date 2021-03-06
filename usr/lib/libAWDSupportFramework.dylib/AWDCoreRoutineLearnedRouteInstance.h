/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineLearnedRouteInstance : PBCodable <NSCopying> {

	SCD_Struct_AW15* _majorGapLengths;
	unsigned long long _timestamp;
	int _failureReason;
	int _latitudeTruncated;
	int _length;
	NSMutableArray* _locationTypeHistograms;
	int _longitudeTruncated;
	int _numberOfFilteredLocations;
	int _numberOfInputLocations;
	int _recoveryTime;
	NSMutableArray* _roadClassHistograms;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfInputLocations; 
@property (assign,nonatomic) int numberOfInputLocations;                             //@synthesize numberOfInputLocations=_numberOfInputLocations - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfFilteredLocations; 
@property (assign,nonatomic) int numberOfFilteredLocations;                          //@synthesize numberOfFilteredLocations=_numberOfFilteredLocations - In the implementation block
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) int length;                                             //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasRecoveryTime; 
@property (assign,nonatomic) int recoveryTime;                                       //@synthesize recoveryTime=_recoveryTime - In the implementation block
@property (assign,nonatomic) BOOL hasFailureReason; 
@property (assign,nonatomic) int failureReason;                                      //@synthesize failureReason=_failureReason - In the implementation block
@property (assign,nonatomic) BOOL hasLatitudeTruncated; 
@property (assign,nonatomic) int latitudeTruncated;                                  //@synthesize latitudeTruncated=_latitudeTruncated - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeTruncated; 
@property (assign,nonatomic) int longitudeTruncated;                                 //@synthesize longitudeTruncated=_longitudeTruncated - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadClassHistograms;                   //@synthesize roadClassHistograms=_roadClassHistograms - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationTypeHistograms;                //@synthesize locationTypeHistograms=_locationTypeHistograms - In the implementation block
@property (nonatomic,readonly) unsigned long long majorGapLengthsCount; 
@property (nonatomic,readonly) int* majorGapLengths; 
+(Class)roadClassHistogramType;
+(Class)locationTypeHistogramType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(int)length;
-(void)setLength:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setRoadClassHistograms:(NSMutableArray *)arg1 ;
-(void)setLocationTypeHistograms:(NSMutableArray *)arg1 ;
-(void)addRoadClassHistogram:(id)arg1 ;
-(void)addLocationTypeHistogram:(id)arg1 ;
-(unsigned long long)roadClassHistogramsCount;
-(void)clearRoadClassHistograms;
-(id)roadClassHistogramAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)locationTypeHistogramsCount;
-(void)clearLocationTypeHistograms;
-(id)locationTypeHistogramAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)majorGapLengthsCount;
-(void)clearMajorGapLengths;
-(int)majorGapLengthAtIndex:(unsigned long long)arg1 ;
-(void)addMajorGapLength:(int)arg1 ;
-(void)setNumberOfInputLocations:(int)arg1 ;
-(void)setHasNumberOfInputLocations:(BOOL)arg1 ;
-(BOOL)hasNumberOfInputLocations;
-(void)setNumberOfFilteredLocations:(int)arg1 ;
-(void)setHasNumberOfFilteredLocations:(BOOL)arg1 ;
-(BOOL)hasNumberOfFilteredLocations;
-(void)setHasLength:(BOOL)arg1 ;
-(BOOL)hasLength;
-(void)setRecoveryTime:(int)arg1 ;
-(void)setHasRecoveryTime:(BOOL)arg1 ;
-(BOOL)hasRecoveryTime;
-(void)setFailureReason:(int)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(BOOL)hasFailureReason;
-(void)setLatitudeTruncated:(int)arg1 ;
-(void)setHasLatitudeTruncated:(BOOL)arg1 ;
-(BOOL)hasLatitudeTruncated;
-(void)setLongitudeTruncated:(int)arg1 ;
-(void)setHasLongitudeTruncated:(BOOL)arg1 ;
-(BOOL)hasLongitudeTruncated;
-(int*)majorGapLengths;
-(void)setMajorGapLengths:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)numberOfInputLocations;
-(int)numberOfFilteredLocations;
-(int)recoveryTime;
-(int)failureReason;
-(int)latitudeTruncated;
-(int)longitudeTruncated;
-(NSMutableArray *)roadClassHistograms;
-(NSMutableArray *)locationTypeHistograms;
@end


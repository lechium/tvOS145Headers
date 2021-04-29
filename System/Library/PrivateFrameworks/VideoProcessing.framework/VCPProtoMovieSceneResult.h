/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoTimeRange;

@interface VCPProtoMovieSceneResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _distanceToPreviousScene;
	float _flickerScore;
	float _qualityScore;
	float _sceneprintDistanceToPreviousScene;
	VCPProtoTimeRange* _timeRange;
	SCD_Struct_VC50 _has;

}

@property (nonatomic,retain) VCPProtoTimeRange * timeRange;                          //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) float qualityScore;                                     //@synthesize qualityScore=_qualityScore - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToPreviousScene; 
@property (assign,nonatomic) float distanceToPreviousScene;                          //@synthesize distanceToPreviousScene=_distanceToPreviousScene - In the implementation block
@property (assign,nonatomic) BOOL hasFlickerScore; 
@property (assign,nonatomic) float flickerScore;                                     //@synthesize flickerScore=_flickerScore - In the implementation block
@property (assign,nonatomic) BOOL hasSceneprintDistanceToPreviousScene; 
@property (assign,nonatomic) float sceneprintDistanceToPreviousScene;                //@synthesize sceneprintDistanceToPreviousScene=_sceneprintDistanceToPreviousScene - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(float)qualityScore;
-(void)setQualityScore:(float)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setDistanceToPreviousScene:(float)arg1 ;
-(void)setHasDistanceToPreviousScene:(BOOL)arg1 ;
-(BOOL)hasDistanceToPreviousScene;
-(void)setFlickerScore:(float)arg1 ;
-(void)setHasFlickerScore:(BOOL)arg1 ;
-(BOOL)hasFlickerScore;
-(void)setSceneprintDistanceToPreviousScene:(float)arg1 ;
-(void)setHasSceneprintDistanceToPreviousScene:(BOOL)arg1 ;
-(BOOL)hasSceneprintDistanceToPreviousScene;
-(float)distanceToPreviousScene;
-(float)flickerScore;
-(float)sceneprintDistanceToPreviousScene;
@end


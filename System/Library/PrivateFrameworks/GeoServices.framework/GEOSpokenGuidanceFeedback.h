/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTrafficCameraInformation;

@interface GEOSpokenGuidanceFeedback : PBCodable <NSCopying> {

	GEOTrafficCameraInformation* _trafficCameraGuidanceFeedback;
	int _spokenGuidanceIndex;
	BOOL _shortPrompt;
	SCD_Struct_GE114 _flags;

}

@property (assign,nonatomic) BOOL hasSpokenGuidanceIndex; 
@property (assign,nonatomic) int spokenGuidanceIndex; 
@property (assign,nonatomic) BOOL hasShortPrompt; 
@property (assign,nonatomic) BOOL shortPrompt; 
@property (nonatomic,readonly) BOOL hasTrafficCameraGuidanceFeedback; 
@property (nonatomic,retain) GEOTrafficCameraInformation * trafficCameraGuidanceFeedback; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEOTrafficCameraInformation *)trafficCameraGuidanceFeedback;
-(void)setTrafficCameraGuidanceFeedback:(GEOTrafficCameraInformation *)arg1 ;
-(BOOL)hasTrafficCameraGuidanceFeedback;
-(void)setSpokenGuidanceIndex:(int)arg1 ;
-(void)setShortPrompt:(BOOL)arg1 ;
-(int)spokenGuidanceIndex;
-(void)setHasSpokenGuidanceIndex:(BOOL)arg1 ;
-(BOOL)hasSpokenGuidanceIndex;
-(BOOL)shortPrompt;
-(void)setHasShortPrompt:(BOOL)arg1 ;
-(BOOL)hasShortPrompt;
@end

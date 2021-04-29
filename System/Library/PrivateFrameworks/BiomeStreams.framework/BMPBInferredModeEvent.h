/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BMPBInferredModeEvent : PBCodable <NSCopying> {

	double _absoluteTimestamp;
	NSString* _modeIdentifier;
	int _origin;
	NSString* _originBundleId;
	NSString* _uuid;
	BOOL _isAutomationEnabled;
	BOOL _isStart;
	SCD_Struct_BM7 _has;

}

@property (assign,nonatomic) BOOL hasAbsoluteTimestamp; 
@property (assign,nonatomic) double absoluteTimestamp;                 //@synthesize absoluteTimestamp=_absoluteTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasModeIdentifier; 
@property (nonatomic,retain) NSString * modeIdentifier;                //@synthesize modeIdentifier=_modeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin;                               //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginBundleId; 
@property (nonatomic,retain) NSString * originBundleId;                //@synthesize originBundleId=_originBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasIsAutomationEnabled; 
@property (assign,nonatomic) BOOL isAutomationEnabled;                 //@synthesize isAutomationEnabled=_isAutomationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsStart; 
@property (assign,nonatomic) BOOL isStart;                             //@synthesize isStart=_isStart - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)uuid;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)hasUuid;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(double)absoluteTimestamp;
-(void)setAbsoluteTimestamp:(double)arg1 ;
-(void)setHasOrigin:(BOOL)arg1 ;
-(BOOL)hasOrigin;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(BOOL)isStart;
-(void)setIsStart:(BOOL)arg1 ;
-(NSString *)modeIdentifier;
-(void)setHasAbsoluteTimestamp:(BOOL)arg1 ;
-(BOOL)hasAbsoluteTimestamp;
-(void)setHasIsStart:(BOOL)arg1 ;
-(BOOL)hasIsStart;
-(NSString *)originBundleId;
-(BOOL)isAutomationEnabled;
-(void)setModeIdentifier:(NSString *)arg1 ;
-(void)setOriginBundleId:(NSString *)arg1 ;
-(void)setIsAutomationEnabled:(BOOL)arg1 ;
-(BOOL)hasModeIdentifier;
-(BOOL)hasOriginBundleId;
-(void)setHasIsAutomationEnabled:(BOOL)arg1 ;
-(BOOL)hasIsAutomationEnabled;
@end

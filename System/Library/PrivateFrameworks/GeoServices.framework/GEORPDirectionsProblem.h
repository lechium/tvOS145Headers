/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData, GEORPUserSearchInput;

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _clientSuggestedRoutes;
	NSData* _directionsResponseId;
	GEORPUserSearchInput* _endWaypoint;
	NSMutableArray* _instructionCorrections;
	NSData* _overviewScreenshotImageData;
	NSMutableArray* _problematicRouteIndexs;
	GEORPUserSearchInput* _startWaypoint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _problematicLineIndex;
	unsigned _problematicStepIndex;
	struct {
		unsigned has_problematicLineIndex : 1;
		unsigned has_problematicStepIndex : 1;
		unsigned read_clientSuggestedRoutes : 1;
		unsigned read_directionsResponseId : 1;
		unsigned read_endWaypoint : 1;
		unsigned read_instructionCorrections : 1;
		unsigned read_overviewScreenshotImageData : 1;
		unsigned read_problematicRouteIndexs : 1;
		unsigned read_startWaypoint : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponseId; 
@property (nonatomic,retain) NSData * directionsResponseId; 
@property (nonatomic,readonly) BOOL hasOverviewScreenshotImageData; 
@property (nonatomic,retain) NSData * overviewScreenshotImageData; 
@property (assign,nonatomic) BOOL hasProblematicStepIndex; 
@property (assign,nonatomic) unsigned problematicStepIndex; 
@property (nonatomic,retain) NSMutableArray * clientSuggestedRoutes; 
@property (nonatomic,retain) NSMutableArray * problematicRouteIndexs; 
@property (assign,nonatomic) BOOL hasProblematicLineIndex; 
@property (assign,nonatomic) unsigned problematicLineIndex; 
@property (nonatomic,readonly) BOOL hasStartWaypoint; 
@property (nonatomic,retain) GEORPUserSearchInput * startWaypoint; 
@property (nonatomic,readonly) BOOL hasEndWaypoint; 
@property (nonatomic,retain) GEORPUserSearchInput * endWaypoint; 
@property (nonatomic,retain) NSMutableArray * instructionCorrections; 
+(BOOL)isValid:(id)arg1 ;
+(Class)problematicRouteIndexType;
+(Class)instructionCorrectionType;
+(Class)clientSuggestedRouteType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)directionsResponseId;
-(void)setDirectionsResponseId:(NSData *)arg1 ;
-(BOOL)hasDirectionsResponseId;
-(void)addProblematicRouteIndex:(id)arg1 ;
-(void)addInstructionCorrection:(id)arg1 ;
-(unsigned long long)problematicRouteIndexsCount;
-(void)clearProblematicRouteIndexs;
-(id)problematicRouteIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)instructionCorrectionsCount;
-(void)clearInstructionCorrections;
-(id)instructionCorrectionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)problematicRouteIndexs;
-(void)setProblematicRouteIndexs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)instructionCorrections;
-(void)setInstructionCorrections:(NSMutableArray *)arg1 ;
-(GEORPUserSearchInput *)startWaypoint;
-(GEORPUserSearchInput *)endWaypoint;
-(void)setStartWaypoint:(GEORPUserSearchInput *)arg1 ;
-(void)setEndWaypoint:(GEORPUserSearchInput *)arg1 ;
-(BOOL)hasStartWaypoint;
-(BOOL)hasEndWaypoint;
-(NSData *)overviewScreenshotImageData;
-(void)setOverviewScreenshotImageData:(NSData *)arg1 ;
-(void)setProblematicStepIndex:(unsigned)arg1 ;
-(void)addClientSuggestedRoute:(id)arg1 ;
-(void)setProblematicLineIndex:(unsigned)arg1 ;
-(unsigned long long)clientSuggestedRoutesCount;
-(void)clearClientSuggestedRoutes;
-(id)clientSuggestedRouteAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOverviewScreenshotImageData;
-(unsigned)problematicStepIndex;
-(void)setHasProblematicStepIndex:(BOOL)arg1 ;
-(BOOL)hasProblematicStepIndex;
-(NSMutableArray *)clientSuggestedRoutes;
-(void)setClientSuggestedRoutes:(NSMutableArray *)arg1 ;
-(unsigned)problematicLineIndex;
-(void)setHasProblematicLineIndex:(BOOL)arg1 ;
-(BOOL)hasProblematicLineIndex;
@end


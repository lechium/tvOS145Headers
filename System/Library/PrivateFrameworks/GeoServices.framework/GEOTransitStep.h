/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionCompatibility.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOTransitArrivalInfo, GEOTransitBaseFare, NSMutableArray, GEOInstructionSet, GEOLatLng, GEOTransitScheduleInfo, GEOTransitSurcharge, NSData, GEOTransitVehiclePositionInfo, NSString;

@interface GEOTransitStep : PBCodable <GEOCompanionCompatibility, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _routeDetailsPrimaryArtworkIndexs;
	SCD_Struct_GE17* _steppingArtworkIndexs;
	GEOTransitArrivalInfo* _arrivalInfo;
	GEOTransitBaseFare* _baseFare;
	NSMutableArray* _enterExitInfos;
	GEOInstructionSet* _instructions;
	GEOLatLng* _location;
	GEOTransitScheduleInfo* _scheduleInfo;
	GEOTransitSurcharge* _surcharge;
	NSMutableArray* _transferInfos;
	NSData* _updateIdentifier;
	NSMutableArray* _vehicleInfos;
	GEOTransitVehiclePositionInfo* _vehiclePositionInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _accessPointZilchIndex;
	unsigned _defaultVehicleInfoIndex;
	unsigned _departureFrequency;
	unsigned _distanceInMeters;
	unsigned _endingStopIndex;
	unsigned _listTransitIncidentMessageIndex;
	int _maneuverType;
	unsigned _routeDetailsSecondaryArtworkIndex;
	int _significanceForEndNode;
	unsigned _startingStopIndex;
	unsigned _startingTime;
	unsigned _steppingTransitIncidentMessageIndex;
	unsigned _walkingIndex;
	unsigned _zilchIndex;
	BOOL _prioritizeTilesPreloading;
	struct {
		unsigned has_accessPointZilchIndex : 1;
		unsigned has_defaultVehicleInfoIndex : 1;
		unsigned has_departureFrequency : 1;
		unsigned has_distanceInMeters : 1;
		unsigned has_endingStopIndex : 1;
		unsigned has_listTransitIncidentMessageIndex : 1;
		unsigned has_maneuverType : 1;
		unsigned has_routeDetailsSecondaryArtworkIndex : 1;
		unsigned has_significanceForEndNode : 1;
		unsigned has_startingStopIndex : 1;
		unsigned has_startingTime : 1;
		unsigned has_steppingTransitIncidentMessageIndex : 1;
		unsigned has_walkingIndex : 1;
		unsigned has_zilchIndex : 1;
		unsigned has_prioritizeTilesPreloading : 1;
		unsigned read_unknownFields : 1;
		unsigned read_routeDetailsPrimaryArtworkIndexs : 1;
		unsigned read_steppingArtworkIndexs : 1;
		unsigned read_arrivalInfo : 1;
		unsigned read_baseFare : 1;
		unsigned read_enterExitInfos : 1;
		unsigned read_instructions : 1;
		unsigned read_location : 1;
		unsigned read_scheduleInfo : 1;
		unsigned read_surcharge : 1;
		unsigned read_transferInfos : 1;
		unsigned read_updateIdentifier : 1;
		unsigned read_vehicleInfos : 1;
		unsigned read_vehiclePositionInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<GEOTransitVehicleEntries> vehicleEntries; 
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (assign,nonatomic) BOOL hasStartingStopIndex; 
@property (assign,nonatomic) unsigned startingStopIndex; 
@property (assign,nonatomic) BOOL hasEndingStopIndex; 
@property (assign,nonatomic) unsigned endingStopIndex; 
@property (nonatomic,retain) NSMutableArray * vehicleInfos; 
@property (nonatomic,retain) NSMutableArray * enterExitInfos; 
@property (assign,nonatomic) BOOL hasPrioritizeTilesPreloading; 
@property (assign,nonatomic) BOOL prioritizeTilesPreloading; 
@property (assign,nonatomic) BOOL hasWalkingIndex; 
@property (assign,nonatomic) unsigned walkingIndex; 
@property (nonatomic,retain) NSMutableArray * transferInfos; 
@property (assign,nonatomic) BOOL hasStartingTime; 
@property (assign,nonatomic) unsigned startingTime; 
@property (nonatomic,readonly) BOOL hasArrivalInfo; 
@property (nonatomic,retain) GEOTransitArrivalInfo * arrivalInfo; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (assign,nonatomic) BOOL hasSignificanceForEndNode; 
@property (assign,nonatomic) int significanceForEndNode; 
@property (nonatomic,readonly) BOOL hasInstructions; 
@property (nonatomic,retain) GEOInstructionSet * instructions; 
@property (assign,nonatomic) BOOL hasZilchIndex; 
@property (assign,nonatomic) unsigned zilchIndex; 
@property (assign,nonatomic) BOOL hasDistanceInMeters; 
@property (assign,nonatomic) unsigned distanceInMeters; 
@property (nonatomic,readonly) unsigned long long routeDetailsPrimaryArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* routeDetailsPrimaryArtworkIndexs; 
@property (nonatomic,readonly) unsigned long long steppingArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* steppingArtworkIndexs; 
@property (assign,nonatomic) BOOL hasRouteDetailsSecondaryArtworkIndex; 
@property (assign,nonatomic) unsigned routeDetailsSecondaryArtworkIndex; 
@property (assign,nonatomic) BOOL hasAccessPointZilchIndex; 
@property (assign,nonatomic) unsigned accessPointZilchIndex; 
@property (assign,nonatomic) BOOL hasDefaultVehicleInfoIndex; 
@property (assign,nonatomic) unsigned defaultVehicleInfoIndex; 
@property (assign,nonatomic) BOOL hasDepartureFrequency; 
@property (assign,nonatomic) unsigned departureFrequency; 
@property (assign,nonatomic) BOOL hasSteppingTransitIncidentMessageIndex; 
@property (assign,nonatomic) unsigned steppingTransitIncidentMessageIndex; 
@property (assign,nonatomic) BOOL hasListTransitIncidentMessageIndex; 
@property (assign,nonatomic) unsigned listTransitIncidentMessageIndex; 
@property (nonatomic,readonly) BOOL hasBaseFare; 
@property (nonatomic,retain) GEOTransitBaseFare * baseFare; 
@property (nonatomic,readonly) BOOL hasSurcharge; 
@property (nonatomic,retain) GEOTransitSurcharge * surcharge; 
@property (nonatomic,readonly) BOOL hasUpdateIdentifier; 
@property (nonatomic,retain) NSData * updateIdentifier; 
@property (nonatomic,readonly) BOOL hasVehiclePositionInfo; 
@property (nonatomic,retain) GEOTransitVehiclePositionInfo * vehiclePositionInfo; 
@property (nonatomic,readonly) BOOL hasScheduleInfo; 
@property (nonatomic,retain) GEOTransitScheduleInfo * scheduleInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)vehicleInfoType;
+(Class)enterExitInfoType;
+(Class)transferInfoType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOLatLng *)location;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(BOOL)hasLocation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSData *)updateIdentifier;
-(GEOInstructionSet *)instructions;
-(GEOTransitVehiclePositionInfo *)vehiclePositionInfo;
-(GEOTransitScheduleInfo *)scheduleInfo;
-(void)setUpdateIdentifier:(NSData *)arg1 ;
-(void)setInstructions:(GEOInstructionSet *)arg1 ;
-(void)setVehiclePositionInfo:(GEOTransitVehiclePositionInfo *)arg1 ;
-(void)setScheduleInfo:(GEOTransitScheduleInfo *)arg1 ;
-(BOOL)hasUpdateIdentifier;
-(BOOL)hasInstructions;
-(BOOL)hasVehiclePositionInfo;
-(BOOL)hasScheduleInfo;
-(int)maneuverType;
-(BOOL)hasStartingStopIndex;
-(unsigned)startingStopIndex;
-(BOOL)hasEndingStopIndex;
-(unsigned)endingStopIndex;
-(GEOTransitArrivalInfo *)arrivalInfo;
-(GEOTransitBaseFare *)baseFare;
-(GEOTransitSurcharge *)surcharge;
-(void)setManeuverType:(int)arg1 ;
-(void)setStartingStopIndex:(unsigned)arg1 ;
-(void)setEndingStopIndex:(unsigned)arg1 ;
-(void)addVehicleInfo:(id)arg1 ;
-(void)addEnterExitInfo:(id)arg1 ;
-(void)setPrioritizeTilesPreloading:(BOOL)arg1 ;
-(void)setWalkingIndex:(unsigned)arg1 ;
-(void)addTransferInfo:(id)arg1 ;
-(void)setStartingTime:(unsigned)arg1 ;
-(void)setArrivalInfo:(GEOTransitArrivalInfo *)arg1 ;
-(void)setSignificanceForEndNode:(int)arg1 ;
-(void)setZilchIndex:(unsigned)arg1 ;
-(void)setDistanceInMeters:(unsigned)arg1 ;
-(void)addRouteDetailsPrimaryArtworkIndex:(unsigned)arg1 ;
-(void)addSteppingArtworkIndex:(unsigned)arg1 ;
-(void)setRouteDetailsSecondaryArtworkIndex:(unsigned)arg1 ;
-(void)setAccessPointZilchIndex:(unsigned)arg1 ;
-(void)setDefaultVehicleInfoIndex:(unsigned)arg1 ;
-(void)setDepartureFrequency:(unsigned)arg1 ;
-(void)setSteppingTransitIncidentMessageIndex:(unsigned)arg1 ;
-(void)setListTransitIncidentMessageIndex:(unsigned)arg1 ;
-(void)setBaseFare:(GEOTransitBaseFare *)arg1 ;
-(void)setSurcharge:(GEOTransitSurcharge *)arg1 ;
-(unsigned long long)vehicleInfosCount;
-(void)clearVehicleInfos;
-(id)vehicleInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)enterExitInfosCount;
-(void)clearEnterExitInfos;
-(id)enterExitInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transferInfosCount;
-(void)clearTransferInfos;
-(id)transferInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)routeDetailsPrimaryArtworkIndexsCount;
-(void)clearRouteDetailsPrimaryArtworkIndexs;
-(unsigned)routeDetailsPrimaryArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)steppingArtworkIndexsCount;
-(void)clearSteppingArtworkIndexs;
-(unsigned)steppingArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(BOOL)hasManeuverType;
-(id)maneuverTypeAsString:(int)arg1 ;
-(int)StringAsManeuverType:(id)arg1 ;
-(void)setHasStartingStopIndex:(BOOL)arg1 ;
-(void)setHasEndingStopIndex:(BOOL)arg1 ;
-(NSMutableArray *)vehicleInfos;
-(void)setVehicleInfos:(NSMutableArray *)arg1 ;
-(NSMutableArray *)enterExitInfos;
-(void)setEnterExitInfos:(NSMutableArray *)arg1 ;
-(BOOL)prioritizeTilesPreloading;
-(void)setHasPrioritizeTilesPreloading:(BOOL)arg1 ;
-(BOOL)hasPrioritizeTilesPreloading;
-(unsigned)walkingIndex;
-(void)setHasWalkingIndex:(BOOL)arg1 ;
-(BOOL)hasWalkingIndex;
-(NSMutableArray *)transferInfos;
-(void)setTransferInfos:(NSMutableArray *)arg1 ;
-(unsigned)startingTime;
-(void)setHasStartingTime:(BOOL)arg1 ;
-(BOOL)hasStartingTime;
-(BOOL)hasArrivalInfo;
-(int)significanceForEndNode;
-(void)setHasSignificanceForEndNode:(BOOL)arg1 ;
-(BOOL)hasSignificanceForEndNode;
-(id)significanceForEndNodeAsString:(int)arg1 ;
-(int)StringAsSignificanceForEndNode:(id)arg1 ;
-(unsigned)zilchIndex;
-(void)setHasZilchIndex:(BOOL)arg1 ;
-(BOOL)hasZilchIndex;
-(unsigned)distanceInMeters;
-(void)setHasDistanceInMeters:(BOOL)arg1 ;
-(BOOL)hasDistanceInMeters;
-(unsigned*)routeDetailsPrimaryArtworkIndexs;
-(void)setRouteDetailsPrimaryArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)steppingArtworkIndexs;
-(void)setSteppingArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)routeDetailsSecondaryArtworkIndex;
-(void)setHasRouteDetailsSecondaryArtworkIndex:(BOOL)arg1 ;
-(BOOL)hasRouteDetailsSecondaryArtworkIndex;
-(unsigned)accessPointZilchIndex;
-(void)setHasAccessPointZilchIndex:(BOOL)arg1 ;
-(BOOL)hasAccessPointZilchIndex;
-(unsigned)defaultVehicleInfoIndex;
-(void)setHasDefaultVehicleInfoIndex:(BOOL)arg1 ;
-(BOOL)hasDefaultVehicleInfoIndex;
-(unsigned)departureFrequency;
-(void)setHasDepartureFrequency:(BOOL)arg1 ;
-(BOOL)hasDepartureFrequency;
-(unsigned)steppingTransitIncidentMessageIndex;
-(void)setHasSteppingTransitIncidentMessageIndex:(BOOL)arg1 ;
-(BOOL)hasSteppingTransitIncidentMessageIndex;
-(unsigned)listTransitIncidentMessageIndex;
-(void)setHasListTransitIncidentMessageIndex:(BOOL)arg1 ;
-(BOOL)hasListTransitIncidentMessageIndex;
-(BOOL)hasBaseFare;
-(BOOL)hasSurcharge;
-(void)updateTransitStep:(id)arg1 ;
-(id<GEOTransitVehicleEntries>)vehicleEntries;
-(id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1 ;
-(long long)segmentTypeForManeuver;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTFTrafficSnapshot;

@interface GEOETATrafficUpdateRequestExtension : PBCodable <NSCopying> {

	GEOTimepoint _clientTimepoint;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	BOOL _needServerLatency;
	BOOL _useClientTimepointAsNow;
	BOOL _useLiveTrafficAsFallback;
	struct {
		unsigned has_clientTimepoint : 1;
		unsigned has_needServerLatency : 1;
		unsigned has_useClientTimepointAsNow : 1;
		unsigned has_useLiveTrafficAsFallback : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasClientTimepoint; 
@property (assign,nonatomic) GEOTimepoint clientTimepoint; 
@property (assign,nonatomic) BOOL hasUseClientTimepointAsNow; 
@property (assign,nonatomic) BOOL useClientTimepointAsNow; 
@property (assign,nonatomic) BOOL hasNeedServerLatency; 
@property (assign,nonatomic) BOOL needServerLatency; 
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
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setNeedServerLatency:(BOOL)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(BOOL)useLiveTrafficAsFallback;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(BOOL)needServerLatency;
-(void)setHasNeedServerLatency:(BOOL)arg1 ;
-(BOOL)hasNeedServerLatency;
-(void)setClientTimepoint:(GEOTimepoint)arg1 ;
-(void)setUseClientTimepointAsNow:(BOOL)arg1 ;
-(GEOTimepoint)clientTimepoint;
-(void)setHasClientTimepoint:(BOOL)arg1 ;
-(BOOL)hasClientTimepoint;
-(BOOL)useClientTimepointAsNow;
-(void)setHasUseClientTimepointAsNow:(BOOL)arg1 ;
-(BOOL)hasUseClientTimepointAsNow;
@end


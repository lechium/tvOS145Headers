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

@class PBDataReader, GEOLatLng, NSData, NSString, GEOPDViewportInfo;

@interface GEORPMapLocation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLatLng* _coordinate;
	NSData* _image;
	NSString* _mapScreenshotId;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _zoomLevel;
	struct {
		unsigned has_zoomLevel : 1;
		unsigned read_coordinate : 1;
		unsigned read_image : 1;
		unsigned read_mapScreenshotId : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) NSData * image; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) float zoomLevel; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) BOOL hasMapScreenshotId; 
@property (nonatomic,retain) NSString * mapScreenshotId; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)coordinate;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setZoomLevel:(float)arg1 ;
-(float)zoomLevel;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(BOOL)hasZoomLevel;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasCoordinate;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(BOOL)hasImage;
-(NSString *)mapScreenshotId;
-(void)setMapScreenshotId:(NSString *)arg1 ;
-(BOOL)hasMapScreenshotId;
-(void)_setMapMode:(int)arg1 region:(id)arg2 ;
@end


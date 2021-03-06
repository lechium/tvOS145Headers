/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventDisplayAnalytic : PBCodable <NSCopying> {

	double _meanImageSpacing;
	int _displayActionTrigger;
	int _displayEvent;
	unsigned _movementDistance;
	unsigned _renderedImageCount;
	unsigned _requestedImageCount;
	unsigned _requiredResourcesAvailable;
	unsigned _totalTime;
	struct {
		unsigned has_meanImageSpacing : 1;
		unsigned has_displayActionTrigger : 1;
		unsigned has_displayEvent : 1;
		unsigned has_movementDistance : 1;
		unsigned has_renderedImageCount : 1;
		unsigned has_requestedImageCount : 1;
		unsigned has_requiredResourcesAvailable : 1;
		unsigned has_totalTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDisplayActionTrigger; 
@property (assign,nonatomic) int displayActionTrigger; 
@property (assign,nonatomic) BOOL hasRequiredResourcesAvailable; 
@property (assign,nonatomic) unsigned requiredResourcesAvailable; 
@property (assign,nonatomic) BOOL hasTotalTime; 
@property (assign,nonatomic) unsigned totalTime; 
@property (assign,nonatomic) BOOL hasRequestedImageCount; 
@property (assign,nonatomic) unsigned requestedImageCount; 
@property (assign,nonatomic) BOOL hasRenderedImageCount; 
@property (assign,nonatomic) unsigned renderedImageCount; 
@property (assign,nonatomic) BOOL hasMovementDistance; 
@property (assign,nonatomic) unsigned movementDistance; 
@property (assign,nonatomic) BOOL hasMeanImageSpacing; 
@property (assign,nonatomic) double meanImageSpacing; 
@property (assign,nonatomic) BOOL hasDisplayEvent; 
@property (assign,nonatomic) int displayEvent; 
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
-(void)setTotalTime:(unsigned)arg1 ;
-(void)setDisplayActionTrigger:(int)arg1 ;
-(void)setRequiredResourcesAvailable:(unsigned)arg1 ;
-(void)setRequestedImageCount:(unsigned)arg1 ;
-(void)setRenderedImageCount:(unsigned)arg1 ;
-(void)setMovementDistance:(unsigned)arg1 ;
-(void)setMeanImageSpacing:(double)arg1 ;
-(void)setDisplayEvent:(int)arg1 ;
-(int)displayActionTrigger;
-(void)setHasDisplayActionTrigger:(BOOL)arg1 ;
-(BOOL)hasDisplayActionTrigger;
-(id)displayActionTriggerAsString:(int)arg1 ;
-(int)StringAsDisplayActionTrigger:(id)arg1 ;
-(unsigned)requiredResourcesAvailable;
-(void)setHasRequiredResourcesAvailable:(BOOL)arg1 ;
-(BOOL)hasRequiredResourcesAvailable;
-(unsigned)totalTime;
-(void)setHasTotalTime:(BOOL)arg1 ;
-(BOOL)hasTotalTime;
-(unsigned)requestedImageCount;
-(void)setHasRequestedImageCount:(BOOL)arg1 ;
-(BOOL)hasRequestedImageCount;
-(unsigned)renderedImageCount;
-(void)setHasRenderedImageCount:(BOOL)arg1 ;
-(BOOL)hasRenderedImageCount;
-(unsigned)movementDistance;
-(void)setHasMovementDistance:(BOOL)arg1 ;
-(BOOL)hasMovementDistance;
-(double)meanImageSpacing;
-(void)setHasMeanImageSpacing:(BOOL)arg1 ;
-(BOOL)hasMeanImageSpacing;
-(int)displayEvent;
-(void)setHasDisplayEvent:(BOOL)arg1 ;
-(BOOL)hasDisplayEvent;
-(id)displayEventAsString:(int)arg1 ;
-(int)StringAsDisplayEvent:(id)arg1 ;
@end


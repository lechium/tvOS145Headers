/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEORPFeedbackResult;

@interface GEORPFeedbackResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEORPFeedbackResult* _feedbackResult;
	int _feedbackRequestType;
	int _status;
	BOOL _attestationNotFound;
	BOOL _discardLogs;
	struct {
		unsigned has_feedbackRequestType : 1;
		unsigned has_status : 1;
		unsigned has_attestationNotFound : 1;
		unsigned has_discardLogs : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasFeedbackRequestType; 
@property (assign,nonatomic) int feedbackRequestType; 
@property (nonatomic,readonly) BOOL hasFeedbackResult; 
@property (nonatomic,retain) GEORPFeedbackResult * feedbackResult; 
@property (assign,nonatomic) BOOL hasDiscardLogs; 
@property (assign,nonatomic) BOOL discardLogs; 
@property (assign,nonatomic) BOOL hasAttestationNotFound; 
@property (assign,nonatomic) BOOL attestationNotFound; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setFeedbackRequestType:(int)arg1 ;
-(int)feedbackRequestType;
-(void)setHasFeedbackRequestType:(BOOL)arg1 ;
-(BOOL)hasFeedbackRequestType;
-(id)feedbackRequestTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackRequestType:(id)arg1 ;
-(GEORPFeedbackResult *)feedbackResult;
-(void)setFeedbackResult:(GEORPFeedbackResult *)arg1 ;
-(void)setDiscardLogs:(BOOL)arg1 ;
-(void)setAttestationNotFound:(BOOL)arg1 ;
-(BOOL)hasFeedbackResult;
-(BOOL)discardLogs;
-(void)setHasDiscardLogs:(BOOL)arg1 ;
-(BOOL)hasDiscardLogs;
-(BOOL)attestationNotFound;
-(void)setHasAttestationNotFound:(BOOL)arg1 ;
-(BOOL)hasAttestationNotFound;
@end

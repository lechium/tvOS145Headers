/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitTargetControllerError : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _certified;
	int _error;
	int _transportType;
	AWDHomeKitVendorInformation* _vendorDetails;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorDetails; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorDetails;              //@synthesize vendorDetails=_vendorDetails - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasCertified; 
@property (assign,nonatomic) int certified;                                            //@synthesize certified=_certified - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)error;
-(void)setError:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasError;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasError:(BOOL)arg1 ;
-(id)errorAsString:(int)arg1 ;
-(int)StringAsError:(id)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(AWDHomeKitVendorInformation *)vendorDetails;
-(void)setVendorDetails:(AWDHomeKitVendorInformation *)arg1 ;
-(BOOL)hasVendorDetails;
-(int)certified;
-(void)setCertified:(int)arg1 ;
-(void)setHasCertified:(BOOL)arg1 ;
-(BOOL)hasCertified;
-(id)certifiedAsString:(int)arg1 ;
-(int)StringAsCertified:(id)arg1 ;
@end

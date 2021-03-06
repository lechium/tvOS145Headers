/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPLocationBound, CKDPLocationCoordinate;

@interface CKDPLocation : PBCodable <NSCopying> {

	CKDPLocationBound* _bounds;
	CKDPLocationCoordinate* _coordinate;

}

@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) CKDPLocationCoordinate * coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) CKDPLocationBound * bounds;                       //@synthesize bounds=_bounds - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(CKDPLocationCoordinate *)coordinate;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CKDPLocationBound *)bounds;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBounds:(CKDPLocationBound *)arg1 ;
-(void)setCoordinate:(CKDPLocationCoordinate *)arg1 ;
-(BOOL)hasCoordinate;
-(BOOL)hasBounds;
@end


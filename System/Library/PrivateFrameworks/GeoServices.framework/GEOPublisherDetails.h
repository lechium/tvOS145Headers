/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPublisherDetails : PBCodable <NSCopying> {

	SCD_Struct_GE87* _publisherIds;
	BOOL _currentlyFollowing;
	SCD_Struct_GE118 _flags;

}

@property (nonatomic,readonly) unsigned long long publisherIdsCount; 
@property (nonatomic,readonly) unsigned long long* publisherIds; 
@property (assign,nonatomic) BOOL hasCurrentlyFollowing; 
@property (assign,nonatomic) BOOL currentlyFollowing; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)addPublisherId:(unsigned long long)arg1 ;
-(unsigned long long)publisherIdsCount;
-(void)clearPublisherIds;
-(unsigned long long)publisherIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long*)publisherIds;
-(void)setCurrentlyFollowing:(BOOL)arg1 ;
-(void)setPublisherIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)currentlyFollowing;
-(void)setHasCurrentlyFollowing:(BOOL)arg1 ;
-(BOOL)hasCurrentlyFollowing;
@end


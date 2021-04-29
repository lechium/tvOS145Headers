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

@interface GEOLogMsgStateUGCPhoto : PBCodable <NSCopying> {

	SCD_Struct_GE85* _photoSources;

}

@property (nonatomic,readonly) unsigned long long photoSourcesCount; 
@property (nonatomic,readonly) int* photoSources; 
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
-(void)addPhotoSource:(int)arg1 ;
-(unsigned long long)photoSourcesCount;
-(void)clearPhotoSources;
-(int)photoSourceAtIndex:(unsigned long long)arg1 ;
-(int*)photoSources;
-(void)setPhotoSources:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)photoSourcesAsString:(int)arg1 ;
-(int)StringAsPhotoSources:(id)arg1 ;
@end


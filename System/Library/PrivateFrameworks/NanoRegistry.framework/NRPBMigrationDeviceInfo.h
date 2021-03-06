/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NRPBMigrationDeviceInfo : PBCodable <NSCopying> {

	NSString* _advertisedName;
	NSData* _iD;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL hasID; 
@property (nonatomic,retain) NSData * iD;                            //@synthesize iD=_iD - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasAdvertisedName; 
@property (nonatomic,retain) NSString * advertisedName;              //@synthesize advertisedName=_advertisedName - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setID:(NSData *)arg1 ;
-(void)setAdvertisedName:(NSString *)arg1 ;
-(NSData *)iD;
-(NSString *)advertisedName;
-(BOOL)hasID;
-(BOOL)hasAdvertisedName;
@end


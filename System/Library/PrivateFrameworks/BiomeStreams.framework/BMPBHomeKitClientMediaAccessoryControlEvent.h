/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, BMPBHomeKitClientBase;

@interface BMPBHomeKitClientMediaAccessoryControlEvent : PBCodable <NSCopying> {

	NSString* _accessoryMediaRouteIdentifier;
	NSString* _accessoryName;
	NSMutableArray* _accessoryStates;
	NSString* _accessoryUniqueIdentifier;
	BMPBHomeKitClientBase* _base;
	NSString* _homeName;
	NSString* _roomName;
	NSString* _roomUniqueIdentifier;
	NSMutableArray* _zoneNames;
	NSMutableArray* _zoneUniqueIdentifiers;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) BMPBHomeKitClientBase * base;                          //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryUniqueIdentifier; 
@property (nonatomic,retain) NSString * accessoryUniqueIdentifier;                  //@synthesize accessoryUniqueIdentifier=_accessoryUniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessoryStates;                      //@synthesize accessoryStates=_accessoryStates - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryMediaRouteIdentifier; 
@property (nonatomic,retain) NSString * accessoryMediaRouteIdentifier;              //@synthesize accessoryMediaRouteIdentifier=_accessoryMediaRouteIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * zoneUniqueIdentifiers;                //@synthesize zoneUniqueIdentifiers=_zoneUniqueIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL hasRoomUniqueIdentifier; 
@property (nonatomic,retain) NSString * roomUniqueIdentifier;                       //@synthesize roomUniqueIdentifier=_roomUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryName; 
@property (nonatomic,retain) NSString * accessoryName;                              //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) BOOL hasRoomName; 
@property (nonatomic,retain) NSString * roomName;                                   //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,retain) NSMutableArray * zoneNames;                            //@synthesize zoneNames=_zoneNames - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeName; 
@property (nonatomic,retain) NSString * homeName;                                   //@synthesize homeName=_homeName - In the implementation block
+(Class)zoneUniqueIdentifiersType;
+(Class)zoneNamesType;
+(Class)accessoryStateType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAccessoryName:(NSString *)arg1 ;
-(BOOL)hasAccessoryName;
-(NSString *)accessoryName;
-(NSString *)homeName;
-(void)setHomeName:(NSString *)arg1 ;
-(NSString *)roomName;
-(void)setRoomName:(NSString *)arg1 ;
-(void)setBase:(BMPBHomeKitClientBase *)arg1 ;
-(BMPBHomeKitClientBase *)base;
-(void)setZoneNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)zoneNames;
-(NSString *)accessoryUniqueIdentifier;
-(void)addZoneUniqueIdentifiers:(id)arg1 ;
-(void)addZoneNames:(id)arg1 ;
-(void)setAccessoryUniqueIdentifier:(NSString *)arg1 ;
-(unsigned long long)zoneUniqueIdentifiersCount;
-(void)clearZoneUniqueIdentifiers;
-(id)zoneUniqueIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setRoomUniqueIdentifier:(NSString *)arg1 ;
-(unsigned long long)zoneNamesCount;
-(void)clearZoneNames;
-(id)zoneNamesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBase;
-(BOOL)hasAccessoryUniqueIdentifier;
-(BOOL)hasRoomUniqueIdentifier;
-(BOOL)hasRoomName;
-(BOOL)hasHomeName;
-(NSMutableArray *)zoneUniqueIdentifiers;
-(void)setZoneUniqueIdentifiers:(NSMutableArray *)arg1 ;
-(NSString *)roomUniqueIdentifier;
-(void)addAccessoryState:(id)arg1 ;
-(unsigned long long)accessoryStatesCount;
-(void)clearAccessoryStates;
-(id)accessoryStateAtIndex:(unsigned long long)arg1 ;
-(void)setAccessoryMediaRouteIdentifier:(NSString *)arg1 ;
-(BOOL)hasAccessoryMediaRouteIdentifier;
-(NSMutableArray *)accessoryStates;
-(void)setAccessoryStates:(NSMutableArray *)arg1 ;
-(NSString *)accessoryMediaRouteIdentifier;
@end


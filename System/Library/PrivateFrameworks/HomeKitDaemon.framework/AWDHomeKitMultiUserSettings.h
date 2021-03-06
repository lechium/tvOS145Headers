/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitMultiUserSettings : PBCodable <NSCopying> {

	NSMutableArray* _homeKitMultiUserSettingsValuesByKeyPaths;
	BOOL _isOwner;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasIsOwner; 
@property (assign,nonatomic) BOOL isOwner;                                                           //@synthesize isOwner=_isOwner - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeKitMultiUserSettingsValuesByKeyPaths;              //@synthesize homeKitMultiUserSettingsValuesByKeyPaths=_homeKitMultiUserSettingsValuesByKeyPaths - In the implementation block
+(Class)homeKitMultiUserSettingsValuesByKeyPathType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isOwner;
-(void)setIsOwner:(BOOL)arg1 ;
-(void)setHasIsOwner:(BOOL)arg1 ;
-(BOOL)hasIsOwner;
-(void)setHomeKitMultiUserSettingsValuesByKeyPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)homeKitMultiUserSettingsValuesByKeyPaths;
-(void)addHomeKitMultiUserSettingsValuesByKeyPath:(id)arg1 ;
-(unsigned long long)homeKitMultiUserSettingsValuesByKeyPathsCount;
-(void)clearHomeKitMultiUserSettingsValuesByKeyPaths;
-(id)homeKitMultiUserSettingsValuesByKeyPathAtIndex:(unsigned long long)arg1 ;
@end


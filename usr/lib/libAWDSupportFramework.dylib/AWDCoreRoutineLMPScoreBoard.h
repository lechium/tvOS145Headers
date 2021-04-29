/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineLMPScoreBoard : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _instances;
	NSMutableArray* _secondaryInstances;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * instances;                       //@synthesize instances=_instances - In the implementation block
@property (nonatomic,retain) NSMutableArray * secondaryInstances;              //@synthesize secondaryInstances=_secondaryInstances - In the implementation block
+(Class)instancesType;
+(Class)secondaryInstancesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setInstances:(NSMutableArray *)arg1 ;
-(unsigned long long)instancesCount;
-(void)clearInstances;
-(NSMutableArray *)instances;
-(void)setSecondaryInstances:(NSMutableArray *)arg1 ;
-(void)addInstances:(id)arg1 ;
-(void)addSecondaryInstances:(id)arg1 ;
-(id)instancesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)secondaryInstancesCount;
-(void)clearSecondaryInstances;
-(id)secondaryInstancesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)secondaryInstances;
@end


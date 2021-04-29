/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutinePersistenceMirroringTickleFight : PBCodable <NSCopying> {

	SCD_Struct_AW15* _tickleTimes;
	unsigned long long _timestamp;
	int _operationType;
	int _recordType;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long tickleTimesCount; 
@property (nonatomic,readonly) int* tickleTimes; 
@property (assign,nonatomic) BOOL hasRecordType; 
@property (assign,nonatomic) int recordType;                                     //@synthesize recordType=_recordType - In the implementation block
@property (assign,nonatomic) BOOL hasOperationType; 
@property (assign,nonatomic) int operationType;                                  //@synthesize operationType=_operationType - In the implementation block
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
-(int)recordType;
-(void)setRecordType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setOperationType:(int)arg1 ;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(int)operationType;
-(unsigned long long)tickleTimesCount;
-(void)clearTickleTimes;
-(int)tickleTimesAtIndex:(unsigned long long)arg1 ;
-(void)addTickleTimes:(int)arg1 ;
-(int*)tickleTimes;
-(void)setTickleTimes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasRecordType:(BOOL)arg1 ;
-(BOOL)hasRecordType;
@end


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

@interface AWDCoreRoutinePersistenceMirroringDelegate : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _creationFailureReason;
	BOOL _mirroringDelegatePresent;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMirroringDelegatePresent; 
@property (assign,nonatomic) BOOL mirroringDelegatePresent;                 //@synthesize mirroringDelegatePresent=_mirroringDelegatePresent - In the implementation block
@property (assign,nonatomic) BOOL hasCreationFailureReason; 
@property (assign,nonatomic) int creationFailureReason;                     //@synthesize creationFailureReason=_creationFailureReason - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setMirroringDelegatePresent:(BOOL)arg1 ;
-(void)setHasMirroringDelegatePresent:(BOOL)arg1 ;
-(BOOL)hasMirroringDelegatePresent;
-(void)setCreationFailureReason:(int)arg1 ;
-(void)setHasCreationFailureReason:(BOOL)arg1 ;
-(BOOL)hasCreationFailureReason;
-(BOOL)mirroringDelegatePresent;
-(int)creationFailureReason;
@end


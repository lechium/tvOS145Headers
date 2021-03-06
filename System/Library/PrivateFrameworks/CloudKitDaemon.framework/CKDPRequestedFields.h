/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying> {

	NSMutableArray* _fields;
	NSMutableArray* _listFields;

}

@property (nonatomic,retain) NSMutableArray * fields;                  //@synthesize fields=_fields - In the implementation block
@property (nonatomic,retain) NSMutableArray * listFields;              //@synthesize listFields=_listFields - In the implementation block
+(Class)fieldsType;
+(Class)listFieldType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSMutableArray *)fields;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFields:(NSMutableArray *)arg1 ;
-(void)addFields:(id)arg1 ;
-(void)clearFields;
-(void)addListField:(id)arg1 ;
-(unsigned long long)fieldsCount;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(NSMutableArray *)listFields;
-(unsigned long long)listFieldsCount;
-(void)clearListFields;
-(id)listFieldAtIndex:(unsigned long long)arg1 ;
-(void)setListFields:(NSMutableArray *)arg1 ;
@end


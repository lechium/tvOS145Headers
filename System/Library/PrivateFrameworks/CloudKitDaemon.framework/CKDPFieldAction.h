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

@class CKDPFieldActionDeleteListRange, CKDPFieldActionInsertIntoList, CKDPFieldActionReplaceListRange;

@interface CKDPFieldAction : PBCodable <NSCopying> {

	CKDPFieldActionDeleteListRange* _deleteListRange;
	CKDPFieldActionInsertIntoList* _insertIntoList;
	CKDPFieldActionReplaceListRange* _replaceListRange;

}

@property (nonatomic,readonly) BOOL hasInsertIntoList; 
@property (nonatomic,retain) CKDPFieldActionInsertIntoList * insertIntoList;                  //@synthesize insertIntoList=_insertIntoList - In the implementation block
@property (nonatomic,readonly) BOOL hasDeleteListRange; 
@property (nonatomic,retain) CKDPFieldActionDeleteListRange * deleteListRange;                //@synthesize deleteListRange=_deleteListRange - In the implementation block
@property (nonatomic,readonly) BOOL hasReplaceListRange; 
@property (nonatomic,retain) CKDPFieldActionReplaceListRange * replaceListRange;              //@synthesize replaceListRange=_replaceListRange - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setInsertIntoList:(CKDPFieldActionInsertIntoList *)arg1 ;
-(void)setReplaceListRange:(CKDPFieldActionReplaceListRange *)arg1 ;
-(void)setDeleteListRange:(CKDPFieldActionDeleteListRange *)arg1 ;
-(BOOL)hasInsertIntoList;
-(BOOL)hasDeleteListRange;
-(BOOL)hasReplaceListRange;
-(CKDPFieldActionInsertIntoList *)insertIntoList;
-(CKDPFieldActionDeleteListRange *)deleteListRange;
-(CKDPFieldActionReplaceListRange *)replaceListRange;
@end


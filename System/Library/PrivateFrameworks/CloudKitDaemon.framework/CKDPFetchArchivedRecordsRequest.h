/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKDPAssetsToDownload, CKDPRecordZoneIdentifier;

@interface CKDPFetchArchivedRecordsRequest : PBRequest <NSCopying> {

	NSData* _archiveContinuationToken;
	CKDPAssetsToDownload* _assetsToDownload;
	unsigned _limit;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _newestFirst;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasArchiveContinuationToken; 
@property (nonatomic,retain) NSData * archiveContinuationToken;                      //@synthesize archiveContinuationToken=_archiveContinuationToken - In the implementation block
@property (assign,nonatomic) BOOL hasNewestFirst; 
@property (assign,nonatomic) BOOL newestFirst;                                       //@synthesize newestFirst=_newestFirst - In the implementation block
@property (assign,nonatomic) BOOL hasLimit; 
@property (assign,nonatomic) unsigned limit;                                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;                //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setLimit:(unsigned)arg1 ;
-(unsigned)limit;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(BOOL)hasAssetsToDownload;
-(CKDPAssetsToDownload *)assetsToDownload;
-(void)setArchiveContinuationToken:(NSData *)arg1 ;
-(BOOL)hasArchiveContinuationToken;
-(void)setNewestFirst:(BOOL)arg1 ;
-(void)setHasNewestFirst:(BOOL)arg1 ;
-(BOOL)hasNewestFirst;
-(void)setHasLimit:(BOOL)arg1 ;
-(BOOL)hasLimit;
-(NSData *)archiveContinuationToken;
-(BOOL)newestFirst;
@end


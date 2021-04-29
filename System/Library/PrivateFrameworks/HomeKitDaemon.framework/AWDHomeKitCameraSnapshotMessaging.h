/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraSnapshotMessaging : PBCodable <NSCopying> {

	unsigned _receivedSnapshotRequest;
	unsigned _sentSnapshotRequest;
	unsigned _sentSnapshotResponse;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasReceivedSnapshotRequest; 
@property (assign,nonatomic) unsigned receivedSnapshotRequest;              //@synthesize receivedSnapshotRequest=_receivedSnapshotRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentSnapshotRequest; 
@property (assign,nonatomic) unsigned sentSnapshotRequest;                  //@synthesize sentSnapshotRequest=_sentSnapshotRequest - In the implementation block
@property (assign,nonatomic) BOOL hasSentSnapshotResponse; 
@property (assign,nonatomic) unsigned sentSnapshotResponse;                 //@synthesize sentSnapshotResponse=_sentSnapshotResponse - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setReceivedSnapshotRequest:(unsigned)arg1 ;
-(void)setHasReceivedSnapshotRequest:(BOOL)arg1 ;
-(BOOL)hasReceivedSnapshotRequest;
-(void)setSentSnapshotRequest:(unsigned)arg1 ;
-(void)setHasSentSnapshotRequest:(BOOL)arg1 ;
-(BOOL)hasSentSnapshotRequest;
-(void)setSentSnapshotResponse:(unsigned)arg1 ;
-(void)setHasSentSnapshotResponse:(BOOL)arg1 ;
-(BOOL)hasSentSnapshotResponse;
-(unsigned)receivedSnapshotRequest;
-(unsigned)sentSnapshotRequest;
-(unsigned)sentSnapshotResponse;
@end


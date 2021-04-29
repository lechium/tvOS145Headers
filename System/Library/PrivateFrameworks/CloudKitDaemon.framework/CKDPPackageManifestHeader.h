/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPPackageManifestHeader : PBCodable <NSCopying> {

	NSData* _signature;
	int _version;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;               //@synthesize signature=_signature - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(NSData *)signature;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasSignature;
@end


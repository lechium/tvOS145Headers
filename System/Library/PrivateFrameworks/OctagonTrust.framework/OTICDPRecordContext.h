/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OTEscrowAuthenticationInformation, OTCDPRecoveryInformation;

@interface OTICDPRecordContext : PBCodable <NSCopying> {

	OTEscrowAuthenticationInformation* _authInfo;
	OTCDPRecoveryInformation* _cdpInfo;

}

@property (nonatomic,readonly) BOOL hasCdpInfo; 
@property (nonatomic,retain) OTCDPRecoveryInformation * cdpInfo;                        //@synthesize cdpInfo=_cdpInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthInfo; 
@property (nonatomic,retain) OTEscrowAuthenticationInformation * authInfo;              //@synthesize authInfo=_authInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(OTEscrowAuthenticationInformation *)authInfo;
-(void)setAuthInfo:(OTEscrowAuthenticationInformation *)arg1 ;
-(BOOL)hasCdpInfo;
-(BOOL)hasAuthInfo;
-(OTCDPRecoveryInformation *)cdpInfo;
-(void)setCdpInfo:(OTCDPRecoveryInformation *)arg1 ;
@end


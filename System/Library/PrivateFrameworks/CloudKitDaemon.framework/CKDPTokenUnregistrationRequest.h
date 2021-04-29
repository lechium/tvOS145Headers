/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPTokenRegistrationBody;

@interface CKDPTokenUnregistrationRequest : PBRequest <NSCopying> {

	CKDPTokenRegistrationBody* _tokenRegistrationBody;

}

@property (nonatomic,readonly) BOOL hasTokenRegistrationBody; 
@property (nonatomic,retain) CKDPTokenRegistrationBody * tokenRegistrationBody;              //@synthesize tokenRegistrationBody=_tokenRegistrationBody - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTokenRegistrationBody:(CKDPTokenRegistrationBody *)arg1 ;
-(BOOL)hasTokenRegistrationBody;
-(CKDPTokenRegistrationBody *)tokenRegistrationBody;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufPaymentStatus : PBCodable <NSCopying> {

	NSString* _remotePaymentRequestIdentifier;
	unsigned _status;
	SCD_Struct_PK1 _has;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasRemotePaymentRequestIdentifier; 
@property (nonatomic,retain) NSString * remotePaymentRequestIdentifier;              //@synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setRemotePaymentRequestIdentifier:(NSString *)arg1 ;
-(BOOL)hasRemotePaymentRequestIdentifier;
-(NSString *)remotePaymentRequestIdentifier;
@end

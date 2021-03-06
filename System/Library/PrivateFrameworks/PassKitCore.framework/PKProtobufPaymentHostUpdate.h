/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKProtobufPaymentMethod, NSString, NSData, PKProtobufShippingMethod;

@interface PKProtobufPaymentHostUpdate : PBCodable <NSCopying> {

	PKProtobufPaymentMethod* _paymentMethod;
	NSString* _remotePaymentRequestIdentifier;
	NSData* _shippingContact;
	PKProtobufShippingMethod* _shippingMethod;

}

@property (nonatomic,readonly) BOOL hasRemotePaymentRequestIdentifier; 
@property (nonatomic,retain) NSString * remotePaymentRequestIdentifier;              //@synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingContact; 
@property (nonatomic,retain) NSData * shippingContact;                               //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingMethod; 
@property (nonatomic,retain) PKProtobufShippingMethod * shippingMethod;              //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentMethod; 
@property (nonatomic,retain) PKProtobufPaymentMethod * paymentMethod;                //@synthesize paymentMethod=_paymentMethod - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PKProtobufPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(PKProtobufPaymentMethod *)arg1 ;
-(BOOL)hasPaymentMethod;
-(NSData *)shippingContact;
-(PKProtobufShippingMethod *)shippingMethod;
-(void)setShippingContact:(NSData *)arg1 ;
-(void)setShippingMethod:(PKProtobufShippingMethod *)arg1 ;
-(BOOL)hasShippingContact;
-(BOOL)hasShippingMethod;
-(void)setRemotePaymentRequestIdentifier:(NSString *)arg1 ;
-(BOOL)hasRemotePaymentRequestIdentifier;
-(NSString *)remotePaymentRequestIdentifier;
@end


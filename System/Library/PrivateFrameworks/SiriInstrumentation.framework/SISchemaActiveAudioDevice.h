/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface SISchemaActiveAudioDevice : SISchemaInstrumentationMessage {

	NSString* _vendorIdentifier;
	NSString* _productIdentifier;
	BOOL _hasVendorIdentifier;
	BOOL _hasProductIdentifier;

}

@property (nonatomic,copy) NSString * vendorIdentifier;               //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasVendorIdentifier;                //@synthesize hasVendorIdentifier=_hasVendorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasProductIdentifier;               //@synthesize hasProductIdentifier=_hasProductIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)vendorIdentifier;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(NSData *)jsonData;
-(BOOL)hasVendorIdentifier;
-(BOOL)hasProductIdentifier;
-(void)setHasVendorIdentifier:(BOOL)arg1 ;
-(void)setHasProductIdentifier:(BOOL)arg1 ;
@end

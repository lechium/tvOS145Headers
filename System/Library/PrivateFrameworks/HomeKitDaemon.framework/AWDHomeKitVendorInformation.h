/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitVendorInformation : PBCodable <NSCopying> {

	NSString* _category;
	NSString* _firmwareVersion;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _name;
	NSString* _productData;

}

@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasFirmwareVersion; 
@property (nonatomic,retain) NSString * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasProductData; 
@property (nonatomic,retain) NSString * productData;                  //@synthesize productData=_productData - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                     //@synthesize category=_category - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)model;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)hasCategory;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)firmwareVersion;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(BOOL)hasModel;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(BOOL)hasManufacturer;
-(BOOL)hasFirmwareVersion;
-(void)setProductData:(NSString *)arg1 ;
-(NSString *)productData;
-(BOOL)hasProductData;
@end


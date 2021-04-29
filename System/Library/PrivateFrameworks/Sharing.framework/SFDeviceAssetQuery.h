/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Sharing/Sharing-Structs.h>
@class NSString, NSDictionary;

@interface SFDeviceAssetQuery : NSObject {

	BOOL _legacyAsset;
	BOOL _h264;
	LogCategory* _ucat;
	NSString* _assetType;
	unsigned long long _version;
	NSString* _productType;
	NSString* _mappedProductType;
	NSString* _color;
	NSDictionary* _additionalQueryParameters;

}

@property (nonatomic,readonly) LogCategory* ucat;                                     //@synthesize ucat=_ucat - In the implementation block
@property (nonatomic,readonly) NSString * stringIdentifier; 
@property (nonatomic,readonly) NSString * variantIdentifier; 
@property (nonatomic,readonly) NSString * assetType;                                  //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic) BOOL h264;                                               //@synthesize h264=_h264 - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                            //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * productType;                                //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * mappedProductType;                            //@synthesize mappedProductType=_mappedProductType - In the implementation block
@property (nonatomic,readonly) NSString * effectiveProductType; 
@property (nonatomic,readonly) NSString * color;                                      //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalQueryParameters;              //@synthesize additionalQueryParameters=_additionalQueryParameters - In the implementation block
@property (assign,nonatomic) BOOL legacyAsset;                                        //@synthesize legacyAsset=_legacyAsset - In the implementation block
+(BOOL)deviceWantsH264;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(unsigned long long)version;
-(NSString *)productType;
-(NSString *)color;
-(NSString *)assetType;
-(NSString *)variantIdentifier;
-(LogCategory*)ucat;
-(NSString *)effectiveProductType;
-(BOOL)legacyAsset;
-(BOOL)h264;
-(NSString *)stringIdentifier;
-(void)setMappedProductType:(NSString *)arg1 ;
-(NSDictionary *)additionalQueryParameters;
-(id)initWithHomePodColor:(unsigned long long)arg1 version:(unsigned)arg2 ;
-(id)initWithAssetType:(id)arg1 productType:(id)arg2 ;
-(id)loggingProductType;
-(NSString *)mappedProductType;
-(id)initWithHomePodColor:(unsigned long long)arg1 ;
-(id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 ;
-(id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2 ;
-(void)setLegacyAsset:(BOOL)arg1 ;
-(void)setH264:(BOOL)arg1 ;
@end


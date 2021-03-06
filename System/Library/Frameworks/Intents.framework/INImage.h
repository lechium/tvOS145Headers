/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INCacheableObject.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INImageExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSURL;

@interface INImage : NSObject <INJSONSerializable, INKeyImageProducing, INCacheableObject, INImageProxyInjecting, INImageExport, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	long long __renderingMode;
	SCD_Struct_IN3 _imageSize;
	SCD_Struct_IN3 _preferredScaledSize;

}

@property (nonatomic,copy,readonly) INImage * cd_dataImage; 
@property (nonatomic,copy,readonly) NSData * cd_encodedDataImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) INImage * _keyImage; 
@property (nonatomic,copy,readonly) NSString * cacheIdentifier; 
@property (nonatomic,readonly) BOOL _isEligibleForProxying; 
@property (nonatomic,readonly) BOOL _isSupportedForDonation; 
@property (setter=_setIdentifier:,nonatomic,copy) NSString * _identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (setter=_setImageData:,nonatomic,copy) NSData * _imageData; 
@property (setter=_setUri:,nonatomic,copy) NSURL * _uri; 
@property (setter=_setName:,nonatomic,copy) NSString * _name; 
@property (setter=_setBundlePath:,nonatomic,copy) NSString * _bundlePath; 
@property (setter=_setBundleIdentifier:,nonatomic,copy) NSString * _bundleIdentifier; 
@property (assign,setter=_setImageSize:,nonatomic) SCD_Struct_IN3 _imageSize;                                  //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,setter=_setPreferredScaledSize:,nonatomic) SCD_Struct_IN3 _preferredScaledSize;              //@synthesize preferredScaledSize=_preferredScaledSize - In the implementation block
@property (assign,setter=_setRenderingMode:,nonatomic) long long _renderingMode;                               //@synthesize _renderingMode=__renderingMode - In the implementation block
@property (getter=_isSystem,nonatomic,readonly) BOOL system; 
@property (nonatomic,readonly) BOOL _requiresRetrieval; 
@property (setter=_setSandboxExtensionData:,nonatomic,copy) NSData * _sandboxExtensionData; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(id)imageNamed:(id)arg1 ;
+(id)imageWithImageData:(id)arg1 ;
+(id)imageWithURL:(id)arg1 ;
+(void)registerImageLoadersOnce;
+(id)imageWithURL:(id)arg1 width:(double)arg2 height:(double)arg3 ;
+(id)systemImageNamed:(id)arg1 ;
+(id)_bundleImageWithURL:(id)arg1 ;
+(id)_classesInCluster;
-(INImage *)cd_dataImage;
-(NSData *)cd_encodedDataImage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)_name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)_identifier;
-(void)_setIdentifier:(id)arg1 ;
-(id)_description;
-(NSString *)_bundleIdentifier;
-(NSString *)_bundlePath;
-(id)_initWithIdentifier:(id)arg1 ;
-(NSData *)_imageData;
-(void)_setName:(id)arg1 ;
-(SCD_Struct_IN3)_imageSize;
-(id)_dictionaryRepresentation;
-(NSURL *)_uri;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateCachePayloadWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)cacheIdentifier;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(INImage *)_keyImage;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(BOOL)_requiresRetrieval;
-(void)_retrieveImageDataWithReply:(/*^block*/id)arg1 ;
-(id)_copyWithSubclass:(Class)arg1 ;
-(void)_setImageData:(id)arg1 ;
-(BOOL)_isEligibleForProxying;
-(void)_setUri:(id)arg1 ;
-(void)_setBundlePath:(id)arg1 ;
-(void)_setRenderingMode:(long long)arg1 ;
-(void)_setImageSize:(SCD_Struct_IN3)arg1 ;
-(id)_initWithURLRepresentation:(id)arg1 ;
-(SCD_Struct_IN3)_preferredScaledSize;
-(id)_initWithData:(id)arg1 ;
-(BOOL)_isSystem;
-(void)_requestProxy:(/*^block*/id)arg1 ;
-(void)_setBundleIdentifier:(id)arg1 ;
-(NSData *)_sandboxExtensionData;
-(void)_setSandboxExtensionData:(id)arg1 ;
-(id)_preferredImageLoader;
-(id)_URLRepresentation;
-(BOOL)_isSupportedForDonation;
-(id)_descriptionAtIndent:(unsigned long long)arg1 ;
-(void)_setPreferredScaledSize:(SCD_Struct_IN3)arg1 ;
-(long long)_renderingMode;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_in_writeableFilePersistenceConfigurationForStoreType:(unsigned long long)arg1 ;
-(id)_in_downscaledImageForFilePersistence;
@end


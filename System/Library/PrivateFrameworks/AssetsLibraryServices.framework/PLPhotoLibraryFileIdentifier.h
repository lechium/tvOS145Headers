/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PLPhotoLibraryFileIdentifier : NSObject {

	unsigned char _bundleScope;
	BOOL _isData;
	unsigned _resourceType;
	unsigned _resourceVersion;
	unsigned _recipeId;
	NSString* _uuid;
	NSString* _uti;
	NSString* _originalFilename;

}

@property (nonatomic,retain) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned char bundleScope;              //@synthesize bundleScope=_bundleScope - In the implementation block
@property (nonatomic,retain) NSString * uti;                           //@synthesize uti=_uti - In the implementation block
@property (nonatomic,retain) NSString * originalFilename;              //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,readonly) unsigned resourceType;                  //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) unsigned resourceVersion;               //@synthesize resourceVersion=_resourceVersion - In the implementation block
@property (nonatomic,readonly) unsigned recipeId;                      //@synthesize recipeId=_recipeId - In the implementation block
@property (nonatomic,readonly) BOOL isData;                            //@synthesize isData=_isData - In the implementation block
+(id)uuidFromURL:(id)arg1 ;
+(BOOL)isValidOriginalURL:(id)arg1 ;
+(id)fileIdentifierForValidOriginalURL:(id)arg1 ;
+(id)fileIdentifierForValidOriginalURL:(id)arg1 originalsDirectoryName:(id)arg2 ;
-(id)description;
-(id)init;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)isData;
-(unsigned)resourceType;
-(id)extension;
-(NSString *)uti;
-(void)setUti:(NSString *)arg1 ;
-(unsigned)resourceVersion;
-(id)initWithAssetUuid:(id)arg1 uti:(id)arg2 resourceVersion:(unsigned)arg3 resourceType:(unsigned)arg4 ;
-(id)initWithAssetUuid:(id)arg1 uti:(id)arg2 resourceVersion:(unsigned)arg3 recipeID:(unsigned)arg4 ;
-(id)initWithAssetUuid:(id)arg1 bundleScope:(unsigned char)arg2 uti:(id)arg3 resourceVersion:(unsigned)arg4 resourceType:(unsigned)arg5 recipeID:(unsigned)arg6 originalFilename:(id)arg7 ;
-(unsigned char)bundleScope;
-(NSString *)originalFilename;
-(void)setOriginalFilename:(NSString *)arg1 ;
-(unsigned)recipeId;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CPLMemoryAssetFlag : PBCodable <NSCopying> {

	BOOL _isCurated;
	BOOL _isExtendedCurated;
	BOOL _isKeyAsset;
	BOOL _isMovieCurated;
	BOOL _isRepresentative;
	SCD_Struct_CP9 _has;

}

@property (assign,nonatomic) BOOL hasIsRepresentative; 
@property (assign,nonatomic) BOOL isRepresentative;                  //@synthesize isRepresentative=_isRepresentative - In the implementation block
@property (assign,nonatomic) BOOL hasIsCurated; 
@property (assign,nonatomic) BOOL isCurated;                         //@synthesize isCurated=_isCurated - In the implementation block
@property (assign,nonatomic) BOOL hasIsMovieCurated; 
@property (assign,nonatomic) BOOL isMovieCurated;                    //@synthesize isMovieCurated=_isMovieCurated - In the implementation block
@property (assign,nonatomic) BOOL hasIsKeyAsset; 
@property (assign,nonatomic) BOOL isKeyAsset;                        //@synthesize isKeyAsset=_isKeyAsset - In the implementation block
@property (assign,nonatomic) BOOL hasIsExtendedCurated; 
@property (assign,nonatomic) BOOL isExtendedCurated;                 //@synthesize isExtendedCurated=_isExtendedCurated - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isKeyAsset;
-(void)setIsRepresentative:(BOOL)arg1 ;
-(void)setHasIsRepresentative:(BOOL)arg1 ;
-(BOOL)hasIsRepresentative;
-(void)setIsKeyAsset:(BOOL)arg1 ;
-(void)setHasIsKeyAsset:(BOOL)arg1 ;
-(BOOL)hasIsKeyAsset;
-(BOOL)isRepresentative;
-(void)setIsCurated:(BOOL)arg1 ;
-(void)setHasIsCurated:(BOOL)arg1 ;
-(BOOL)hasIsCurated;
-(void)setIsMovieCurated:(BOOL)arg1 ;
-(void)setHasIsMovieCurated:(BOOL)arg1 ;
-(BOOL)hasIsMovieCurated;
-(void)setIsExtendedCurated:(BOOL)arg1 ;
-(void)setHasIsExtendedCurated:(BOOL)arg1 ;
-(BOOL)hasIsExtendedCurated;
-(BOOL)isCurated;
-(BOOL)isMovieCurated;
-(BOOL)isExtendedCurated;
@end

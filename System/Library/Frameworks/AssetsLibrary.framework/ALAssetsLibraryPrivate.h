/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ALAssetsLibrary, PLPhotoLibrary, NSHashTable, NSMutableDictionary;

@interface ALAssetsLibraryPrivate : NSObject {

	ALAssetsLibrary* _assetsLibrary;
	PLPhotoLibrary* _photoLibrary;
	NSHashTable* _assetGroupInternals;
	NSMutableDictionary* _groupURLSByAlbumOID;
	BOOL _isValid;

}

@property (assign,nonatomic) ALAssetsLibrary * assetsLibrary;                     //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) BOOL isValid;                                        //@synthesize isValid=_isValid - In the implementation block
-(void)dealloc;
-(BOOL)isValid;
-(void)setIsValid:(BOOL)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)registerAlbum:(id)arg1 assetGroupPrivate:(id)arg2 ;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(id)initWithAssetsLibrary:(id)arg1 ;
-(ALAssetsLibrary *)assetsLibrary;
@end


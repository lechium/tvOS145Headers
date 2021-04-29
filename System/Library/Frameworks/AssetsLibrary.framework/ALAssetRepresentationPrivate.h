/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ALAssetsLibraryAsset.h>

@protocol PLSidecar;
@class ALAssetsLibrary, PLManagedAsset, NSString, PLPhotoLibrary;

@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset> {

	ALAssetsLibrary* _library;
	BOOL _isValid;
	PLManagedAsset* _photo;
	id<PLSidecar> _sidecar;
	NSString* _extension;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) PLManagedAsset * photo;                      //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * _photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) id<PLSidecar> sidecar;                       //@synthesize sidecar=_sidecar - In the implementation block
@property (nonatomic,copy) NSString * extension;                          //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) ALAssetsLibrary * library; 
@property (assign,nonatomic) BOOL isValid;                                //@synthesize isValid=_isValid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setupFileDescriptorQueue;
+(int)_fileDescriptorForPersistentURL:(id)arg1 ;
+(int)_updateFileDescriptor:(int)arg1 forPersistentURL:(id)arg2 ;
+(void)_clearFileDescriptorQueue;
-(void)dealloc;
-(BOOL)isValid;
-(BOOL)_isVideo;
-(ALAssetsLibrary *)library;
-(PLManagedAsset *)photo;
-(void)setPhoto:(PLManagedAsset *)arg1 ;
-(void)setExtension:(NSString *)arg1 ;
-(NSString *)extension;
-(void)setIsValid:(BOOL)arg1 ;
-(PLPhotoLibrary *)_photoLibrary;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(void)setLibrary:(ALAssetsLibrary *)arg1 ;
-(id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4 ;
-(void)libraryDidChange;
-(BOOL)_isImage;
-(id<PLSidecar>)sidecar;
-(void)setSidecar:(id<PLSidecar>)arg1 ;
-(void)set_photoLibrary:(PLPhotoLibrary *)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class UIImage, PXImageRequester, NSString;

@interface PXImageRequesterHelper : PXObservable <PXChangeObserver> {

	id<PXDisplayAsset> _asset;
	id<PXUIImageProvider> _mediaProvider;
	double _scale;
	UIImage* _image;
	PXImageRequester* _imageRequester;
	CGSize _contentSize;
	CGRect _contentsRect;

}

@property (nonatomic,retain) PXImageRequester * imageRequester;                  //@synthesize imageRequester=_imageRequester - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                               //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) CGRect contentsRect;                              //@synthesize contentsRect=_contentsRect - In the implementation block
@property (nonatomic,readonly) double scale;                                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)scale;
-(void)setScale:(double)arg1 ;
-(UIImage *)image;
-(CGRect)contentsRect;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)contentSize;
-(id<PXDisplayAsset>)asset;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(void)_updateImage;
-(id<PXUIImageProvider>)mediaProvider;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateImageRequester;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setMediaProvider:(id<PXUIImageProvider>)arg1 ;
-(void)didPublishChanges;
-(void)_updateAssetOrMediaProvider;
-(void)_updateContentsRect;
@end


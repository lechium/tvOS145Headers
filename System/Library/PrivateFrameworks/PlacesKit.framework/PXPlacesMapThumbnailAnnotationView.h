/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PlacesKit/PlacesKit-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <libobjc.A.dylib/PXPlacesMapAnnotationViewFadable.h>

@class PKExtendedTraitCollection, UILabel, UIImageView, PXPlacesImageCache, NSString;

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable> {

	long long _geotaggablesCount;
	BOOL _imageIsPlaceholder;
	/*^block*/id _displayCompletion;
	PKExtendedTraitCollection* _extendedTraitCollection;
	id _extendedTraitObserver;
	UILabel* _countLabel;
	UIImageView* _countLabelBackgroundImageView;
	PXPlacesImageCache* _imageCache;

}

@property (nonatomic,retain) PKExtendedTraitCollection * extendedTraitCollection;              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,retain) id extendedTraitObserver;                                         //@synthesize extendedTraitObserver=_extendedTraitObserver - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                                             //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) UIImageView * countLabelBackgroundImageView;                      //@synthesize countLabelBackgroundImageView=_countLabelBackgroundImageView - In the implementation block
@property (nonatomic,retain) PXPlacesImageCache * imageCache;                                  //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic) BOOL imageIsPlaceholder;                                          //@synthesize imageIsPlaceholder=_imageIsPlaceholder - In the implementation block
@property (nonatomic,copy) id displayCompletion;                                               //@synthesize displayCompletion=_displayCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_thumbnailCreationOperationQueue;
+(id)_thumbnailFetchOperationQueue;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setImage:(id)arg1 ;
-(void)setAnnotation:(id)arg1 ;
-(PXPlacesImageCache *)imageCache;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setImageCache:(PXPlacesImageCache *)arg1 ;
-(PKExtendedTraitCollection *)extendedTraitCollection;
-(void)setExtendedTraitCollection:(PKExtendedTraitCollection *)arg1 ;
-(UILabel *)countLabel;
-(void)setCountLabel:(UILabel *)arg1 ;
-(id)renderToImage;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 extendedTraitCollection:(id)arg3 imageCache:(id)arg4 ;
-(id)primaryGeotaggable;
-(id)userCacheKey;
-(UIImageView *)countLabelBackgroundImageView;
-(id)_countLabelBackgroundColor;
-(void)_reloadData:(BOOL)arg1 ;
-(void)_fetchImageWithNetworkAccessAllowed:(BOOL)arg1 ;
-(void)_processPlaceHolderForGeotaggable:(id)arg1 ;
-(void)_updatePlaceholderImageIfNeeded;
-(void)_processGeotaggable:(id)arg1 withImage:(CGImageRef)arg2 popoverImageType:(unsigned long long)arg3 shouldCache:(BOOL)arg4 ;
-(void)_processPostImage;
-(void)_reloadCount:(long long)arg1 ;
-(void)_showCountLabel;
-(void)_hideCountLabel;
-(id)displayCompletion;
-(void)setDisplayCompletion:(id)arg1 ;
-(id)extendedTraitObserver;
-(void)setExtendedTraitObserver:(id)arg1 ;
-(void)setCountLabelBackgroundImageView:(UIImageView *)arg1 ;
-(BOOL)imageIsPlaceholder;
-(void)setImageIsPlaceholder:(BOOL)arg1 ;
@end


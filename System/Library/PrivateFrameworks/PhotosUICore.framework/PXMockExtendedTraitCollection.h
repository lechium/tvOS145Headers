/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXExtendedTraitCollection.h>
#import <libobjc.A.dylib/PXMockMutableExtendedTraitCollection.h>

@class PXUpdater;

@interface PXMockExtendedTraitCollection : PXExtendedTraitCollection <PXMockMutableExtendedTraitCollection> {

	PXUpdater* _updater;
	long long _layoutSizeClass;
	long long _layoutOrientation;
	long long _userInterfaceIdiom;
	long long _formFactor;
	unsigned long long _visibleChromeElements;
	double _displayScale;
	CGSize _layoutReferenceSize;
	UIEdgeInsets _safeAreaInsets;

}

@property (assign,nonatomic) long long userInterfaceIdiom;                          //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,nonatomic) long long layoutSizeClass;                             //@synthesize layoutSizeClass=_layoutSizeClass - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                           //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (assign,nonatomic) CGSize layoutReferenceSize;                            //@synthesize layoutReferenceSize=_layoutReferenceSize - In the implementation block
@property (assign,nonatomic) double displayScale;                                   //@synthesize displayScale=_displayScale - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                           //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (assign,nonatomic) long long formFactor;                                  //@synthesize formFactor=_formFactor - In the implementation block
@property (assign,nonatomic) unsigned long long visibleChromeElements;              //@synthesize visibleChromeElements=_visibleChromeElements - In the implementation block
-(void)unregisterObservations;
-(void)registerObservations;
-(long long)userInterfaceIdiom;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(double)displayScale;
-(void)_setNeedsUpdate;
-(id)initWithViewController:(id)arg1 ;
-(void)setDisplayScale:(double)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)didPerformChanges;
-(long long)layoutSizeClass;
-(void)setLayoutSizeClass:(long long)arg1 ;
-(CGSize)layoutReferenceSize;
-(void)setLayoutReferenceSize:(CGSize)arg1 ;
-(long long)formFactor;
-(void)setFormFactor:(long long)arg1 ;
-(unsigned long long)visibleChromeElements;
-(void)setVisibleChromeElements:(unsigned long long)arg1 ;
-(id)initWithLayoutSizeClass:(long long)arg1 ;
-(id)initWithFormFactor:(long long)arg1 orientation:(long long)arg2 visibleChromeElements:(unsigned long long)arg3 ;
-(long long)layoutSizeSubclass;
-(void)_invalidateLayoutSizeClass;
-(void)_updateLayoutSizeClass;
-(void)_invalidateLayoutReferenceSizeAndDisplayScale;
-(void)_updateLayoutReferenceSizeAndDisplayScale;
-(void)_invalidateSafeAreaInsets;
-(void)_updateSafeAreaInsets;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXExtendedTraitCollection, NSString;

@interface PXCuratedLibraryStyleGuide : PXObservable <PXChangeObserver> {

	double _lateralMargin;
	long long _secondaryToolbarPlacement;
	long long _toggleAspectFitButtonPlacement;
	long long _zoomButtonsButtonPlacement;
	PXExtendedTraitCollection* _extendedTraitCollection;
	long long _buttonStyle;
	CGSize _secondaryToolbarSize;
	UIEdgeInsets _secondaryToolbarPadding;
	UIEdgeInsets _secondaryToolbarContentInsets;

}

@property (nonatomic,readonly) PXExtendedTraitCollection * extendedTraitCollection;              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (assign,nonatomic) double lateralMargin;                                               //@synthesize lateralMargin=_lateralMargin - In the implementation block
@property (assign,nonatomic) long long buttonStyle;                                              //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (assign,nonatomic) long long secondaryToolbarPlacement;                                //@synthesize secondaryToolbarPlacement=_secondaryToolbarPlacement - In the implementation block
@property (assign,nonatomic) CGSize secondaryToolbarSize;                                        //@synthesize secondaryToolbarSize=_secondaryToolbarSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets secondaryToolbarContentInsets;                         //@synthesize secondaryToolbarContentInsets=_secondaryToolbarContentInsets - In the implementation block
@property (assign,nonatomic) long long toggleAspectFitButtonPlacement;                           //@synthesize toggleAspectFitButtonPlacement=_toggleAspectFitButtonPlacement - In the implementation block
@property (assign,nonatomic) long long zoomButtonsButtonPlacement;                               //@synthesize zoomButtonsButtonPlacement=_zoomButtonsButtonPlacement - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets secondaryToolbarPadding;                             //@synthesize secondaryToolbarPadding=_secondaryToolbarPadding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_invalidate;
-(void)_update;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setLateralMargin:(double)arg1 ;
-(double)lateralMargin;
-(id)initWithExtendedTraitCollection:(id)arg1 ;
-(void)setButtonStyle:(long long)arg1 ;
-(void)setSecondaryToolbarPlacement:(long long)arg1 ;
-(void)setSecondaryToolbarSize:(CGSize)arg1 ;
-(void)setSecondaryToolbarContentInsets:(UIEdgeInsets)arg1 ;
-(void)setToggleAspectFitButtonPlacement:(long long)arg1 ;
-(void)setZoomButtonsButtonPlacement:(long long)arg1 ;
-(long long)secondaryToolbarPlacement;
-(CGSize)secondaryToolbarSize;
-(UIEdgeInsets)secondaryToolbarPadding;
-(UIEdgeInsets)secondaryToolbarContentInsets;
-(long long)toggleAspectFitButtonPlacement;
-(long long)zoomButtonsButtonPlacement;
-(PXExtendedTraitCollection *)extendedTraitCollection;
-(long long)buttonStyle;
@end


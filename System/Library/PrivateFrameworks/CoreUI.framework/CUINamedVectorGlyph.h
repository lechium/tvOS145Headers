/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class CUICatalog;

@interface CUINamedVectorGlyph : CUINamedLookup {

	double _pointSize;
	double _lookedupScaleFactor;
	CGImageRef _cgImageRef;
	double _fontMatchingScaleFactor;
	CUICatalog* _catalog;
	long long _layoutDirection;
	unsigned _generatedImage : 1;
	unsigned _flippable : 1;

}

@property (assign,nonatomic) double fontMatchingScaleFactor; 
@property (nonatomic,readonly) double baselineOffset; 
@property (nonatomic,readonly) double capHeight; 
@property (nonatomic,readonly) CGRect alignmentRect; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) BOOL isFlippable; 
@property (nonatomic,readonly) float templateVersion; 
@property (nonatomic,readonly) double baselineOffsetUnrounded; 
@property (nonatomic,readonly) double capHeightUnrounded; 
@property (nonatomic,readonly) CGRect contentBoundsUnrounded; 
@property (nonatomic,readonly) CGRect alignmentRectUnrounded; 
@property (nonatomic,readonly) unsigned long long numberOfLayers; 
+(id)_knockoutStyleNames;
+(id)_colorStyleNames;
-(id)configuration;
-(id)UIImageWithAsset:(id)arg1 configuration:(id)arg2 flippedHorizontally:(BOOL)arg3 ;
-(id)debugDescription;
-(void)dealloc;
-(double)scale;
-(CGImageRef)image;
-(unsigned long long)numberOfLayers;
-(id)knownAvailableVectorSizes;
-(long long)layoutDirection;
-(long long)glyphSize;
-(long long)glyphWeight;
-(BOOL)isFlippable;
-(double)pointSize;
-(double)referencePointSize;
-(double)fontMatchingScaleFactor;
-(double)_requestedPointSizeRatio;
-(CGImageRef)_imageForTemplateRendering:(BOOL)arg1 withColorResolver:(/*^block*/id)arg2 ;
-(float)templateVersion;
-(BOOL)_containsKnockoutStylesFromRendition:(id)arg1 ;
-(void)_prepareDocumentfromRendition:(id)arg1 withColorResolver:(/*^block*/id)arg2 ;
-(id)_fillColorsOfStylesNamed:(id)arg1 inDocument:(CGSVGDocumentRef)arg2 ;
-(CGImageRef)_rasterizeFromRendition:(id)arg1 imageUsingScaleFactor:(double)arg2 forTargetSize:(CGSize)arg3 ;
-(void)_performWithLockedRendition:(/*^block*/id)arg1 ;
-(CGImageRef)imageWithColorResolver:(/*^block*/id)arg1 ;
-(CGColorRef)_fillColorOfStyle:(CGSVGAttributeMapRef)arg1 ;
-(CGRect)alignmentRect;
-(double)baselineOffset;
-(void)_setFillColor:(CGColorRef)arg1 ofStyle:(CGSVGAttributeMapRef)arg2 ;
-(CGImageRef)imageTintedWithColors:(id)arg1 ;
-(id)makeLayerTintedWithColors:(id)arg1 ;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 ;
-(id)initWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 pointSize:(double)arg4 fromCatalog:(id)arg5 usingRenditionKey:(id)arg6 fromTheme:(unsigned long long)arg7 ;
-(double)baselineOffsetUnrounded;
-(double)capHeightUnrounded;
-(double)capHeight;
-(id)makeLayerWithColorResolver:(/*^block*/id)arg1 ;
-(CGRect)alignmentRectUnrounded;
-(CGRect)contentBoundsUnrounded;
-(CGRect)contentBounds;
-(CGSVGDocumentRef)referenceGlyph;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 withColorResolver:(/*^block*/id)arg3 ;
-(void)setFontMatchingScaleFactor:(double)arg1 ;
-(BOOL)generatedImage;
-(BOOL)layerAtIndexContainsColor:(unsigned long long)arg1 ;
-(CGImageRef)maskForLayerAtIndex:(unsigned long long)arg1 ;
-(CGImageRef)imageTintedWithColor:(CGColorRef)arg1 ;
-(id)makeLayerTintedWithColor:(CGColorRef)arg1 ;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 withTintColors:(id)arg3 ;
@end


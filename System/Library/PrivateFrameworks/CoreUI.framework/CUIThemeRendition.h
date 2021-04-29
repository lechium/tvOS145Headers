/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSData, NSDictionary;

@interface CUIThemeRendition : NSObject {

	renditionkeytoken _stackKey[22];
	renditionkeytoken* _key;
	long long _type;
	unsigned _subtype;
	unsigned _scale;
	int _exifOrientation;
	int _blendMode;
	struct {
		unsigned isVectorBased : 1;
		unsigned isOpaque : 1;
		unsigned bitmapEncoding : 4;
		unsigned optOutOfThinning : 1;
		unsigned isFlippable : 1;
		unsigned isTintable : 1;
		unsigned preservedVectorRepresentation : 1;
		unsigned reserved : 22;
	}  _renditionFlags;
	long long _templateRenderingMode;
	unsigned long long _colorSpaceID;
	NSString* _name;
	NSData* _srcData;
	double _opacity;
	NSString* _utiType;
	CGImageRef _uncroppedImage;
	CGSize _physicalSizeInMeters;
	NSDictionary* _properties;

}

@property (assign,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned subtype;                                     //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned internalScale;                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long internalTemplateRenderingMode;              //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (nonatomic,retain) NSString * internalName; 
@property (nonatomic,readonly) NSData * srcData;                                   //@synthesize srcData=_srcData - In the implementation block
@property (assign,nonatomic) double opacity;                                       //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                                        //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) int exifOrientation;                                  //@synthesize exifOrientation=_exifOrientation - In the implementation block
+(id)displayNameForRenditionType:(long long)arg1 ;
+(Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned)arg2 ;
-(id)name;
-(id)description;
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(id)data;
-(long long)type;
-(void)setName:(id)arg1 ;
-(id)properties;
-(const renditionkeytoken*)key;
-(double)scale;
-(unsigned)subtype;
-(int)pixelFormat;
-(BOOL)isOpaque;
-(id)metrics;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setSubtype:(unsigned)arg1 ;
-(CGColorRef)cgColor;
-(NSString *)internalName;
-(id)provideTextureInfo;
-(int)exifOrientation;
-(void)setExifOrientation:(int)arg1 ;
-(CGImageRef)uncroppedImage;
-(CGSize)physicalSizeInMeters;
-(BOOL)isFlippable;
-(double)vectorGlyphBaseline;
-(double)vectorGlyphCapLine;
-(double)vectorGlyphReferencePointSize;
-(id)vectorGlyphAvailableSizes;
-(CGSVGDocumentRef)svgDocument;
-(SCD_Struct_CS11)vectorGlyphAlignmentRectInsets;
-(float)vectorGlyphTemplateVersion;
-(id)contentNames;
-(id)layerReferences;
-(CGImageRef)unslicedImage;
-(id)linkingToRendition;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)systemColorName;
-(BOOL)substituteWithSystemColor;
-(unsigned short)valueForTokenIdentifier:(unsigned short)arg1 ;
-(id)sizeIndexes;
-(long long)templateRenderingMode;
-(BOOL)optOutOfThinning;
-(BOOL)preservedVectorRepresentation;
-(BOOL)isTintable;
-(int)blendMode;
-(unsigned)gradientStyle;
-(unsigned long long)colorSpaceID;
-(id)utiType;
-(BOOL)isVectorBased;
-(id)gradient;
-(id)effectPreset;
-(void)setBlendMode:(int)arg1 ;
-(CGSize)originalUncroppedSize;
-(int)objectVersion;
-(SCD_Struct_CS10)transformation;
-(id)modelAsset;
-(id)modelMesh;
-(id)modelSubmesh;
-(unsigned)internalScale;
-(void)setInternalScale:(unsigned)arg1 ;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(id)_initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(CGPDFDocumentRef)pdfDocument;
-(const csitextstyle*)csiTextStyle;
-(void)_initializeRenditionKey:(const renditionkeytoken*)arg1 ;
-(NSData *)srcData;
-(CGImageRef)createImageFromPDFRenditionWithScale:(double)arg1 ;
-(id)assetPackIdentifier;
-(id)externalTags;
-(BOOL)isTiled;
-(id)imageForSliceIndex:(long long)arg1 ;
-(BOOL)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(BOOL)edgesOnly;
-(id)sliceInformation;
-(double)gradientDrawingAngle;
-(cuithemerenditionrenditionflags*)renditionFlags;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
-(CGRect)alphaCroppedRect;
-(unsigned long long)sourceRowbytes;
-(CGSize)unslicedSize;
-(id)mipLevels;
-(id)textureImages;
-(long long)textureIntepretation;
-(void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1 ;
-(id)_sourceRendition;
-(int)bitmapEncoding;
-(CGRect)_destinationFrame;
-(BOOL)isInternalLink;
-(void)_initializeCompositingOptionsFromCSIData:(const csiheader*)arg1 ;
-(void)_initializePropertiesFromCSIData:(const csiheader*)arg1 ;
-(void)setInternalName:(NSString *)arg1 ;
-(void)_setFlippable:(BOOL)arg1 ;
-(long long)internalTemplateRenderingMode;
-(void)setInternalTemplateRenderingMode:(long long)arg1 ;
@end


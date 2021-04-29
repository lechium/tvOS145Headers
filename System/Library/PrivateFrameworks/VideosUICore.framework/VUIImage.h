/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideosUICore/VideosUICore-Structs.h>
@class NSURL, NSData, NSString;

@interface VUIImage : NSObject {

	CGImageRef _image;
	CGImageSourceRef _imageSource;
	double _imageWidth;
	double _imageHeight;
	int _imageOrientation;
	BOOL _enableCache;
	BOOL _cacheImmediately;
	NSURL* _imageURL;
	NSData* _imageData;
	NSString* _imageType;
	BOOL _imageBufferInMemory;
	BOOL _rotationEnabled;

}

@property (nonatomic,readonly) int orientation;                 //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (assign,nonatomic) BOOL rotationEnabled;              //@synthesize rotationEnabled=_rotationEnabled - In the implementation block
+(id)imageWithData:(id)arg1 ;
+(id)imageWithURL:(id)arg1 ;
+(id)imageWithPath:(id)arg1 ;
+(id)imageWithCGImageRef:(CGImageRef)arg1 preserveAlpha:(BOOL)arg2 ;
+(id)imageWithPath:(id)arg1 cacheImmediately:(BOOL)arg2 ;
+(id)imageWithURL:(id)arg1 cacheImmediately:(BOOL)arg2 ;
+(id)imageWithCGImageRef:(CGImageRef)arg1 imageOrientation:(long long)arg2 preserveAlpha:(BOOL)arg3 ;
+(id)imageWithRotationFromURL:(id)arg1 ;
+(int)exifOrientationForImageOrientation:(long long)arg1 ;
+(long long)imageOrientationForExifOrientation:(int)arg1 ;
+(id)imageWithRotationFromPath:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(int)orientation;
-(CGImageRef)image;
-(float)aspectRatio;
-(id)imageType;
-(BOOL)hasAlpha;
-(BOOL)isPowerOfTwo;
-(void)setRotationEnabled:(BOOL)arg1 ;
-(BOOL)rotationEnabled;
-(id)uiImage;
-(id)initWithURL:(id)arg1 cacheImmediately:(BOOL)arg2 ;
-(id)initWithCGImageRef:(CGImageRef)arg1 imageOrientation:(long long)arg2 preserveAlpha:(BOOL)arg3 ;
-(id)_initWithCGImageSourceRotationEnabled:(CGImageSourceRef)arg1 ;
-(id)initWithCGImageRef:(CGImageRef)arg1 preserveAlpha:(BOOL)arg2 ;
-(long long)_uiImageOrientation;
-(void)_initializeCGImageWithRotation;
-(CGSize)pixelBounds;
-(CGRect)largestSquareRect;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(BOOL)sourceRequiresRotation;
-(void)setEnableCache:(BOOL)arg1 ;
-(BOOL)enableCache;
-(id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)arg1 ;
-(BOOL)isImageBufferInMemory;
@end

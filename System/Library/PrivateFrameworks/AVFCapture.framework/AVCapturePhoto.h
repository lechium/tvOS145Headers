/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCapturePhotoInternal, NSDictionary, AVDepthData, AVPortraitEffectsMatte, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings, NSString;

@interface AVCapturePhoto : NSObject {

	AVCapturePhotoInternal* _internal;

}

@property (readonly) SCD_Struct_AV0 timestamp; 
@property (getter=isRawPhoto,readonly) BOOL rawPhoto; 
@property (readonly) CVBufferRef pixelBuffer; 
@property (readonly) CVBufferRef previewPixelBuffer; 
@property (readonly) NSDictionary * embeddedThumbnailPhotoFormat; 
@property (readonly) AVDepthData * depthData; 
@property (readonly) AVPortraitEffectsMatte * portraitEffectsMatte; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
@property (readonly) AVCaptureResolvedPhotoSettings * resolvedSettings; 
@property (readonly) long long photoCount; 
@property (readonly) NSString * sourceDeviceType; 
+(void)initialize;
+(id)AVFileTypeFromFigCaptureStillImageSettingsFileType:(int)arg1 codec:(unsigned)arg2 unresolvedSettings:(id)arg3 ;
-(id)description;
-(id)debugDescription;
-(void)dealloc;
-(SCD_Struct_AV0)timestamp;
-(NSDictionary *)metadata;
-(unsigned)_orientation;
-(CVBufferRef)pixelBuffer;
-(AVDepthData *)depthData;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(AVPortraitEffectsMatte *)portraitEffectsMatte;
-(id)portraitMetadata;
-(long long)photoCount;
-(AVCaptureResolvedPhotoSettings *)resolvedSettings;
-(id)processedFileType;
-(CVBufferRef)previewPixelBuffer;
-(NSDictionary *)embeddedThumbnailPhotoFormat;
-(BOOL)isRawPhoto;
-(id)bracketSettings;
-(long long)sequenceCount;
-(NSString *)sourceDeviceType;
-(unsigned)expectedPhotoProcessingFlags;
-(unsigned)actualPhotoProcessingFlags;
-(id)privateClientMetadata;
-(long long)lensStabilizationStatus;
-(CVBufferRef)_embeddedThumbnailSourcePixelBuffer;
-(id)semanticSegmentationMatteForType:(id)arg1 ;
-(id)_defaultRawCompressionSettings;
-(int)_maximumAppleProRAWBitDepth;
-(id)_fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(CVBufferRef)arg3 replacementDepthData:(id)arg4 replacementPortraitEffectsMatte:(id)arg5 replacementHairSegmentationMatte:(id)arg6 replacementSkinSegmentationMatte:(id)arg7 replacementTeethSegmentationMatte:(id)arg8 replacementGlassesSegmentationMatte:(id)arg9 replacementRawCompressionSettings:(id)arg10 exceptionReason:(id*)arg11 ;
-(id)fileDataRepresentation;
-(id)livePhotoMovieFileURL;
-(id)initWithTimestamp:(SCD_Struct_AV0)arg1 photoSurface:(IOSurfaceRef)arg2 photoSurfaceSize:(unsigned long long)arg3 processedFileType:(id)arg4 previewPhotoSurface:(IOSurfaceRef)arg5 embeddedThumbnailSourceSurface:(IOSurfaceRef)arg6 metadata:(id)arg7 depthDataSurface:(IOSurfaceRef)arg8 depthMetadataDictionary:(id)arg9 portraitEffectsMatteSurface:(IOSurfaceRef)arg10 portraitEffectsMatteMetadataDictionary:(id)arg11 hairSegmentationMatteSurface:(IOSurfaceRef)arg12 hairSegmentationMatteMetadataDictionary:(id)arg13 skinSegmentationMatteSurface:(IOSurfaceRef)arg14 skinSegmentationMatteMetadataDictionary:(id)arg15 teethSegmentationMatteSurface:(IOSurfaceRef)arg16 teethSegmentationMatteMetadataDictionary:(id)arg17 glassesSegmentationMatteSurface:(IOSurfaceRef)arg18 glassesSegmentationMatteMetadataDictionary:(id)arg19 captureRequest:(id)arg20 bracketSettings:(id)arg21 sequenceCount:(unsigned long long)arg22 photoCount:(unsigned long long)arg23 expectedPhotoProcessingFlags:(unsigned)arg24 sourceDeviceType:(id)arg25 ;
-(id)fileDataRepresentationWithCustomizer:(id)arg1 ;
-(CGImageRef)CGImageRepresentation;
-(CGImageRef)previewCGImageRepresentation;
@end


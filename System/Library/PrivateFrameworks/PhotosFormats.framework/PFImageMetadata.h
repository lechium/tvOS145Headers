/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFImageMetadata : NSObject
+(BOOL)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
+(id)valueFromCGImageProperties:(id)arg1 dictionaryKey:(const void*)arg2 key:(const void*)arg3 ;
+(BOOL)readMetadataValueFromImageAtFileURL:(id)arg1 dictionaryKey:(const void*)arg2 key:(const void*)arg3 value:(id*)arg4 error:(id*)arg5 ;
+(id)imagePropertiesByRemovingKey:(const void*)arg1 dictionaryKey:(const void*)arg2 fromImageProperties:(id)arg3 ;
+(BOOL)readMetadataType:(unsigned char)arg1 fromCGImageProperties:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
+(BOOL)metadataTypeRequiresImageSourceAuxiliaryImage:(unsigned char)arg1 ;
+(BOOL)writeMetadataType:(unsigned char)arg1 value:(id)arg2 toCGImageProperties:(id)arg3 error:(id*)arg4 ;
+(BOOL)queryImagePropertiesOfFileAtURL:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(BOOL)enumerateImageSourceIndexesOfFileAtURL:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(id)auxiliaryImagesToPreserveForDerivativesFromImageSource:(CGImageSourceRef)arg1 imageIndex:(unsigned long long)arg2 ;
+(id)auxiliaryImageIdentifiersToPreserveForDerivatives;
+(id)transformAuxiliaryImages:(id)arg1 scaleFactor:(double)arg2 applyingOrientation:(unsigned)arg3 ;
+(id)dictionaryRepresentationForAuxiliaryImagePixelBuffer:(CVBufferRef)arg1 metadata:(CGImageMetadataRef)arg2 ;
+(CGImageRef)createImageRefFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned)arg2 scaleFactor:(double)arg3 ;
+(id)cIImageFromPixelBuffer:(CVBufferRef)arg1 applyingOrientation:(unsigned)arg2 scaleFactor:(double)arg3 ;
+(CVBufferRef)createPixelBufferFromAuxiliaryImageInfo:(id)arg1 ;
+(id)cIImageFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned)arg2 scaleFactor:(double)arg3 ;
+(CGImageRef)createImageRefFromAuxiliaryImagePixelBuffer:(CVBufferRef)arg1 applyingOrientation:(unsigned)arg2 scaleFactor:(double)arg3 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextRecognition/TextRecognition-Structs.h>
#import <TextRecognition/CRNeuralTextDetector.h>

@class CRTextDetectorModel;

@interface CRNeuralTextDetectorV2 : CRNeuralTextDetector {

	CRTextDetectorModel* _model;

}

@property (retain) CRTextDetectorModel * model;              //@synthesize model=_model - In the implementation block
+(CGSize)smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(CGSize)arg2 ;
+(void)calculateTargetOutputSize:(CGSize*)arg1 adjustedInputScale:(double*)arg2 paddedSize:(CGSize*)arg3 imageSize:(CGSize)arg4 maximumSize:(CGSize)arg5 ;
+(vector<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>, std::__1::allocator<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>>>*)createGeometricMaps:(CGSize)arg1 ;
+(void)aggregateScoreAndGeoMap:(id)arg1 inputGeo:(id)arg2 targetSize:(CGSize)arg3 outputScoreMap:(vImage_Buffer*)arg4 outputGeoMap:(vector<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>, std::__1::allocator<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>>>*)arg5 outputOrigin:(CGPoint)arg6 ;
+(void)getMasksForScoreMap:(vImage_Buffer*)arg1 imageMask:(vImage_Buffer*)arg2 binaryMask:(vImage_Buffer*)arg3 ;
+(unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>*)createImageMap:(id)arg1 targetSize:(CGSize)arg2 ;
+(void)scaleBufferNearestNeighbor:(vImage_Buffer*)arg1 geoMap:(vector<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>, std::__1::allocator<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>>>*)arg2 dest:(vImage_Buffer*)arg3 destGeomap:(vector<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>, std::__1::allocator<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>>>*)arg4 binaryMask:(vImage_Buffer*)arg5 ;
+(void)genPolyResultsForMIVSNMS:(vImage_Buffer*)arg1 geoMap:(vector<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>, std::__1::allocator<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>>>*)arg2 targetSize:(CGSize)arg3 output:(vector<CRDetectorUtils::CRTextDetectorQuadFeature, std::__1::allocator<CRDetectorUtils::CRTextDetectorQuadFeature>>*)arg4 mergingType:(int)arg5 ;
+(void)convertVImageScoreMap:(vImage_Buffer*)arg1 toVector:(vector<float, std::__1::allocator<float>>*)arg2 ;
+(void)convertVImageGeoMaps:(vector<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>, std::__1::allocator<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>>>*)arg1 toVector:(vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>*)arg2 ;
-(id)init;
-(CRTextDetectorModel *)model;
-(void)setModel:(CRTextDetectorModel *)arg1 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)processScoreMap:(vImage_Buffer*)arg1 geoMap:(vector<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>, std::__1::allocator<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>>>*)arg2 adjustedSize:(CGSize)arg3 scoreMapFullTile:(vImage_Buffer*)arg4 geoMapFullTile:(vector<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>, std::__1::allocator<std::__1::unique_ptr<CRImageBuffer, std::__1::default_delete<CRImageBuffer>>>>*)arg5 adjustedFullTileSize:(CGSize)arg6 targetSize:(CGSize)arg7 targetSizeFullTile:(CGSize)arg8 intermediateResults:(id*)arg9 ;
-(id)detectInImage:(id)arg1 error:(id*)arg2 ;
@end


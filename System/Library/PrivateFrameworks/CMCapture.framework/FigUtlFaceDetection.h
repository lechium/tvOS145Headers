/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class VNImageRequestHandler, NSArray, FigUtlROIProcessor;

@interface FigUtlFaceDetection : NSObject {

	VNImageRequestHandler* _requestHandler;
	NSArray* _faces;
	unsigned _pixelFormat;
	float _landmarksModelFraction;
	FigUtlROIProcessor* _roi;

}

@property (nonatomic,readonly) FigUtlROIProcessor * roi;              //@synthesize roi=_roi - In the implementation block
@property (readonly) BOOL isBlinking; 
@property (readonly) float blink; 
@property (readonly) int landmarkCount; 
+(id)createFaceLandmarksRequest:(float)arg1 ;
+(BOOL)prewarmBoxAlignmentAndLandmarksDetectorUsingFractionOfLandmarksModelFile:(float)arg1 ;
+(void)deallocateResources;
-(BOOL)start;
-(void)end;
-(BOOL)isBlinking;
-(id)initWithMaxImageWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned)arg3 landmarksModelFraction:(float)arg4 ;
-(BOOL)computeQuality:(CVBufferRef)arg1 orientation:(int)arg2 rectangle:(CGRect)arg3 quality:(float*)arg4 alignedRectangle:(CGRect*)arg5 ;
-(BOOL)computeLandmarks;
-(float)blink;
-(int)landmarkCount;
-(CGPoint)landmark:(int)arg1 ;
-(FigUtlROIProcessor *)roi;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreImage/CoreImage-Structs.h>
@class CIImage, CIContext;

@interface CIPerspectiveAutoCalc : NSObject {

	CIImage* img;
	CIContext* ctx;
	SCD_Struct_CI31 config;
	double pitch;
	double yaw;
	double roll;
	double confidence;
	CIImage* debugImage;
	long long pitchFailureReason;
	long long yawFailureReason;
	BOOL generateDebugImage;

}

@property (readonly) double pitch; 
@property (readonly) double yaw; 
@property (readonly) double roll; 
@property (readonly) double confidence; 
@property (assign) BOOL generateDebugImage; 
@property (readonly) CIImage * debugImage; 
@property (readonly) long long pitchFailureReason; 
@property (readonly) long long yawFailureReason; 
-(void)dealloc;
-(double)confidence;
-(id)initWithContext:(id)arg1 image:(id)arg2 config:(const SCD_Struct_CI32*)arg3 ;
-(BOOL)compute;
-(double)pitch;
-(double)yaw;
-(double)roll;
-(BOOL)generateDebugImage;
-(void)setGenerateDebugImage:(BOOL)arg1 ;
-(CIImage *)debugImage;
-(long long)pitchFailureReason;
-(long long)yawFailureReason;
@end


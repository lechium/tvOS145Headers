/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMIVideoFrameSamplerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIVideoPackageAnalyzerDelegate;
@class HMIVideoFrameIntervalSampler, HMIAverageImage, CIFilter, HMIPackageCandidateDetectorConfiguration, HMIPackageCandidateDetector, NSString;

@interface HMIVideoPackageAnalyzer : HMIVideoProcessingNode <HMIVideoFrameSamplerDelegate, HMFLogging> {

	int _detectionFps;
	int _currentFrameIndex;
	id<HMIVideoPackageAnalyzerDelegate> _delegate;
	HMIVideoFrameIntervalSampler* _sampler;
	double _prerollLengthSeconds;
	HMIAverageImage* _averageImage;
	CIFilter* _scaleFilter;
	HMIPackageCandidateDetectorConfiguration* _candidateConfig;
	HMIPackageCandidateDetector* _candidateDetector;

}

@property (readonly) HMIVideoFrameIntervalSampler * sampler;                                //@synthesize sampler=_sampler - In the implementation block
@property (readonly) int detectionFps;                                                      //@synthesize detectionFps=_detectionFps - In the implementation block
@property (readonly) double prerollLengthSeconds;                                           //@synthesize prerollLengthSeconds=_prerollLengthSeconds - In the implementation block
@property (readonly) HMIAverageImage * averageImage;                                        //@synthesize averageImage=_averageImage - In the implementation block
@property (assign) int currentFrameIndex;                                                   //@synthesize currentFrameIndex=_currentFrameIndex - In the implementation block
@property (retain) CIFilter * scaleFilter;                                                  //@synthesize scaleFilter=_scaleFilter - In the implementation block
@property (retain) HMIPackageCandidateDetectorConfiguration * candidateConfig;              //@synthesize candidateConfig=_candidateConfig - In the implementation block
@property (retain) HMIPackageCandidateDetector * candidateDetector;                         //@synthesize candidateDetector=_candidateDetector - In the implementation block
@property (__weak) id<HMIVideoPackageAnalyzerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(id<HMIVideoPackageAnalyzerDelegate>)delegate;
-(void)setDelegate:(id<HMIVideoPackageAnalyzerDelegate>)arg1 ;
-(HMIVideoFrameIntervalSampler *)sampler;
-(int)currentFrameIndex;
-(void)setCurrentFrameIndex:(int)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)frameSampler:(id)arg1 didSampleFrame:(opaqueCMSampleBufferRef)arg2 ;
-(id)initWithDetectionFps:(float)arg1 prerollLengthSeconds:(double)arg2 ;
-(double)prerollLengthSeconds;
-(int)detectionFps;
-(HMIAverageImage *)averageImage;
-(HMIPackageCandidateDetector *)candidateDetector;
-(void)setCandidateDetector:(HMIPackageCandidateDetector *)arg1 ;
-(CIFilter *)scaleFilter;
-(void)setScaleFilter:(CIFilter *)arg1 ;
-(HMIPackageCandidateDetectorConfiguration *)candidateConfig;
-(void)setCandidateConfig:(HMIPackageCandidateDetectorConfiguration *)arg1 ;
@end


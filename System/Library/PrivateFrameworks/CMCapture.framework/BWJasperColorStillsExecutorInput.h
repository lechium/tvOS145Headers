/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>

@protocol BWJasperColorStillsExecutorInputDelegate;
@class NSMutableArray, NSArray;

@interface BWJasperColorStillsExecutorInput : BWStillImageProcessorInput {

	id<BWJasperColorStillsExecutorInputDelegate> _delegate;
	NSMutableArray* _pointClouds;
	SCD_Struct_BW7 _colorBufferPTS;
	double _colorBufferExposureTime;
	opaqueCMSampleBufferRef _colorBuffer;
	unsigned long long _colorBufferType;
	int _numberOfPointCloudsRequired;
	int _maxinimumNumberOfPointCLouds;
	BOOL _skipProcessing;

}

@property (nonatomic,retain) id<BWJasperColorStillsExecutorInputDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isReadyToExecute,nonatomic,readonly) BOOL readyToExecute; 
@property (nonatomic,readonly) NSArray * pointClouds;                                            //@synthesize pointClouds=_pointClouds - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef colorBuffer;                              //@synthesize colorBuffer=_colorBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long colorBufferType;                               //@synthesize colorBufferType=_colorBufferType - In the implementation block
@property (nonatomic,readonly) BOOL needMorePointClouds; 
@property (assign,nonatomic) BOOL skipProcessing;                                                //@synthesize skipProcessing=_skipProcessing - In the implementation block
-(void)dealloc;
-(id<BWJasperColorStillsExecutorInputDelegate>)delegate;
-(void)setDelegate:(id<BWJasperColorStillsExecutorInputDelegate>)arg1 ;
-(id)initWithSettings:(id)arg1 portType:(id)arg2 ;
-(BOOL)isReadyToExecute;
-(BOOL)needMorePointClouds;
-(void)addPointCloud:(opaqueCMSampleBufferRef)arg1 ;
-(void)setColorBufferPTS:(SCD_Struct_BW7)arg1 exposureTime:(double)arg2 ;
-(void)setColorBuffer:(opaqueCMSampleBufferRef)arg1 type:(unsigned long long)arg2 ;
-(void)executeNow;
-(void)_trimPointClouds;
-(NSArray *)pointClouds;
-(unsigned long long)colorBufferType;
-(opaqueCMSampleBufferRef)colorBuffer;
-(BOOL)skipProcessing;
-(void)setSkipProcessing:(BOOL)arg1 ;
@end


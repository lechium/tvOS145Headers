/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, NSArray, FigCaptureStillImageSettings, BWStillImageCaptureSettings, NSMutableArray, FigCapturePixelConverter, BWPixelBufferPool;

@interface BWHDRNode : BWNode {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	int _clientPID;
	NSDictionary* _sensorIDDictionary;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	int _bracketCount;
	NSArray* _exposureValues;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	opaqueCMSampleBuffer* _pendingBracketBuffers[3];
	BOOL _preBracketedFrameExpected;
	BOOL _preBracketedFrameReceived;
	NSMutableArray* _receivedNodeErrors;
	unsigned _emittedFrameOrErrorCount;
	BOOL _alwaysRequestsPreBracketedEV0;
	BOOL _supportsStereoFusionCaptures;
	FigCapturePixelConverter* _stereoFusionPixelConverter;
	BWPixelBufferPool* _telephotoHDREV0DisparityBufferPool;
	opaqueCMFormatDescriptionRef _telephotoHDREV0DisparityFormatDescription;
	OpaqueVTPixelTransferSessionRef _telephotoHDREV0DisparityCopySession;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(int)_setupSampleBufferProcessor;
-(void)_clearCaptureRequestState;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1 ;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 ;
-(void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg1 ;
-(BOOL)alwaysRequestsPreBracketedEV0;
-(id)initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2 ;
-(void)setSupportsStereoFusionCaptures:(BOOL)arg1 ;
-(id)_initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(/*function pointer*/void*)arg3 ;
-(BOOL)_receivedExpectedNumberOfInputFramesOrErrors;
-(void)_emitNodeErrorToReportFailedOutputFrame;
-(void)_hdrProcessorOutputReady:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_emitNodeErrorsIfNecessary;
-(BOOL)supportsStereoFusionCaptures;
@end


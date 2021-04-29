/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSArray, NSDictionary, BWNodeOutput;

@interface BWStillImageBufferRouterNode : BWNode {

	BOOL _usingBravoDevice;
	BOOL _usingPearlDevice;
	BOOL _HDRSupported;
	BOOL _SISSupported;
	BOOL _GNRSISSupported;
	BOOL _LTMHDRSupported;
	NSArray* _inputPortTypes;
	NSDictionary* _portTypeToInput;
	BWNodeOutput* _defaultOutput;
	BWNodeOutput* _HDROutput;
	BWNodeOutput* _SISOutput;
	BWNodeOutput* _bravoTelephotoOutput;
	BWNodeOutput* _pearlInfraredOutput;

}

@property (nonatomic,readonly) BWNodeOutput * defaultOutput;                          //@synthesize defaultOutput=_defaultOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * HDROutput;                              //@synthesize HDROutput=_HDROutput - In the implementation block
@property (setter=ISOutput,nonatomic,readonly) BWNodeOutput * SISOutput;              //@synthesize SISOutput=_SISOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * bravoTelephotoOutput;                   //@synthesize bravoTelephotoOutput=_bravoTelephotoOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * pearlInfraredOutput;                    //@synthesize pearlInfraredOutput=_pearlInfraredOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2 ;
-(id)inputForPortType:(id)arg1 ;
-(BWNodeOutput *)defaultOutput;
-(id)_outputForInput:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 metadata:(id)arg3 ;
-(id)_defaultOutputsForInput:(id)arg1 ;
-(id)initWithInputPortTypes:(id)arg1 HDRSupported:(BOOL)arg2 SISSupported:(BOOL)arg3 GNRSISSupported:(BOOL)arg4 LTMHDRSupported:(BOOL)arg5 depthDataDeliveryEnabled:(BOOL)arg6 ;
-(BWNodeOutput *)HDROutput;
-(BWNodeOutput *)SISOutput;
-(BWNodeOutput *)bravoTelephotoOutput;
-(BWNodeOutput *)pearlInfraredOutput;
@end


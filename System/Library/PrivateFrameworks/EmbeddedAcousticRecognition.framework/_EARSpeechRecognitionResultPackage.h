/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _EARSpeechRecognition, _EARAudioAnalytics, _EARLatticeMitigatorResult;

@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying> {

	BOOL _recognitionIsFormatted;
	BOOL _isFinal;
	_EARSpeechRecognition* _recognition;
	_EARSpeechRecognition* _preITNRecognition;
	_EARAudioAnalytics* _audioAnalytics;
	double _utteranceStart;
	_EARLatticeMitigatorResult* _latticeMitigatorResult;

}

@property (assign,nonatomic) BOOL isFinal;                                                            //@synthesize isFinal=_isFinal - In the implementation block
@property (nonatomic,copy,readonly) _EARSpeechRecognition * recognition;                              //@synthesize recognition=_recognition - In the implementation block
@property (nonatomic,copy,readonly) _EARSpeechRecognition * preITNRecognition;                        //@synthesize preITNRecognition=_preITNRecognition - In the implementation block
@property (nonatomic,readonly) BOOL recognitionIsFormatted;                                           //@synthesize recognitionIsFormatted=_recognitionIsFormatted - In the implementation block
@property (nonatomic,copy,readonly) _EARAudioAnalytics * audioAnalytics;                              //@synthesize audioAnalytics=_audioAnalytics - In the implementation block
@property (nonatomic,readonly) double utteranceStart;                                                 //@synthesize utteranceStart=_utteranceStart - In the implementation block
@property (nonatomic,copy,readonly) _EARLatticeMitigatorResult * latticeMitigatorResult;              //@synthesize latticeMitigatorResult=_latticeMitigatorResult - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(_EARAudioAnalytics *)audioAnalytics;
-(_EARSpeechRecognition *)recognition;
-(BOOL)isFinal;
-(double)utteranceStart;
-(void)setIsFinal:(BOOL)arg1 ;
-(id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 utteranceStart:(double)arg6 ;
-(id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 utteranceStart:(double)arg6 latticeMitigatorResult:(id)arg7 ;
-(_EARSpeechRecognition *)preITNRecognition;
-(BOOL)recognitionIsFormatted;
-(_EARLatticeMitigatorResult *)latticeMitigatorResult;
-(id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 ;
-(id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 ;
-(id)nBestResults;
@end


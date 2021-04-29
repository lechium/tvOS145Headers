/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSSPGEndpointAnalyzerDelegate;
@interface CSSPGEndpointAnalyzer : NSObject {

	id<CSSPGEndpointAnalyzerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSSPGEndpointAnalyzerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CSSPGEndpointAnalyzerDelegate>)delegate;
-(void)setDelegate:(id<CSSPGEndpointAnalyzerDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(void)reset;
-(void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(long long)getFrameDurationMs;
-(id)initWithAnalyzeMode;
-(id)initWithEndpointThreshold:(float)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSKeywordAnalyzerNDEAPIScoreDelegate;
@class NSMutableData;

@interface CSKeywordAnalyzerNDEAPI : NSObject {

	void* _ndeObject;
	NSMutableData* _currentBlob;
	unsigned long long _activeChannel;
	id<CSKeywordAnalyzerNDEAPIScoreDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long activeChannel;                                      //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic,__weak) id<CSKeywordAnalyzerNDEAPIScoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CSKeywordAnalyzerNDEAPIScoreDelegate>)delegate;
-(void)setDelegate:(id<CSKeywordAnalyzerNDEAPIScoreDelegate>)arg1 ;
-(void)reset;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(id)initWithBlob:(id)arg1 ;
-(id)processAudioChunk:(id)arg1 ;
-(id)checkForTriggerWithBytes:(const short*)arg1 withNumberOfSamples:(long long)arg2 ;
-(id)processAudioBytes:(void*)arg1 withNumberOfSamples:(long long)arg2 ;
@end


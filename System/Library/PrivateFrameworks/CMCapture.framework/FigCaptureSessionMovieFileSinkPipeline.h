/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/FigCaptureMovieFileSinkPipeline.h>

@class NSMutableArray;

@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline {

	BOOL _momentCaptureMovieRecordingEnabled;
	BOOL _recording;
	NSMutableArray* _pendingIrisRecordings;

}

@property (assign,nonatomic) BOOL momentCaptureMovieRecordingEnabled;              //@synthesize momentCaptureMovieRecordingEnabled=_momentCaptureMovieRecordingEnabled - In the implementation block
@property (assign,nonatomic) BOOL recording; 
@property (nonatomic,retain) NSMutableArray * pendingIrisRecordings;               //@synthesize pendingIrisRecordings=_pendingIrisRecordings - In the implementation block
-(void)dealloc;
-(void)setRecording:(BOOL)arg1 ;
-(BOOL)recording;
-(void)setMomentCaptureMovieRecordingEnabled:(BOOL)arg1 ;
-(BOOL)momentCaptureMovieRecordingEnabled;
-(NSMutableArray *)pendingIrisRecordings;
-(void)setPendingIrisRecordings:(NSMutableArray *)arg1 ;
@end


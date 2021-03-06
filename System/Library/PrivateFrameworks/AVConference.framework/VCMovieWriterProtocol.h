/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURL;


@protocol VCMovieWriterProtocol
@property (assign) unsigned startRTPTimeStamp; 
@property (assign) unsigned endRTPTimeStamp; 
@property (readonly) unsigned char writerMode; 
@property (nonatomic,retain) NSURL * outputURL; 
@required
-(void)setOutputURL:(id)arg1;
-(NSURL *)outputURL;
-(id)initWithOutputURL:(id)arg1 transactionID:(id)arg2 videoCodec:(unsigned)arg3;
-(void)setupWriterWithMode:(unsigned char)arg1;
-(void)setStartRTPTimeStamp:(unsigned)arg1;
-(void)setEndRTPTimestampWithTimestamp:(unsigned)arg1;
-(BOOL)shouldFinishWritingSampleBuffer:(opaqueCMSampleBufferRef)arg1 RTPtimeStamp:(unsigned)arg2 mediaType:(unsigned char)arg3;
-(void)finishWritingWithHandler:(/*^block*/id)arg1;
-(BOOL)shouldAppendSampleBuffer:(opaqueCMSampleBufferRef)arg1 RTPtimeStamp:(unsigned)arg2 mediaType:(unsigned char)arg3;
-(void)setStillImageTime:(SCD_Struct_AV88)arg1;
-(void)appendVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;
-(void)appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 mediaType:(unsigned char)arg2;
-(unsigned)startRTPTimeStamp;
-(unsigned)endRTPTimeStamp;
-(void)setEndRTPTimeStamp:(unsigned)arg1;
-(unsigned char)writerMode;

@end


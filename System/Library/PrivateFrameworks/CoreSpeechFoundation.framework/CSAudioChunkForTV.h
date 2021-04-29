/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface CSAudioChunkForTV : NSObject {

	float _avgPower;
	float _peakPower;
	unsigned _numChannels;
	unsigned _audioFormat;
	NSArray* _packets;
	unsigned long long _timeStamp;
	unsigned long long _streamHandleID;

}

@property (nonatomic,retain) NSArray * packets;                              //@synthesize packets=_packets - In the implementation block
@property (assign,nonatomic) float avgPower;                                 //@synthesize avgPower=_avgPower - In the implementation block
@property (assign,nonatomic) float peakPower;                                //@synthesize peakPower=_peakPower - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;                   //@synthesize timeStamp=_timeStamp - In the implementation block
@property (assign,nonatomic) unsigned numChannels;                           //@synthesize numChannels=_numChannels - In the implementation block
@property (assign,nonatomic) unsigned audioFormat;                           //@synthesize audioFormat=_audioFormat - In the implementation block
@property (assign,nonatomic) unsigned long long streamHandleID;              //@synthesize streamHandleID=_streamHandleID - In the implementation block
-(id)xpcObject;
-(void)setPackets:(NSArray *)arg1 ;
-(NSArray *)packets;
-(unsigned long long)timeStamp;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(float)peakPower;
-(id)initWithXPCObject:(id)arg1 ;
-(void)setAudioFormat:(unsigned)arg1 ;
-(unsigned)audioFormat;
-(void)setNumChannels:(unsigned)arg1 ;
-(unsigned)numChannels;
-(unsigned long long)streamHandleID;
-(float)avgPower;
-(void)setStreamHandleID:(unsigned long long)arg1 ;
-(void)setPeakPower:(float)arg1 ;
-(void)setAvgPower:(float)arg1 ;
@end

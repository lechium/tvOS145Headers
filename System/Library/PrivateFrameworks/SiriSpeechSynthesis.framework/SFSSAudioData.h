/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
@class NSData;

@interface SFSSAudioData : NSObject {

	NSData* _audioData;
	long long _packetCount;
	NSData* _packetDescriptions;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSData * audioData;                            //@synthesize audioData=_audioData - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) long long packetCount;                         //@synthesize packetCount=_packetCount - In the implementation block
@property (nonatomic,retain) NSData * packetDescriptions;                   //@synthesize packetDescriptions=_packetDescriptions - In the implementation block
-(double)duration;
-(void)setPacketCount:(long long)arg1 ;
-(NSData *)packetDescriptions;
-(long long)packetCount;
-(NSData *)audioData;
-(void)setAudioData:(NSData *)arg1 ;
-(AudioStreamBasicDescription)asbd;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(void)setPacketDescriptions:(NSData *)arg1 ;
-(id)initWithASBD:(AudioStreamBasicDescription)arg1 rawData:(id)arg2 ;
-(BOOL)populateWithPCMData:(id)arg1 ;
-(BOOL)populateWithOpusData:(id)arg1 ;
@end

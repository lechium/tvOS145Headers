/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSAudioPacket.h>

@class NSData;

@interface QSSMutableAudioPacket : QSSAudioPacket

@property (nonatomic,copy) NSData * audio_bytes; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)audio_bytes:(/*^block*/id)arg1 ;
-(NSData *)audio_bytes;
-(void)setAudio_bytes:(NSData *)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/VSSpeechCacheItem.h>

@class NSArray, NSString, VSAudioData, NSData;

@interface VSSpeechCacheAudio : NSObject <VSSpeechCacheItem> {

	long long _magicVersion;
	NSArray* _timingInfos;
	NSString* _voiceKey;
	VSAudioData* _audio;
	NSString* _key;
	NSData* _audioData;
	long long _packetCount;
	NSData* _packetDescriptions;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSData * audioData;                            //@synthesize audioData=_audioData - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) long long packetCount;                         //@synthesize packetCount=_packetCount - In the implementation block
@property (nonatomic,retain) NSData * packetDescriptions;                   //@synthesize packetDescriptions=_packetDescriptions - In the implementation block
@property (nonatomic,readonly) long long magicVersion;                      //@synthesize magicVersion=_magicVersion - In the implementation block
@property (nonatomic,readonly) NSArray * timingInfos;                       //@synthesize timingInfos=_timingInfos - In the implementation block
@property (nonatomic,readonly) NSString * voiceKey;                         //@synthesize voiceKey=_voiceKey - In the implementation block
@property (nonatomic,readonly) VSAudioData * audio;                         //@synthesize audio=_audio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)serializedData;
-(void)setPacketCount:(long long)arg1 ;
-(NSData *)packetDescriptions;
-(long long)packetCount;
-(id)initWithKey:(id)arg1 data:(id)arg2 ;
-(NSData *)audioData;
-(void)setAudioData:(NSData *)arg1 ;
-(NSString *)voiceKey;
-(AudioStreamBasicDescription)asbd;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(void)setPacketDescriptions:(NSData *)arg1 ;
-(VSAudioData *)audio;
-(NSArray *)timingInfos;
-(id)initWithKey:(id)arg1 audio:(id)arg2 wordTimingInfo:(id)arg3 voiceKey:(id)arg4 ;
-(long long)magicVersion;
@end

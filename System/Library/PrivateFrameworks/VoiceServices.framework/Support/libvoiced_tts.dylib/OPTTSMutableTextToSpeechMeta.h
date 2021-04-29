/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechMeta.h>

@class OPTTSTextToSpeechVoice, OPTTSTextToSpeechResource;

@interface OPTTSMutableTextToSpeechMeta : OPTTSTextToSpeechMeta

@property (nonatomic,copy) OPTTSTextToSpeechVoice * voice; 
@property (nonatomic,copy) OPTTSTextToSpeechResource * resource; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(OPTTSTextToSpeechVoice *)voice;
-(void)setVoice:(OPTTSTextToSpeechVoice *)arg1 ;
-(OPTTSTextToSpeechResource *)resource;
-(void)setResource:(OPTTSTextToSpeechResource *)arg1 ;
@end


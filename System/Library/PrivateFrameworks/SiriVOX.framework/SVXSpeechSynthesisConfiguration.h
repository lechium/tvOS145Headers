/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AFVoiceInfo, NSLocale;

@interface SVXSpeechSynthesisConfiguration : NSObject <NSCopying> {

	unsigned _audioSessionID;
	AFVoiceInfo* _outputVoiceInfo;
	NSLocale* _locale;

}

@property (nonatomic,copy,readonly) AFVoiceInfo * outputVoiceInfo;              //@synthesize outputVoiceInfo=_outputVoiceInfo - In the implementation block
@property (nonatomic,copy,readonly) NSLocale * locale;                          //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) unsigned audioSessionID;                         //@synthesize audioSessionID=_audioSessionID - In the implementation block
+(id)configurationWithOutputVoiceInfo:(id)arg1 ;
+(id)configurationWithLocale:(id)arg1 ;
+(id)configurationWithAudioSessionID:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSLocale *)locale;
-(unsigned)audioSessionID;
-(id)initWithLocale:(id)arg1 outputVoiceInfo:(id)arg2 audioSessionID:(unsigned)arg3 ;
-(AFVoiceInfo *)outputVoiceInfo;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface SISchemaVoiceSettings : SISchemaInstrumentationMessage {

	int _voiceGender;
	int _voiceAccent;
	NSString* _voiceName;
	SCD_Struct_SI2 _has;
	BOOL _hasVoiceName;

}

@property (assign,nonatomic) int voiceGender;                  //@synthesize voiceGender=_voiceGender - In the implementation block
@property (assign,nonatomic) BOOL hasVoiceGender; 
@property (assign,nonatomic) int voiceAccent;                  //@synthesize voiceAccent=_voiceAccent - In the implementation block
@property (assign,nonatomic) BOOL hasVoiceAccent; 
@property (nonatomic,copy) NSString * voiceName;               //@synthesize voiceName=_voiceName - In the implementation block
@property (assign,nonatomic) BOOL hasVoiceName;                //@synthesize hasVoiceName=_hasVoiceName - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)voiceName;
-(void)setVoiceName:(NSString *)arg1 ;
-(NSData *)jsonData;
-(void)setVoiceGender:(int)arg1 ;
-(int)voiceGender;
-(void)setVoiceAccent:(int)arg1 ;
-(int)voiceAccent;
-(BOOL)hasVoiceGender;
-(void)setHasVoiceGender:(BOOL)arg1 ;
-(BOOL)hasVoiceAccent;
-(void)setHasVoiceAccent:(BOOL)arg1 ;
-(BOOL)hasVoiceName;
-(void)setHasVoiceName:(BOOL)arg1 ;
@end


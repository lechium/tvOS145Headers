/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSUpdatedAcousticProfile.h>

@class NSString, QSSUserAcousticProfile;

@interface QSSMutableUpdatedAcousticProfile : QSSUpdatedAcousticProfile

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) QSSUserAcousticProfile * updated_acoustic_profile; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(void)setSession_id:(NSString *)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(QSSUserAcousticProfile *)updated_acoustic_profile;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(void)setUpdated_acoustic_profile:(QSSUserAcousticProfile *)arg1 ;
@end


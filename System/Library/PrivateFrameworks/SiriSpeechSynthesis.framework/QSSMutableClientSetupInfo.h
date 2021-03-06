/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSClientSetupInfo.h>

@class NSString;

@interface QSSMutableClientSetupInfo : QSSClientSetupInfo

@property (assign,nonatomic) float endpoint_threshold; 
@property (assign,nonatomic) BOOL endpoint_extra_delay; 
@property (nonatomic,copy) NSString * speech_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(float)endpoint_threshold;
-(BOOL)endpoint_extra_delay;
-(void)setEndpoint_threshold:(float)arg1 ;
-(void)setEndpoint_extra_delay:(BOOL)arg1 ;
@end


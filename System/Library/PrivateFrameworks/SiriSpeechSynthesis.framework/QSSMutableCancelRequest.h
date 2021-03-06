/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSCancelRequest.h>

@class NSString;

@interface QSSMutableCancelRequest : QSSCancelRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * reason; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(void)setSession_id:(NSString *)arg1 ;
@end


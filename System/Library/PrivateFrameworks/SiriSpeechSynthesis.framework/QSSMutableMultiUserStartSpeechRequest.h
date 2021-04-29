/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSMultiUserStartSpeechRequest.h>

@class QSSStartSpeechRequest, NSArray, NSString;

@interface QSSMutableMultiUserStartSpeechRequest : QSSMultiUserStartSpeechRequest

@property (nonatomic,copy) QSSStartSpeechRequest * start_speech_request; 
@property (nonatomic,copy) NSArray * user_parameters; 
@property (nonatomic,copy) NSString * primary_speech_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(QSSStartSpeechRequest *)start_speech_request;
-(NSArray *)user_parameters;
-(NSString *)primary_speech_id;
-(void)setStart_speech_request:(QSSStartSpeechRequest *)arg1 ;
-(void)setUser_parameters:(NSArray *)arg1 ;
-(void)setPrimary_speech_id:(NSString *)arg1 ;
@end


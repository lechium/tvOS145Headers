/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSTextToSpeechRequestMeta.h>

@class NSString;

@interface QSSMutableTextToSpeechRequestMeta : QSSTextToSpeechRequestMeta

@property (assign,nonatomic) long long channel_type; 
@property (nonatomic,copy) NSString * app_id; 
@property (assign,nonatomic) BOOL is_synthesis; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setApp_id:(NSString *)arg1 ;
-(NSString *)app_id;
-(void)setChannel_type:(long long)arg1 ;
-(void)setIs_synthesis:(BOOL)arg1 ;
-(long long)channel_type;
-(BOOL)is_synthesis;
@end


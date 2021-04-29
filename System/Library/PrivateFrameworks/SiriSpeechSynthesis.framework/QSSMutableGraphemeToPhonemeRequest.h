/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSGraphemeToPhonemeRequest.h>

@class NSString, QSSContextWithPronHints;

@interface QSSMutableGraphemeToPhonemeRequest : QSSGraphemeToPhonemeRequest

@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) QSSContextWithPronHints * context_with_pron_hints; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)orthography;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(NSString *)session_id;
-(void)setSession_id:(NSString *)arg1 ;
-(QSSContextWithPronHints *)context_with_pron_hints;
-(void)setContext_with_pron_hints:(QSSContextWithPronHints *)arg1 ;
@end

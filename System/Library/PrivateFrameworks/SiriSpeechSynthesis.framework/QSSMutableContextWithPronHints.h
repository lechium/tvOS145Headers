/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSContextWithPronHints.h>

@class NSString, NSArray;

@interface QSSMutableContextWithPronHints : QSSContextWithPronHints

@property (nonatomic,copy) NSString * contextual_text; 
@property (nonatomic,copy) NSArray * pron_hints; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)contextual_text;
-(NSArray *)pron_hints;
-(void)setContextual_text:(NSString *)arg1 ;
-(void)setPron_hints:(NSArray *)arg1 ;
@end

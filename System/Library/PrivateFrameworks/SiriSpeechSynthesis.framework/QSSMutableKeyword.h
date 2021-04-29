/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSKeyword.h>

@class NSString;

@interface QSSMutableKeyword : QSSKeyword

@property (nonatomic,copy) NSString * keyword_orthography; 
@property (assign,nonatomic) double posterior; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)keyword_orthography;
-(double)posterior;
-(void)setKeyword_orthography:(NSString *)arg1 ;
-(void)setPosterior:(double)arg1 ;
@end


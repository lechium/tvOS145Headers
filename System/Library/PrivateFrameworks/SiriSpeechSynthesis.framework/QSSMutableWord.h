/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSWord.h>

@class NSString, NSData;

@interface QSSMutableWord : QSSWord

@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSData * pronunciations; 
@property (assign,nonatomic) int frequency; 
@property (nonatomic,copy) NSString * tag; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)orthography;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(void)setFrequency:(int)arg1 ;
-(int)frequency;
-(void)setOrthography:(NSString *)arg1 ;
-(NSData *)pronunciations;
-(void)setPronunciations:(NSData *)arg1 ;
-(void)pronunciations:(/*^block*/id)arg1 ;
@end

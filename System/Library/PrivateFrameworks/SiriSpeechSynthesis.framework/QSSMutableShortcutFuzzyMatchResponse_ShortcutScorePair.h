/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSShortcutFuzzyMatchResponse_ShortcutScorePair.h>

@class NSString;

@interface QSSMutableShortcutFuzzyMatchResponse_ShortcutScorePair : QSSShortcutFuzzyMatchResponse_ShortcutScorePair

@property (nonatomic,copy) NSString * shortcut; 
@property (assign,nonatomic) double similarity_score; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)shortcut;
-(void)setShortcut:(NSString *)arg1 ;
-(double)similarity_score;
-(void)setSimilarity_score:(double)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSRecognitionChoice.h>

@class NSArray;

@interface QSSMutableRecognitionChoice : QSSRecognitionChoice

@property (nonatomic,copy) NSArray * alternative_index; 
@property (assign,nonatomic) int confidence; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(int)confidence;
-(void)setConfidence:(int)arg1 ;
-(NSArray *)alternative_index;
-(void)setAlternative_index:(NSArray *)arg1 ;
@end


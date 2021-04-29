/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSAcousticFeature.h>

@class NSArray;

@interface QSSMutableAcousticFeature : QSSAcousticFeature

@property (nonatomic,copy) NSArray * acoustic_feature_per_frame; 
@property (assign,nonatomic) float frame_duration; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)acoustic_feature_per_frame;
-(float)frame_duration;
-(void)setAcoustic_feature_per_frame:(NSArray *)arg1 ;
-(void)setFrame_duration:(float)arg1 ;
@end


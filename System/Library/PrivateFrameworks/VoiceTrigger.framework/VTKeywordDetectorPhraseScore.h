/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VTKeywordDetectorPhraseScore : NSObject {

	float _score;
	unsigned long long _phraseId;

}

@property (assign,nonatomic) unsigned long long phraseId;              //@synthesize phraseId=_phraseId - In the implementation block
@property (assign,nonatomic) float score;                              //@synthesize score=_score - In the implementation block
-(float)score;
-(void)setScore:(float)arg1 ;
-(id)initWithPhraseId:(unsigned long long)arg1 withScore:(float)arg2 ;
-(unsigned long long)phraseId;
-(void)setPhraseId:(unsigned long long)arg1 ;
@end


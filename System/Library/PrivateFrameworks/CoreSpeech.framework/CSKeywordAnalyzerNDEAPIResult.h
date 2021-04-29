/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface CSKeywordAnalyzerNDEAPIResult : NSObject {

	BOOL _isSecondChance;
	BOOL _isEarlyDetect;
	float _bestScore;
	unsigned long long _samplesFed;
	unsigned long long _bestStart;
	unsigned long long _bestEnd;

}

@property (assign,nonatomic) unsigned long long samplesFed;              //@synthesize samplesFed=_samplesFed - In the implementation block
@property (assign,nonatomic) unsigned long long bestStart;               //@synthesize bestStart=_bestStart - In the implementation block
@property (assign,nonatomic) unsigned long long bestEnd;                 //@synthesize bestEnd=_bestEnd - In the implementation block
@property (assign,nonatomic) float bestScore;                            //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) BOOL isSecondChance;                        //@synthesize isSecondChance=_isSecondChance - In the implementation block
@property (assign,nonatomic) BOOL isEarlyDetect;                         //@synthesize isEarlyDetect=_isEarlyDetect - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
-(id)init;
-(NSDictionary *)dictionary;
-(void)setBestScore:(float)arg1 ;
-(float)bestScore;
-(unsigned long long)samplesFed;
-(void)setSamplesFed:(unsigned long long)arg1 ;
-(unsigned long long)bestStart;
-(void)setBestStart:(unsigned long long)arg1 ;
-(unsigned long long)bestEnd;
-(void)setBestEnd:(unsigned long long)arg1 ;
-(BOOL)isSecondChance;
-(void)setIsSecondChance:(BOOL)arg1 ;
-(BOOL)isEarlyDetect;
-(id)initWithBlob:(id)arg1 isEarlyDetected:(BOOL)arg2 ;
-(void)setIsEarlyDetect:(BOOL)arg1 ;
@end

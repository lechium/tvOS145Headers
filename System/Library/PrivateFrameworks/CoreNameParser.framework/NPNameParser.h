/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreNameParser.framework/CoreNameParser
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreNameParser/CoreNameParser-Structs.h>
@class NPNameComponentsData, NPHMMClassifier;

@interface NPNameParser : NSObject {

	double _confidenceThreshold;
	NPNameComponentsData* _nameComponentsData;
	NPHMMClassifier* _classifier;

}

@property (retain) NPHMMClassifier * classifier;              //@synthesize classifier=_classifier - In the implementation block
-(id)init;
-(void)dealloc;
-(id)personNameComponentsFromString:(id)arg1 ;
-(NPHMMClassifier *)classifier;
-(void)setClassifier:(NPHMMClassifier *)arg1 ;
-(id)normalizeFullname:(id)arg1 ;
-(unsigned long long)namingTraditionForName:(id)arg1 ;
-(id)parseChineseName:(id)arg1 normalize:(BOOL)arg2 ;
-(id)parseJapaneseName:(id)arg1 normalize:(BOOL)arg2 ;
-(id)parseKoreanName:(id)arg1 normalize:(BOOL)arg2 ;
-(id)parseFullnameWithDefaultHMMClassifier:(id)arg1 normalize:(BOOL)arg2 score:(double*)arg3 ;
-(BOOL)isPrefix:(id)arg1 ;
-(BOOL)isSuffix:(id)arg1 ;
-(id)personNameCompomentsFromPrefix:(id)arg1 suffix:(id)arg2 givenNames:(id)arg3 middleNames:(id)arg4 familyNames:(id)arg5 ;
-(id)normalizedAffix:(id)arg1 ;
-(unsigned long long)genderMajorityForGivenName:(id)arg1 ;
-(id)parseLatinName:(id)arg1 score:(double*)arg2 ;
-(id)parseFullnameWithDefaultHMMClassifier:(id)arg1 ;
-(id)parseChineseName:(id)arg1 ;
-(id)parseJapaneseName:(id)arg1 ;
-(id)parseKoreanName:(id)arg1 ;
-(CFBurstTrieRef)sharedNameFrequencyTrieRef;
-(unsigned long long)frequencyOfLatinFamilyName:(id)arg1 ;
-(unsigned long long)frequencyOfLatinGivenName:(id)arg1 ;
@end


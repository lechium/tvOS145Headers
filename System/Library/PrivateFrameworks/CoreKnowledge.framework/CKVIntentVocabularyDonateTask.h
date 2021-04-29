/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreKnowledge/CKVDonateTask.h>

@class CKVIntentVocabularyStoreManager, CKVIntentVocabularyAuthorization;

@interface CKVIntentVocabularyDonateTask : CKVDonateTask {

	CKVIntentVocabularyStoreManager* _vocabularyStoreManager;
	CKVIntentVocabularyAuthorization* _vocabularyAuthorization;

}
-(void)donateLatestVocabularyForAllApps:(unsigned short)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDonatorProvider:(id)arg1 ;
-(id)initWithVocabularyStoreManager:(id)arg1 vocabularyAuthorization:(id)arg2 donatorProvider:(id)arg3 ;
-(id)_readAllVocabularyForApp:(id)arg1 withIntentSlots:(id)arg2 ;
-(void)_submitDonation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)donateLatestVocabularyForApp:(id)arg1 reason:(unsigned short)arg2 ;
-(void)deleteVocabularyForApp:(id)arg1 ;
@end


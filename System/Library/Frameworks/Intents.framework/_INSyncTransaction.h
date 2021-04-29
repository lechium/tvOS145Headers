/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, _INVocabularyStoreManager, _INVocabularyGenerationDocument;

@interface _INSyncTransaction : NSObject {

	NSString* _pathToLatestVocabularyDocument;
	NSString* _pathToStagedVocabularyDocument;
	NSString* _pathToSentVocabularyDocument;
	NSString* _syncSlot;
	_INVocabularyStoreManager* _storeManager;
	BOOL _deleteExistingVocabulary;
	BOOL _vocabularyUpdatesEnabled;
	BOOL _fullResetRequired;
	_INVocabularyGenerationDocument* _latest;
	_INVocabularyGenerationDocument* _sent;

}

@property (nonatomic,readonly) _INVocabularyGenerationDocument * latestVocabularyDocument;              //@synthesize latest=_latest - In the implementation block
@property (nonatomic,readonly) _INVocabularyGenerationDocument * sentVocabularyDocument;                //@synthesize sent=_sent - In the implementation block
@property (assign,nonatomic) BOOL fullResetRequired;                                                    //@synthesize fullResetRequired=_fullResetRequired - In the implementation block
+(id)beginTransactionForBundleID:(id)arg1 bundlePath:(id)arg2 syncSlot:(id)arg3 ;
-(void)_beginTransaction;
-(id)_initWithVocabularyManager:(id)arg1 syncSlot:(id)arg2 deleteExistingVocabulary:(BOOL)arg3 ;
-(void)_saveAndCleanup;
-(void)endTransactionWithFinalAnchor:(id)arg1 ;
-(id)calculateDiff;
-(_INVocabularyGenerationDocument *)sentVocabularyDocument;
-(id)_emptySentDocument;
-(void)_deleteInvalidSavedData;
-(BOOL)_isMissingLatestFileError:(id)arg1 ;
-(_INVocabularyGenerationDocument *)latestVocabularyDocument;
-(BOOL)fullResetRequired;
-(void)setFullResetRequired:(BOOL)arg1 ;
@end


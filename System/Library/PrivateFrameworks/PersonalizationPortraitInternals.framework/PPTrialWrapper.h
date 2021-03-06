/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _PASLock, NSDictionary, PPSQLDatabase;

@interface PPTrialWrapper : NSObject {

	_PASLock* _lock;
	NSDictionary* _namespaceNamesIdsDict;
	BOOL _useDefaultFiles;
	PPSQLDatabase* _db;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)updateMetadata;
-(id)initWithSettings:(id)arg1 database:(id)arg2 trialClient:(id)arg3 ;
-(id)lastTreatmentUpdateForNamespaceName:(id)arg1 ;
-(void)addUpdateHandlerForNamespaceName:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)treatmentNameForNamespaceName:(id)arg1 ;
-(void)updateMetadataWithGuardedData:(id)arg1 ;
-(void)updateMetadataForNamespaceName:(id)arg1 ;
-(BOOL)hasFactor:(id)arg1 namespaceName:(id)arg2 ;
-(void)removeUpdateHandlerForToken:(id)arg1 ;
-(id)treatmentIdForNamespaceName:(id)arg1 ;
-(id)readableTreatmentsMapping;
-(id)concatenatedTreatmentNames;
-(unsigned)treatmentsHash;
-(id)defaultFilepathForFactor:(id)arg1 namespaceName:(id)arg2 ;
-(id)filepathForFactor:(id)arg1 namespaceName:(id)arg2 ;
-(id)directoryForFactorName:(id)arg1 namespaceName:(id)arg2 ;
-(id)plistForFactorName:(id)arg1 namespaceName:(id)arg2 ;
-(id)lazyPlistForFactorName:(id)arg1 namespaceName:(id)arg2 error:(id*)arg3 ;
-(id)levelForFactor:(id)arg1 namespaceName:(id)arg2 ;
-(void)setUseDefaultFiles:(BOOL)arg1 ;
-(void)overrideFilepathForFileFactor:(id)arg1 namespaceName:(id)arg2 path:(id)arg3 ;
-(void)clearOverrideFilepathForFileFactor:(id)arg1 namespaceName:(id)arg2 ;
-(void)callRegisteredUpdateHandlersForNamespaceName:(id)arg1 ;
-(void)callRegisteredUpdateHandlers;
-(BOOL)hasModel:(id)arg1 namespaceName:(id)arg2 ;
-(id)mlModelPathForModelName:(id)arg1 namespaceName:(id)arg2 error:(id*)arg3 ;
-(id)mlModelForModelName:(id)arg1 namespaceName:(id)arg2 error:(id*)arg3 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTLearnedLocationStore, RTMapServiceManager;

@interface RTStateModelLegacyController : NSObject {

	RTLearnedLocationStore* _learnedLocationStore;
	RTMapServiceManager* _mapServiceManager;

}

@property (nonatomic,retain) RTLearnedLocationStore * learnedLocationStore;              //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                    //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
+(BOOL)stateModelLegacyExists;
+(id)pathToArchiveFor:(long long)arg1 ;
+(id)pathToChecksumFor:(long long)arg1 ;
+(BOOL)archiveExists:(long long)arg1 ;
+(unsigned long long)crcFromData:(id)arg1 ;
-(RTLearnedLocationStore *)learnedLocationStore;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithLearnedLocationStore:(id)arg1 mapServiceManager:(id)arg2 ;
-(BOOL)removeStateModelLegacyWithError:(id*)arg1 ;
-(BOOL)migrateStateModelLegacyWithError:(id*)arg1 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
-(id)_unarchiveStateModelForArchive:(long long)arg1 error:(id*)arg2 ;
-(BOOL)_removeStateModelForArchive:(long long)arg1 error:(id*)arg2 ;
-(id)_getStateModelLegacyWithError:(id*)arg1 ;
-(BOOL)_migrateStateModelLegacy:(id)arg1 error:(id*)arg2 ;
@end


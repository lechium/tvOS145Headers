/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface PLJournalManagerCore : NSObject {

	NSURL* _baseURL;
	NSURL* _historyTokenURL;

}
+(id)payloadClasses;
+(void)validatePayloadClassesForManagedObjectModel:(id)arg1 ;
+(id)_nextValidPayloadWithObjectEnumerator:(id)arg1 changedKeys:(id)arg2 ;
+(BOOL)createSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)appendSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 changedKeys:(id)arg3 error:(id*)arg4 ;
+(id)_objectEnumeratorForJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)initWithBaseURL:(id)arg1 ;
-(BOOL)saveHistoryToken:(id)arg1 error:(id*)arg2 ;
@end


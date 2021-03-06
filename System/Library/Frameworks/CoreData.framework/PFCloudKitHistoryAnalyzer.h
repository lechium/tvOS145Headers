/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/PFHistoryAnalyzer.h>

@class NSManagedObjectContext, NSPersistentHistoryToken;

@interface PFCloudKitHistoryAnalyzer : PFHistoryAnalyzer {

	NSManagedObjectContext* _managedObjectContext;
	NSPersistentHistoryToken* _lastProcessedToken;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSPersistentHistoryToken * lastProcessedToken;              //@synthesize lastProcessedToken=_lastProcessedToken - In the implementation block
+(BOOL)isPrivateTransaction:(id)arg1 ;
+(BOOL)isPrivateTransactionAuthor:(id)arg1 ;
+(BOOL)isPrivateContextName:(id)arg1 ;
-(void)dealloc;
-(NSManagedObjectContext *)managedObjectContext;
-(id)cloudKitAnalyzerOptions;
-(BOOL)processTransaction:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1 ;
-(NSPersistentHistoryToken *)lastProcessedToken;
@end


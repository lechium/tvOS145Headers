/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSManagedObjectContext;


@protocol ICLegacyContext
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@required
+(id)newLegacyContext;
-(void)reset;
-(void)performBlock:(/*^block*/id)arg1;
-(void)performBlockAndWait:(/*^block*/id)arg1;
-(NSManagedObjectContext *)managedObjectContext;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2;
-(id)allVisibleNotesForAccountWithObjectID:(id)arg1;
-(BOOL)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1;
-(unsigned long long)countOfVisibleNotesForAccountWithObjectID:(id)arg1;
-(id)allVisibleNoteObjectIDsForAccountWithObjectID:(id)arg1;

@end


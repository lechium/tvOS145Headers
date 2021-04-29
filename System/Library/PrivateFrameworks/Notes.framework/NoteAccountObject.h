/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Notes/NoteCollectionObject.h>

@class NSDictionary, NSNumber, NSString, NSSet, NoteStoreObject;

@interface NoteAccountObject : NoteCollectionObject {

	NSDictionary* _constraints;
	NSNumber* _preventMovingNotesToOtherAccounts;

}

@property (nonatomic,retain) NSNumber * type; 
@property (nonatomic,retain) NSString * constraintsPath; 
@property (nonatomic,retain) NSDictionary * constraints;                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSString * accountIdentifier; 
@property (nonatomic,retain) NSSet * stores; 
@property (nonatomic,retain) NoteStoreObject * defaultStore; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) long long accountType; 
@property (nonatomic,retain) NSString * pathToConstraintsPlist; 
@property (assign,nonatomic) BOOL didChooseToMigrate; 
@property (nonatomic,readonly) BOOL preventMovingNotesToOtherAccounts; 
@property (nonatomic,readonly) BOOL isICloudIMAPAccount; 
+(BOOL)shouldDataAccessCreateAccountForACAccount:(id)arg1 ;
-(void)didTurnIntoFault;
-(void)willSave;
-(long long)accountType;
-(void)setAccountType:(long long)arg1 ;
-(NSDictionary *)constraints;
-(id)collectionInfo;
-(void)setConstraints:(NSDictionary *)arg1 ;
-(id)predicateForNotes;
-(BOOL)shouldMarkNotesAsDeleted;
-(id)storeForExternalId:(id)arg1 ;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)basicAccountIdentifier;
-(id)searchDomainIdentifier;
-(BOOL)isAllNotesContainer;
-(BOOL)preventMovingNotesToOtherAccounts;
-(void)setPathToConstraintsPlist:(NSString *)arg1 ;
-(NSString *)pathToConstraintsPlist;
-(BOOL)validateDefaultStore:(id*)arg1 error:(id*)arg2 ;
-(BOOL)isICloudIMAPAccount;
@end


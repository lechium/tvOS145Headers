/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObjectModel, NSManagedObjectContext, NSURL, NSString;

@interface TDPersistentDocument : NSObject {

	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSURL* _fileURL;
	NSString* _fileType;
	NSURL* _temporaryFileURL;

}

@property (nonatomic,copy) NSURL * temporaryFileURL;              //@synthesize temporaryFileURL=_temporaryFileURL - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * fileType;                   //@synthesize fileType=_fileType - In the implementation block
+(id)_fileModificationDateForURL:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)fileType;
-(id)displayName;
-(id)_persistentStoreCoordinator;
-(id)managedObjectModel;
-(id)managedObjectContext;
-(void)setManagedObjectContext:(id)arg1 ;
-(id)undoManager;
-(void)setFileType:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5 ;
-(id)persistentStoreTypeForFileType:(id)arg1 ;
-(BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)saveDocument:(id)arg1 ;
-(NSURL *)temporaryFileURL;
-(void)setTemporaryFileURL:(NSURL *)arg1 ;
@end


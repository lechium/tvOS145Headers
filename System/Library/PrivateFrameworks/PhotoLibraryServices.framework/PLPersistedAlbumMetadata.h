/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, NSMutableOrderedSet, NSData, PLGenericAlbum, NSURL;

@interface PLPersistedAlbumMetadata : NSObject {

	BOOL _isFolder;
	BOOL _pinned;
	BOOL _prototype;
	BOOL _inTrash;
	BOOL _customSortAscending;
	BOOL _allowsOverwrite;
	int _customSortKey;
	NSString* _title;
	NSString* _uuid;
	NSString* _cloudGUID;
	NSNumber* _kind;
	NSString* _customKeyAssetUUID;
	NSMutableOrderedSet* _assetUUIDs;
	NSString* _importSessionID;
	NSData* _userQueryData;
	NSString* _creatorBundleID;
	NSString* _projectDocumentType;
	PLGenericAlbum* _genericAlbum;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) PLGenericAlbum * genericAlbum;                  //@synthesize genericAlbum=_genericAlbum - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                            //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * cloudGUID;                           //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * kind;                                //@synthesize kind=_kind - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                    //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isPrototype,nonatomic) BOOL prototype;              //@synthesize prototype=_prototype - In the implementation block
@property (assign,getter=isInTrash,nonatomic) BOOL inTrash;                  //@synthesize inTrash=_inTrash - In the implementation block
@property (assign,nonatomic) BOOL customSortAscending;                       //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (assign,nonatomic) int customSortKey;                              //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,retain) NSString * customKeyAssetUUID;                  //@synthesize customKeyAssetUUID=_customKeyAssetUUID - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * assetUUIDs;               //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (nonatomic,retain) NSString * importSessionID;                     //@synthesize importSessionID=_importSessionID - In the implementation block
@property (nonatomic,retain) NSData * userQueryData;                         //@synthesize userQueryData=_userQueryData - In the implementation block
@property (nonatomic,retain) NSString * creatorBundleID;                     //@synthesize creatorBundleID=_creatorBundleID - In the implementation block
@property (nonatomic,retain) NSString * projectDocumentType;                 //@synthesize projectDocumentType=_projectDocumentType - In the implementation block
@property (nonatomic,readonly) BOOL isFolder;                                //@synthesize isFolder=_isFolder - In the implementation block
@property (assign,nonatomic) BOOL allowsOverwrite;                           //@synthesize allowsOverwrite=_allowsOverwrite - In the implementation block
+(BOOL)isValidPath:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)kind;
-(void)setKind:(NSNumber *)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)_readMetadata;
-(void)setInTrash:(BOOL)arg1 ;
-(NSString *)projectDocumentType;
-(void)setProjectDocumentType:(NSString *)arg1 ;
-(NSString *)creatorBundleID;
-(void)setCreatorBundleID:(NSString *)arg1 ;
-(NSString *)cloudGUID;
-(void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(void)setCloudGUID:(NSString *)arg1 ;
-(BOOL)isFolder;
-(BOOL)isInTrash;
-(NSString *)importSessionID;
-(void)setImportSessionID:(NSString *)arg1 ;
-(void)removePersistedAlbumData;
-(id)initWithPLGenericAlbum:(id)arg1 pathManager:(id)arg2 ;
-(void)persistAlbumData;
-(NSMutableOrderedSet *)assetUUIDs;
-(NSURL *)metadataURL;
-(void)_saveMetadata;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(int)customSortKey;
-(BOOL)customSortAscending;
-(NSData *)userQueryData;
-(BOOL)isPrototype;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(void)setAllowsOverwrite:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5 persistedAlbumDataDirectory:(id)arg6 ;
-(void)setCustomSortKey:(int)arg1 ;
-(void)setPrototype:(BOOL)arg1 ;
-(void)setUserQueryData:(NSData *)arg1 ;
-(NSString *)customKeyAssetUUID;
-(PLGenericAlbum *)genericAlbum;
-(BOOL)allowsOverwrite;
-(id)_fetchChildUUIDs;
-(void)setCustomKeyAssetUUID:(NSString *)arg1 ;
-(void)setAssetUUIDs:(NSMutableOrderedSet *)arg1 ;
-(void)setGenericAlbum:(PLGenericAlbum *)arg1 ;
@end


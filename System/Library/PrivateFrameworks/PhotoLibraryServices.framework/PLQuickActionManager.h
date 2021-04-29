/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOperationQueue, PLDatabaseContext, NSData;

@interface PLQuickActionManager : NSObject {

	id _cameraWellObserver;
	NSOperationQueue* _operationQueue;
	PLDatabaseContext* _databaseContext;
	BOOL __mostRecentPhotoIsInvalid;
	NSData* __cachedMostRecentPhotoData;
	Class __SBSApplicationShortcutServiceClass;
	Class __SBSApplicationShortcutItemClass;
	Class __SBSApplicationShortcutCustomImageIconClass;

}

@property (setter=_setCachedMostRecentPhotoData:,nonatomic,retain) NSData * _cachedMostRecentPhotoData;                                             //@synthesize _cachedMostRecentPhotoData=__cachedMostRecentPhotoData - In the implementation block
@property (assign,setter=_setMostRecentPhotoIsInvalid:,nonatomic) BOOL _mostRecentPhotoIsInvalid;                                                   //@synthesize _mostRecentPhotoIsInvalid=__mostRecentPhotoIsInvalid - In the implementation block
@property (setter=_setSBSApplicationShortcutServiceClass:,nonatomic,retain) Class _SBSApplicationShortcutServiceClass;                              //@synthesize _SBSApplicationShortcutServiceClass=__SBSApplicationShortcutServiceClass - In the implementation block
@property (setter=_setSBSApplicationShortcutItemClass:,nonatomic,retain) Class _SBSApplicationShortcutItemClass;                                    //@synthesize _SBSApplicationShortcutItemClass=__SBSApplicationShortcutItemClass - In the implementation block
@property (setter=_setSBSApplicationShortcutCustomImageIconClass:,nonatomic,retain) Class _SBSApplicationShortcutCustomImageIconClass;              //@synthesize _SBSApplicationShortcutCustomImageIconClass=__SBSApplicationShortcutCustomImageIconClass - In the implementation block
-(void)dealloc;
-(NSData *)_cachedMostRecentPhotoData;
-(BOOL)_mostRecentPhotoIsInvalid;
-(Class)_SBSApplicationShortcutServiceClass;
-(Class)_SBSApplicationShortcutItemClass;
-(Class)_SBSApplicationShortcutCustomImageIconClass;
-(id)initWithDatabaseContext:(id)arg1 ;
-(void)cameraPreviewWellImageDidChange;
-(void)buildQuickActionItems;
-(BOOL)_userHasPhotos;
-(BOOL)_userHasPhotosFromLastYear;
-(void)_setCachedMostRecentPhotoData:(id)arg1 ;
-(void)_setMostRecentPhotoIsInvalid:(BOOL)arg1 ;
-(void)_setSBSApplicationShortcutServiceClass:(Class)arg1 ;
-(void)_setSBSApplicationShortcutItemClass:(Class)arg1 ;
-(void)_setSBSApplicationShortcutCustomImageIconClass:(Class)arg1 ;
@end


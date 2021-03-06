/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHMomentShare, NSXPCConnection, NSString, NSArray, NSDictionary, PHShareRelationshipChangeRequestHelper, NSDate, NSData, PHObjectPlaceholder, NSManagedObjectID;

@interface PHMomentShareChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHMomentShare* _originalMomentShare;
	NSXPCConnection* _clientConnection;
	NSString* _keySourceAssetIdentifier;
	NSArray* _sourceAssetIdentifiers;
	NSDictionary* _sourceAssetIdentifiersToAdjustmentBakeInOptionsDictionary;
	NSDictionary* _sourceAssetIdentifiersToMetadataCopyOptionsDictionary;
	PHShareRelationshipChangeRequestHelper* _participantsHelper;

}

@property (nonatomic,readonly) PHShareRelationshipChangeRequestHelper * participantsHelper;              //@synthesize participantsHelper=_participantsHelper - In the implementation block
@property (nonatomic,retain) NSString * originatingScopeIdentifier; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSData * previewData; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedMomentShare; 
@property (assign,nonatomic) BOOL shouldIgnoreBudgets; 
@property (assign,nonatomic) BOOL shouldNotifyOnUploadCompletion; 
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork; 
@property (getter=isMutated,readonly) BOOL mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validateMomentShareCreationDate:(id)arg1 error:(id*)arg2 ;
+(id)changeRequestForMomentShare:(id)arg1 ;
+(id)creationRequestForMomentShareWithTitle:(id)arg1 publicPermission:(short)arg2 creationDate:(id)arg3 createMomentShareAssetsFromAssets:(id)arg4 creationOptionsPerAsset:(id)arg5 preview:(id)arg6 originatingMomentShare:(id)arg7 ;
+(void)trashMomentShares:(id)arg1 ;
+(void)expungeMomentShares:(id)arg1 ;
-(NSDate *)creationDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(short)mode;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)thumbnailImageData;
-(void)setThumbnailImageData:(id)arg1 ;
-(void)setPublicPermission:(short)arg1 ;
-(void)addParticipants:(id)arg1 ;
-(NSString *)originatingScopeIdentifier;
-(void)setOriginatingScopeIdentifier:(NSString *)arg1 ;
-(NSData *)previewData;
-(void)setPreviewData:(NSData *)arg1 ;
-(BOOL)shouldNotifyOnUploadCompletion;
-(BOOL)shouldIgnoreBudgets;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(PHObjectPlaceholder *)placeholderForCreatedMomentShare;
-(void)setShouldIgnoreBudgets:(BOOL)arg1 ;
-(void)setShouldNotifyOnUploadCompletion:(BOOL)arg1 ;
-(void)_setOriginalMomentShare:(id)arg1 ;
-(void)createMomentShareAssetsFromAssets:(id)arg1 withCreationOptionsPerAsset:(id)arg2 withPreview:(id)arg3 ;
-(PHShareRelationshipChangeRequestHelper *)participantsHelper;
@end


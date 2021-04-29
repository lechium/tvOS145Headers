/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHFaceGroup, PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSString, NSManagedObjectID;

@interface PHFaceGroupChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHFaceGroup* _originalFaceGroup;
	PHRelationshipChangeRequestHelper* _facesHelper;
	PHRelationshipChangeRequestHelper* _keyFaceHelper;

}

@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * facesHelper;                   //@synthesize facesHelper=_facesHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * keyFaceHelper;                 //@synthesize keyFaceHelper=_keyFaceHelper - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedFaceGroup; 
@property (assign,nonatomic) long long unnamedFaceCount; 
@property (assign,nonatomic) long long personBuilderState; 
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
+(id)creationRequestForFaceGroup;
+(id)changeRequestForFaceGroup:(id)arg1 ;
+(void)deleteFaceGroups:(id)arg1 ;
-(void)addFaces:(id)arg1 ;
-(void)setKeyFace:(id)arg1 ;
-(long long)unnamedFaceCount;
-(long long)personBuilderState;
-(void)setPersonBuilderState:(long long)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(PHObjectPlaceholder *)placeholderForCreatedFaceGroup;
-(void)setUnnamedFaceCount:(long long)arg1 ;
-(void)_prefetchFacesAndPersonRelationship:(id)arg1 inContext:(id)arg2 ;
-(id)_existentFaceObjectIDs;
-(void)_prepareKeyFaceHelperIfNeeded;
-(void)_prepareFacesHelperIfNeeded;
-(id)_mutableObjectIDsAndUUIDs;
-(id)_mutableKeyFaceObjectIDsAndUUIDs;
-(void)removeFaces:(id)arg1 ;
-(void)_setOriginalFaceGroup:(id)arg1 ;
-(PHRelationshipChangeRequestHelper *)facesHelper;
-(PHRelationshipChangeRequestHelper *)keyFaceHelper;
@end

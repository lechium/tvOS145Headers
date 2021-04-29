/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLFaceRebuildDescription.h>

@class NSString;

@interface PLDeferredRebuildFace : PLManagedObject <PLFaceRebuildDescription>

@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (getter=isManual,nonatomic,readonly) BOOL manual; 
@property (getter=isRepresentative,nonatomic,readonly) BOOL representative; 
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) double size; 
@property (nonatomic,readonly) int nameSource; 
@property (nonatomic,readonly) int cloudNameSource; 
@property (getter=isClusterRejected,nonatomic,readonly) BOOL clusterRejected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSString * faceUUID; 
@property (nonatomic,copy) NSString * assetCloudGUID; 
@property (nonatomic,copy) NSString * assetUUID; 
@property (nonatomic,copy) NSString * personUUID; 
@property (assign,nonatomic) double centerX; 
@property (assign,nonatomic) double centerY; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL manual; 
@property (assign,nonatomic) BOOL representative; 
@property (assign,nonatomic) BOOL rejected; 
@property (assign,nonatomic) BOOL clusterRejected; 
@property (assign,nonatomic) int nameSource; 
@property (assign,nonatomic) int cloudNameSource; 
@property (assign,nonatomic) int faceAlgorithmVersion; 
+(id)entityName;
+(id)deferredFacesWithAssetCloudGUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(BOOL)isHidden;
-(BOOL)isManual;
-(BOOL)isRepresentative;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)payloadIDsByPayloadClassIDToDeleteOnInsert;
-(BOOL)isClusterRejected;
@end


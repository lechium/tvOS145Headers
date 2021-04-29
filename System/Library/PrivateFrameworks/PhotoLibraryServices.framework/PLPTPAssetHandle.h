/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObjectID, NSSet, NSString;

@interface PLPTPAssetHandle : NSObject {

	BOOL _requiresConversion;
	long long _type;
	NSManagedObjectID* _assetID;
	NSManagedObjectID* _sidecarID;
	NSSet* _siblingAssetHandleTypes;

}

@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSManagedObjectID * assetID;                        //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,copy,readonly) NSManagedObjectID * sidecarID;                      //@synthesize sidecarID=_sidecarID - In the implementation block
@property (nonatomic,readonly) BOOL requiresConversion;                                 //@synthesize requiresConversion=_requiresConversion - In the implementation block
@property (nonatomic,readonly) NSString * auxiliaryResourceFilenameMarker; 
@property (nonatomic,copy,readonly) NSSet * siblingAssetHandleTypes;                    //@synthesize siblingAssetHandleTypes=_siblingAssetHandleTypes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)type;
-(NSManagedObjectID *)assetID;
-(NSManagedObjectID *)sidecarID;
-(BOOL)requiresConversion;
-(BOOL)hasSiblingAssetWithAssetHandleType:(long long)arg1 ;
-(NSString *)auxiliaryResourceFilenameMarker;
-(NSSet *)siblingAssetHandleTypes;
-(id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(BOOL)arg4 ;
-(id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(BOOL)arg4 siblingAssetHandleTypes:(id)arg5 ;
-(id)assetHandleBySettingRequiresConversion;
-(id)assetHandleBySettingSiblingAssetHandleTypes:(id)arg1 ;
@end


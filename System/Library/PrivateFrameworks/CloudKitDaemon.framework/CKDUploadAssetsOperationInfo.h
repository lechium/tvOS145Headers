/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKDUploadAssetsOperationInfo : CKDatabaseOperationInfo {

	BOOL _temporary;
	NSArray* _assetsToUpload;
	NSDictionary* _assetUUIDToExpectedProperties;
	NSDictionary* _packageUUIDToExpectedProperties;

}

@property (nonatomic,retain) NSArray * assetsToUpload;                                    //@synthesize assetsToUpload=_assetsToUpload - In the implementation block
@property (nonatomic,retain) NSDictionary * assetUUIDToExpectedProperties;                //@synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * packageUUIDToExpectedProperties;              //@synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties - In the implementation block
@property (assign,nonatomic) BOOL temporary;                                              //@synthesize temporary=_temporary - In the implementation block
-(NSDictionary *)assetUUIDToExpectedProperties;
-(void)setAssetUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)packageUUIDToExpectedProperties;
-(void)setPackageUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(BOOL)temporary;
-(void)setTemporary:(BOOL)arg1 ;
-(NSArray *)assetsToUpload;
-(void)setAssetsToUpload:(NSArray *)arg1 ;
@end


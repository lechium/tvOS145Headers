/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PHAssetCollection, PHFetchResult, PHAsset;

@interface PXMemoryInfo : NSObject <NSCopying> {

	NSString* _localizedDateText;
	NSString* _localizedTitle;
	PHAssetCollection* _assetCollection;
	PHFetchResult* _keyAssetFetchResult;

}

@property (nonatomic,readonly) NSString * localizedDateText;                     //@synthesize localizedDateText=_localizedDateText - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                        //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHAsset * primaryAsset; 
@property (nonatomic,readonly) unsigned long long category; 
@property (nonatomic,readonly) double score; 
@property (nonatomic,readonly) PHFetchResult * keyAssetFetchResult;              //@synthesize keyAssetFetchResult=_keyAssetFetchResult - In the implementation block
+(id)fastMemoryInfoWithMemory:(id)arg1 ;
+(id)memoryInfoWithMemory:(id)arg1 ;
+(id)memoryInfoWithAssetCollection:(id)arg1 keyAssetFetchResult:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)category;
-(double)score;
-(NSString *)localizedTitle;
-(NSString *)localizedDateText;
-(PHAssetCollection *)assetCollection;
-(PHFetchResult *)keyAssetFetchResult;
-(id)memoryInfoWithUpdatedKeyAssetFetchResult:(id)arg1 ;
-(PHAsset *)primaryAsset;
@end


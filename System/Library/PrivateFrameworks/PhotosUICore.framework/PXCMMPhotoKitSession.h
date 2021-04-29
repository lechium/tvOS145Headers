/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCMMSession.h>

@class PXPhotoKitImportStatusManager, PXPhotoKitMomentShareStatus, NSString, PHMomentShare, PHSuggestion, PHAsset, PXPhotoKitAssetsDataSourceManager;

@interface PXCMMPhotoKitSession : PXCMMSession {

	PXPhotoKitImportStatusManager* _importStatusManager;
	PXPhotoKitMomentShareStatus* _photoKitMomentShareStatus;
	NSString* _photoKitImportSessionID;
	PHMomentShare* _momentShare;
	PHSuggestion* _suggestion;
	PHMomentShare* _originatingMomentShare;
	PHAsset* _anchorAsset;

}

@property (nonatomic,readonly) PHMomentShare * momentShare;                                        //@synthesize momentShare=_momentShare - In the implementation block
@property (nonatomic,readonly) PHSuggestion * suggestion;                                          //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) PHMomentShare * originatingMomentShare;                             //@synthesize originatingMomentShare=_originatingMomentShare - In the implementation block
@property (nonatomic,readonly) PXPhotoKitAssetsDataSourceManager * dataSourceManager; 
@property (assign,nonatomic,__weak) PHAsset * anchorAsset;                                         //@synthesize anchorAsset=_anchorAsset - In the implementation block
-(id)description;
-(id)initWithContext:(id)arg1 ;
-(PHMomentShare *)momentShare;
-(id)importSessionID;
-(PHSuggestion *)suggestion;
-(id)notificationSuppressionContexts;
-(id)importStatusManager;
-(id)momentShareStatus;
-(id)diagnosticDictionary;
-(PHMomentShare *)originatingMomentShare;
-(id)initWithPhotoKitContext:(id)arg1 ;
-(PHAsset *)anchorAsset;
-(void)setAnchorAsset:(PHAsset *)arg1 ;
@end


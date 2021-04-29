/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@interface PXPhotoKitSuggestionDeclineActionPerformer : PXPhotoKitAssetCollectionActionPerformer
+(BOOL)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)createAlertActionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)performUserInteractionTask;
-(void)performBackgroundTask;
@end


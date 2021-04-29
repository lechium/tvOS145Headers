/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCMMActionPerformer.h>
#import <libobjc.A.dylib/PXCMMPhotoKitActionPerformer.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitDeleteActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (nonatomic,readonly) PXCMMPhotoKitSession * session; 
-(void)performUserInteractionTask;
-(void)performBackgroundTask;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCuratedLibraryAssetCollectionActionPerformer.h>

@class PXGLayout;

@interface PXCuratedLibraryCurationDebugActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer {

	PXGLayout* _layoutForDiagnosticDescription;

}

@property (nonatomic,__weak,readonly) PXGLayout * layoutForDiagnosticDescription;              //@synthesize layoutForDiagnosticDescription=_layoutForDiagnosticDescription - In the implementation block
-(id)activityType;
-(id)activitySystemImageName;
-(void)performUserInteractionTask;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
-(id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 diagnosticLayout:(id)arg3 ;
-(PXGLayout *)layoutForDiagnosticDescription;
@end


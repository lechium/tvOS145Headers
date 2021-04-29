/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCMMContext.h>

@class PXCMMFileBackedActionManager;

@interface PXCMMFileBackedContext : PXCMMContext {

	PXCMMFileBackedActionManager* _fileBackedActionManager;

}
+(id)fileBackedContextWithDirectoryURL:(id)arg1 activityType:(unsigned long long)arg2 title:(id)arg3 ;
-(id)actionManager;
-(id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3 ;
@end


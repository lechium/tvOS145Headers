/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCMMActionPerformer.h>

@class NSURL;

@interface PXCMMShowMessageComposeActionPerformer : PXCMMActionPerformer {

	NSURL* _shareURL;

}

@property (nonatomic,readonly) NSURL * shareURL;              //@synthesize shareURL=_shareURL - In the implementation block
-(NSURL *)shareURL;
-(id)performActionWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performMessageComposeActionWithSession:(id)arg1 shareURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end


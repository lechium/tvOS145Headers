/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLAssetsdResourceInternalServiceProtocol <NSObject>
@required
-(void)batchSaveAssetJobs:(id)arg1 reply:(/*^block*/id)arg2;
-(void)prepareRevertToOriginalWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2;
-(void)asynchronousMasterThumbnailForAssetUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)purgeExpiredOutboundSharingAssetsWithReply:(/*^block*/id)arg1;

@end

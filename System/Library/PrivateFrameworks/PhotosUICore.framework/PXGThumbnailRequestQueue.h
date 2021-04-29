/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGThumbnailRequestQueue : NSObject {

	long long _capacity;
	long long _count;
	PXGThumbnailRequest* _requests;

}

@property (assign,nonatomic) long long count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) PXGThumbnailRequest* requests;              //@synthesize requests=_requests - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(PXGThumbnailRequest*)requests;
-(void)enqueueRequestsWithItemRange:(NSRange)arg1 textureRequestIDs:(NSRange)arg2 displayAssetFetchResult:(id)arg3 targetSize:(CGSize)arg4 ;
-(void)sortRequests;
-(void)removeAllRequests;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVHKImageLoadingOperation;
@class NSOperation;

@interface TVHKImageLoadContext : NSObject {

	NSOperation*<TVHKImageLoadingOperation> _imageLoadOperation;
	unsigned long long _requestCount;

}

@property (nonatomic,retain) NSOperation*<TVHKImageLoadingOperation> imageLoadOperation;              //@synthesize imageLoadOperation=_imageLoadOperation - In the implementation block
@property (assign,nonatomic) unsigned long long requestCount;                                         //@synthesize requestCount=_requestCount - In the implementation block
-(void)setRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)requestCount;
-(NSOperation*<TVHKImageLoadingOperation>)imageLoadOperation;
-(void)setImageLoadOperation:(NSOperation*<TVHKImageLoadingOperation>)arg1 ;
@end


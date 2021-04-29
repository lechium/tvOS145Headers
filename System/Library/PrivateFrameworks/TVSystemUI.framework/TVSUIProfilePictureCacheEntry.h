/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString, UIImage;

@interface TVSUIProfilePictureCacheEntry : NSObject {

	NSURL* _imageURL;
	NSString* _serverCacheTag;

}

@property (nonatomic,readonly) NSURL * imageURL;                       //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) NSString * serverCacheTag;              //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
-(UIImage *)image;
-(NSURL *)imageURL;
-(NSString *)serverCacheTag;
-(id)initWithImageURL:(id)arg1 serverCacheTag:(id)arg2 ;
@end

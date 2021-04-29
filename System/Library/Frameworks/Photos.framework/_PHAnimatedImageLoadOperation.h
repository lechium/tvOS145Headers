/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSURL, PHAnimatedImage;

@interface _PHAnimatedImageLoadOperation : NSOperation {

	long long _cacheStrategy;
	BOOL _useSharedImageDecoding;
	NSURL* _animatedImageURL;
	PHAnimatedImage* _animatedImage;

}

@property (retain) PHAnimatedImage * animatedImage;              //@synthesize animatedImage=_animatedImage - In the implementation block
+(id)_requestIsolationQueue;
+(id)_removeOperation:(long long)arg1 ;
+(void)_registerOperation:(id)arg1 forRequestID:(long long)arg2 ;
+(long long)nextRequestID;
+(id)_animatedImageSharedLoadingQueue;
+(id)_inq_animatedImageLoadingOperations;
-(void)main;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(BOOL)arg3 ;
-(PHAnimatedImage *)animatedImage;
-(void)setAnimatedImage:(PHAnimatedImage *)arg1 ;
@end


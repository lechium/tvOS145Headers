/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
#import <TVServices/TVServices-Structs.h>
@class NSObject;

@interface TVSCacheDeletePurgeID : NSObject {

	CacheDeleteTokenRef _token;
	NSObject*<OS_dispatch_semaphore> _tokenSemaphore;

}

@property (assign,nonatomic) CacheDeleteTokenRef token; 
-(id)_init;
-(CacheDeleteTokenRef)token;
-(void)setToken:(CacheDeleteTokenRef)arg1 ;
@end


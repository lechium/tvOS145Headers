/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface _UIActivityResourceLoader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _loadBlock;
	NSObject*<OS_dispatch_group> _group;
	id _resource;

}
-(id)initWithQueue:(id)arg1 loadBlock:(/*^block*/id)arg2 ;
-(void)_loadResourceWithBlock:(/*^block*/id)arg1 ;
-(void)loadResourceIfNeeded;
-(void)_getResourceWithBlock:(/*^block*/id)arg1 ;
-(void)getResourceWithBlock:(/*^block*/id)arg1 ;
@end


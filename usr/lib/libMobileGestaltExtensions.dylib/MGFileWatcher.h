/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libMobileGestaltExtensions.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <libMobileGestaltExtensions.dylib/libMobileGestaltExtensions.dylib-Structs.h>
@class NSString, NSObject;

@interface MGFileWatcher : NSObject {

	NSString* _path;
	unsigned long long _inode;
	timespec _mtime;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _src;
	NSObject*<OS_dispatch_source> _parentSrc;
	/*^block*/id _block;

}
-(void)dealloc;
-(void)cancel;
-(BOOL)updateWatcher;
-(id)initWithPath:(id)arg1 block:(/*^block*/id)arg2 ;
@end

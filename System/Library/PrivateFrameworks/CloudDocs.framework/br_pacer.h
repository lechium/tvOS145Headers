/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface br_pacer : NSObject {

	NSObject*<OS_dispatch_source> source;
	NSObject*<OS_dispatch_source> timer;
	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id event_block;
	double last_fire_time;
	double min_fire_interval;
	AB ever_resumed;

}
-(void)dealloc;
@end


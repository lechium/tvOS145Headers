/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSString, NSObject;

@interface OFMediaMetadataDatabaseCache : NSObject {

	NSString* _diskCacheFilepath;
	sqlite3Ref _sqliteDatabase;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)init;
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 ;
-(BOOL)_open;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)invalidateDiskCaches;
-(id)initWithDiskCacheFilepath:(id)arg1 ;
-(id)entryForIdentifier:(id)arg1 ;
-(id)newEntryWithIdentifier:(id)arg1 ;
@end


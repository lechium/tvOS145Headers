/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSHashTable, NSURL;

@interface PLFileSystemVolumeUnmountMonitor : NSObject {

	NSHashTable* _observers;
	os_unfair_lock_s _lock;
	NSURL* _volumeURL;

}
-(id)description;
-(void)dealloc;
-(id)initWithVolumeURL:(id)arg1 ;
-(void)addVolumeUnmountObserver:(id)arg1 ;
-(void)removeVolumeUnmountObserver:(id)arg1 ;
@end


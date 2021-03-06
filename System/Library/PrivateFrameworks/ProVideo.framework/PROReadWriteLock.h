/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface PROReadWriteLock : NSObject <NSLocking> {

	opaque_pthread_rwlock_t lock;

}
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)lockForReading;
-(void)lockForWriting;
@end


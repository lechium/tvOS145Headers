/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface _NSRefcountedPthreadMutex : NSObject {

	opaque_pthread_mutex_t lock;

}
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
@end


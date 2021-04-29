/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface TCPBufferPool : NSObject {

	int poolSize;
	tagBufferNode* head;
	tagBufferNode* tail;
	tagBufferNode* avail;
	int poolLock;

}
-(id)init;
-(void)dealloc;
-(void)monitorBufferPool;
-(char*)getBufferFromPool:(int)arg1 ;
-(void)returnBufferToPool:(char*)arg1 ;
@end

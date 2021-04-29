/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLQueueNode;

@interface NSURLQueue : NSObject {

	unsigned long long count;
	NSURLQueueNode* head;
	NSURLQueueNode* tail;
	id monitor;
	BOOL waitOnTake;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;

}
+(id)newNode;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(void)clear;
-(void)put:(id)arg1 ;
-(id)take;
-(id)peek;
-(id)peekAt:(unsigned long long)arg1 ;
-(BOOL)remove:(id)arg1 ;
-(long long)indexOf:(id)arg1 ;
-(BOOL)waitOnTake;
-(void)setWaitOnTake:(BOOL)arg1 ;
@end


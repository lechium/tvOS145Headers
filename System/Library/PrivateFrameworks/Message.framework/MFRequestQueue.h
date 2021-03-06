/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSConditionLock, NSMutableArray;

@interface MFRequestQueue : NSObject {

	NSConditionLock* _condition;
	NSMutableArray* _requests;
	NSMutableArray* _consumers;
	unsigned _waitingOutside;
	unsigned _waitingInside;

}
-(id)init;
-(void)dealloc;
-(void)addRequests:(id)arg1 consumers:(id)arg2 ;
-(void)processRequests:(id)arg1 consumers:(id)arg2 ;
-(void)willAddRequests:(id)arg1 consumers:(id)arg2 ;
-(void)_processRequests:(id)arg1 consumers:(id)arg2 ;
-(void)processRequest:(id)arg1 consumer:(id)arg2 ;
-(void)addRequest:(id)arg1 consumer:(id)arg2 ;
@end

